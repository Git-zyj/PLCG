#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2664554692U;
long long int var_2 = 3455987159109367834LL;
unsigned char var_3 = (unsigned char)147;
unsigned char var_4 = (unsigned char)45;
unsigned char var_5 = (unsigned char)101;
unsigned long long int var_6 = 17573839739336494303ULL;
signed char var_7 = (signed char)-10;
unsigned char var_8 = (unsigned char)84;
unsigned char var_9 = (unsigned char)140;
unsigned char var_10 = (unsigned char)140;
int zero = 0;
unsigned int var_11 = 2487663599U;
unsigned int var_12 = 3251757836U;
int var_13 = 1542530862;
long long int var_14 = -3402253139418070099LL;
int var_15 = 1330166172;
unsigned short arr_0 [13] ;
signed char arr_1 [13] [13] ;
unsigned char arr_2 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)30518;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-112;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)103;
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
