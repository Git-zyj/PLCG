#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14794685261784580396ULL;
unsigned long long int var_6 = 12876303236592705989ULL;
int zero = 0;
unsigned long long int var_13 = 16824484309452988559ULL;
unsigned short var_14 = (unsigned short)54679;
unsigned long long int var_15 = 35387339801579580ULL;
unsigned short var_16 = (unsigned short)6682;
unsigned short var_17 = (unsigned short)11876;
unsigned short var_18 = (unsigned short)26022;
unsigned long long int var_19 = 3961986637958684568ULL;
unsigned short var_20 = (unsigned short)39507;
unsigned long long int var_21 = 5483219404747002046ULL;
unsigned long long int var_22 = 9765417236003558509ULL;
unsigned short var_23 = (unsigned short)52031;
unsigned long long int var_24 = 4318632073328277979ULL;
unsigned long long int arr_9 [19] [19] [19] [19] ;
unsigned short arr_10 [23] ;
unsigned short arr_11 [23] ;
unsigned long long int arr_3 [19] [19] ;
unsigned long long int arr_12 [23] ;
unsigned short arr_15 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 9193376709385792839ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (unsigned short)49598;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (unsigned short)4852;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 12814103823838867261ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = 10192634200438405398ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)7477;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
