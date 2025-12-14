#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-13;
unsigned short var_4 = (unsigned short)16945;
long long int var_7 = -8714260244515078473LL;
short var_9 = (short)-32266;
unsigned char var_11 = (unsigned char)61;
int var_17 = -1088293212;
unsigned long long int var_18 = 10474722019528540418ULL;
int zero = 0;
unsigned long long int var_20 = 4672149471745360916ULL;
long long int var_21 = 1128659871068144194LL;
unsigned char var_22 = (unsigned char)25;
unsigned int var_23 = 3482124835U;
signed char var_24 = (signed char)-70;
unsigned char var_25 = (unsigned char)149;
signed char var_26 = (signed char)102;
unsigned char arr_0 [16] ;
short arr_1 [16] ;
unsigned int arr_3 [16] [16] [16] ;
signed char arr_5 [16] [16] [16] ;
unsigned int arr_7 [16] [16] [16] [16] ;
unsigned short arr_13 [22] ;
unsigned long long int arr_14 [22] ;
unsigned int arr_8 [16] ;
unsigned long long int arr_9 [16] [16] ;
short arr_10 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)-20241;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1567424735U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)102;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 4234042668U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (unsigned short)24773;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = 13741021029109736250ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = 602764979U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = 11054549239894670079ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = (short)-19299;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
