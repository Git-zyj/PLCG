#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15652597415111088715ULL;
int var_1 = 131509945;
int var_3 = -363738794;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 2371216007847342764ULL;
short var_6 = (short)24872;
signed char var_7 = (signed char)2;
signed char var_8 = (signed char)-87;
int var_9 = -470011497;
int zero = 0;
short var_10 = (short)20556;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)88;
_Bool var_13 = (_Bool)0;
long long int var_14 = -309616083045667116LL;
short var_15 = (short)31093;
short var_16 = (short)2094;
int var_17 = -483437404;
unsigned int var_18 = 2053747220U;
_Bool var_19 = (_Bool)1;
signed char arr_0 [10] [10] ;
short arr_5 [10] ;
int arr_8 [10] [10] [10] [10] ;
short arr_12 [10] [10] ;
short arr_13 [10] ;
long long int arr_6 [10] [10] [10] ;
int arr_14 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)33;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (short)22209;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 1253155429;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = (short)-6459;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (short)31782 : (short)3640;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 970763794793407278LL : -2283243564955615733LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 1974014987 : -1839607133;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
