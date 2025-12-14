#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53303;
unsigned char var_1 = (unsigned char)131;
long long int var_2 = -8127599003595136071LL;
short var_3 = (short)-9514;
int var_4 = 597469336;
signed char var_5 = (signed char)88;
unsigned long long int var_10 = 4466472938211937334ULL;
unsigned long long int var_12 = 5281304125205143283ULL;
unsigned long long int var_13 = 11304910997922936830ULL;
unsigned char var_14 = (unsigned char)182;
signed char var_15 = (signed char)67;
signed char var_16 = (signed char)20;
int zero = 0;
short var_17 = (short)-9208;
unsigned char var_18 = (unsigned char)61;
int var_19 = -118714549;
unsigned char var_20 = (unsigned char)74;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-14;
unsigned long long int var_23 = 17255459351521904249ULL;
unsigned char var_24 = (unsigned char)239;
int arr_3 [14] ;
short arr_4 [14] [14] ;
signed char arr_8 [14] [14] [14] [14] [14] [14] ;
short arr_11 [14] [14] [14] [14] ;
unsigned char arr_12 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = -1185956933;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-22877;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-120;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (short)22079;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (unsigned char)108;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
