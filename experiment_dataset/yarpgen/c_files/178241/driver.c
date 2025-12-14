#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52972;
short var_5 = (short)-23311;
unsigned char var_7 = (unsigned char)147;
signed char var_9 = (signed char)-77;
unsigned long long int var_11 = 4999657319518911332ULL;
unsigned short var_12 = (unsigned short)58392;
unsigned short var_13 = (unsigned short)23233;
long long int var_14 = 698615101629149980LL;
int zero = 0;
short var_17 = (short)4444;
unsigned int var_18 = 491472749U;
unsigned short var_19 = (unsigned short)3443;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)26939;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)199;
_Bool arr_3 [18] [18] [18] ;
short arr_6 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)14764;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
