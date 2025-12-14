#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1405737068U;
unsigned int var_1 = 3920810491U;
unsigned long long int var_2 = 9247148403975210141ULL;
int var_3 = 201103683;
unsigned char var_5 = (unsigned char)26;
int var_9 = -1054424895;
unsigned int var_10 = 2980891483U;
unsigned char var_11 = (unsigned char)61;
unsigned long long int var_12 = 13304271531591708018ULL;
int var_16 = -1930466759;
unsigned int var_19 = 4124750559U;
int zero = 0;
int var_20 = -1640119342;
int var_21 = -1494519538;
unsigned int var_22 = 4067783108U;
unsigned long long int var_23 = 13534346868711877381ULL;
int var_24 = 1443092024;
unsigned char var_25 = (unsigned char)207;
unsigned long long int var_26 = 8691484028371178067ULL;
int var_27 = 1929107714;
int arr_3 [10] [10] [10] ;
unsigned char arr_8 [13] [13] ;
signed char arr_11 [13] ;
unsigned int arr_12 [13] [13] [13] [13] ;
signed char arr_13 [13] [13] [13] ;
unsigned char arr_4 [10] [10] ;
unsigned long long int arr_14 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 628190729;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (signed char)-70;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 2485748042U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = 119894968618448599ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
