#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1020356457U;
short var_1 = (short)-15350;
short var_2 = (short)8983;
short var_3 = (short)25415;
short var_5 = (short)-10853;
unsigned int var_7 = 2347961280U;
unsigned char var_8 = (unsigned char)81;
int var_10 = -526117264;
unsigned char var_12 = (unsigned char)132;
unsigned long long int var_14 = 16858901873653732306ULL;
int zero = 0;
signed char var_15 = (signed char)-62;
unsigned long long int var_16 = 13355796392310748096ULL;
int var_17 = 761935641;
unsigned int var_18 = 4069065375U;
unsigned char var_19 = (unsigned char)17;
short var_20 = (short)-20525;
unsigned int var_21 = 3702464181U;
unsigned short var_22 = (unsigned short)23359;
short var_23 = (short)17526;
unsigned long long int var_24 = 9538291849122655648ULL;
short arr_0 [20] ;
int arr_3 [10] ;
unsigned long long int arr_4 [10] ;
unsigned int arr_6 [10] ;
short arr_9 [12] ;
long long int arr_10 [12] ;
short arr_2 [20] [20] ;
unsigned int arr_8 [10] [10] [10] ;
long long int arr_11 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (short)13889;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = -1286717575;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 5560309621208099263ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 3805804242U : 86385318U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)25245 : (short)16761;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = -7601691201760924258LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-8527;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1254097395U : 2747934600U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -5257170384023886925LL : 2358181080154363553LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
