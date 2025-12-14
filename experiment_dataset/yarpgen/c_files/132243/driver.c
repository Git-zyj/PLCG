#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1500652660;
long long int var_1 = -5869733655777448423LL;
long long int var_2 = 8741461074824333773LL;
unsigned short var_3 = (unsigned short)22865;
unsigned int var_5 = 3333052316U;
unsigned int var_6 = 2755719164U;
unsigned short var_7 = (unsigned short)27190;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 17416954428424902554ULL;
long long int var_10 = -8845099028559132941LL;
unsigned long long int var_11 = 4156663839808432558ULL;
unsigned long long int var_12 = 5189181817473450324ULL;
unsigned int var_14 = 1318986323U;
long long int var_15 = -268332858227279472LL;
int zero = 0;
unsigned char var_16 = (unsigned char)112;
int var_17 = -338021354;
short var_18 = (short)-28301;
short var_19 = (short)-8721;
unsigned char var_20 = (unsigned char)111;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)-79;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)145;
unsigned long long int arr_15 [13] [13] [13] ;
_Bool arr_21 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 9444032394504249468ULL : 12385654230998136948ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
