#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1469152025;
short var_3 = (short)826;
signed char var_5 = (signed char)-56;
unsigned char var_6 = (unsigned char)226;
unsigned long long int var_7 = 16236528849686315781ULL;
unsigned char var_8 = (unsigned char)250;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_10 = 9013127529600068889LL;
signed char var_11 = (signed char)16;
signed char var_12 = (signed char)24;
short var_13 = (short)21778;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 965749127U;
unsigned int var_16 = 2073890110U;
_Bool var_17 = (_Bool)1;
int var_18 = 1648595692;
short var_19 = (short)12024;
short var_20 = (short)-15375;
short arr_1 [13] [13] ;
signed char arr_3 [13] ;
unsigned long long int arr_5 [13] [13] ;
short arr_6 [13] [13] ;
long long int arr_9 [13] [13] [13] [13] [13] ;
unsigned long long int arr_13 [13] [13] [13] [13] [13] [13] [13] ;
_Bool arr_20 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (short)13878;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 10637107655188823741ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (short)12009;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = -3065267983435414279LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 3264804094395076136ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_20 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
