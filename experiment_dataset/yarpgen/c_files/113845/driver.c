#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8142;
signed char var_1 = (signed char)-89;
unsigned long long int var_2 = 2047314000333144674ULL;
unsigned long long int var_6 = 11666238771024084652ULL;
int var_9 = 992113333;
short var_10 = (short)5224;
int zero = 0;
unsigned short var_12 = (unsigned short)60720;
unsigned long long int var_13 = 9935314670081629237ULL;
unsigned short var_14 = (unsigned short)59133;
int var_15 = -534403734;
int var_16 = 707726333;
short arr_0 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (short)3041;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
