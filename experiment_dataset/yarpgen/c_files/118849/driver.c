#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_4 = 18377913300183315611ULL;
unsigned char var_5 = (unsigned char)11;
unsigned int var_6 = 2389387722U;
unsigned long long int var_8 = 5628771513116215528ULL;
unsigned int var_9 = 3506419154U;
int zero = 0;
unsigned long long int var_11 = 8258858813876445117ULL;
signed char var_12 = (signed char)-23;
signed char var_13 = (signed char)-11;
unsigned long long int var_14 = 1793061639535201051ULL;
unsigned long long int var_15 = 9071818886131652254ULL;
int arr_1 [16] [16] ;
unsigned int arr_2 [16] ;
unsigned short arr_3 [16] ;
short arr_4 [16] [16] ;
long long int arr_5 [16] ;
unsigned int arr_7 [16] [16] [16] ;
int arr_9 [16] [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 1368532609;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 1883574394U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned short)55923;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (short)20034;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 9066523794062834501LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 155380337U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? -1851872276 : -419634747;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
