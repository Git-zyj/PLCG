#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -448777252;
long long int var_3 = 4072366650080902716LL;
short var_5 = (short)14828;
unsigned char var_6 = (unsigned char)59;
unsigned int var_8 = 1051038657U;
int var_9 = -632744644;
short var_12 = (short)-16036;
int zero = 0;
signed char var_19 = (signed char)112;
short var_20 = (short)-4964;
unsigned int var_21 = 4034038385U;
unsigned char var_22 = (unsigned char)61;
unsigned long long int var_23 = 3876560916517539880ULL;
long long int arr_0 [13] ;
long long int arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -7213999777550368895LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 177878334428674461LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
