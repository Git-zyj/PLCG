#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2970996242U;
long long int var_5 = -5711227498280291724LL;
_Bool var_11 = (_Bool)1;
int var_12 = 1848875325;
unsigned long long int var_14 = 13907660395264965943ULL;
signed char var_15 = (signed char)102;
int zero = 0;
short var_18 = (short)-15890;
unsigned char var_19 = (unsigned char)27;
unsigned char var_20 = (unsigned char)162;
unsigned int var_21 = 4099519563U;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)-45;
short var_24 = (short)28918;
short var_25 = (short)15893;
unsigned short var_26 = (unsigned short)837;
long long int var_27 = 600049462065769635LL;
unsigned char arr_4 [24] [24] [24] ;
unsigned char arr_7 [24] [24] [24] [24] ;
long long int arr_8 [24] [24] [24] ;
unsigned char arr_9 [24] ;
unsigned short arr_12 [19] ;
short arr_16 [19] [19] [19] ;
long long int arr_18 [19] ;
signed char arr_10 [24] [24] [24] ;
signed char arr_11 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)207 : (unsigned char)43;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)84;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -7021865892559800319LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (unsigned char)86;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = (unsigned short)4669;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (short)-30308;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = 7974760901063536925LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)51 : (signed char)-124;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-122 : (signed char)-114;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
