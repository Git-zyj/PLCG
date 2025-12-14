#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)33147;
unsigned char var_3 = (unsigned char)236;
unsigned short var_4 = (unsigned short)30827;
unsigned int var_5 = 3932674529U;
int var_6 = 1697292946;
long long int var_9 = 2852524396094482673LL;
signed char var_10 = (signed char)-105;
int zero = 0;
unsigned char var_13 = (unsigned char)14;
long long int var_14 = 4194344442739985345LL;
int var_15 = -1409268329;
short var_16 = (short)2986;
int arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 2011781165 : -1085622206;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
