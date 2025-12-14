#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)234;
unsigned int var_6 = 178660465U;
unsigned short var_7 = (unsigned short)37930;
unsigned char var_11 = (unsigned char)33;
unsigned long long int var_13 = 13756248625144161950ULL;
unsigned short var_16 = (unsigned short)28378;
unsigned int var_17 = 677875986U;
int zero = 0;
unsigned long long int var_19 = 3804393399312762723ULL;
unsigned char var_20 = (unsigned char)112;
unsigned char var_21 = (unsigned char)9;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)28864;
unsigned long long int var_24 = 16104911915612780838ULL;
short var_25 = (short)28320;
unsigned long long int var_26 = 9653888979851058411ULL;
int var_27 = -34399969;
long long int var_28 = 125560071019151758LL;
_Bool var_29 = (_Bool)1;
short arr_4 [13] ;
unsigned char arr_6 [13] [13] [13] ;
unsigned long long int arr_7 [13] [13] [13] ;
int arr_12 [13] [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (short)-24891;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)202 : (unsigned char)230;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 4466317600570180271ULL : 17270239331702085958ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = -2362122;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
