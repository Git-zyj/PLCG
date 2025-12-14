#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5005136611110537782ULL;
unsigned long long int var_3 = 2539805935312745461ULL;
unsigned long long int var_4 = 9264534030098513380ULL;
unsigned long long int var_6 = 17153388054679751467ULL;
unsigned long long int var_8 = 17304467824278740334ULL;
unsigned long long int var_9 = 11291860533423739304ULL;
int zero = 0;
unsigned int var_10 = 469224219U;
unsigned short var_11 = (unsigned short)11960;
unsigned char var_12 = (unsigned char)168;
int var_13 = -1087300341;
signed char arr_0 [25] [25] ;
unsigned int arr_1 [25] ;
unsigned long long int arr_5 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-49;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 2209074567U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 6407282880829605077ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
