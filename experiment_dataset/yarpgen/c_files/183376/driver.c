#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)38;
unsigned long long int var_3 = 2974914872277325672ULL;
unsigned long long int var_5 = 2358055558853012489ULL;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)-61;
unsigned char var_11 = (unsigned char)52;
long long int var_15 = 8554480572388842866LL;
unsigned char var_18 = (unsigned char)86;
int zero = 0;
short var_20 = (short)16664;
int var_21 = 1538666209;
short var_22 = (short)-3100;
int var_23 = 1132271944;
long long int arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -4855935873578362316LL : -7691438414125045235LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
