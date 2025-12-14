#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)53;
unsigned long long int var_1 = 12871323673921164782ULL;
short var_2 = (short)28453;
int var_3 = 1747980915;
unsigned char var_4 = (unsigned char)89;
unsigned long long int var_5 = 8694178301243444642ULL;
unsigned long long int var_6 = 11992515127117049736ULL;
unsigned char var_7 = (unsigned char)175;
unsigned short var_8 = (unsigned short)3193;
int zero = 0;
signed char var_12 = (signed char)-78;
unsigned char var_13 = (unsigned char)123;
short var_14 = (short)29892;
unsigned int var_15 = 3587033547U;
short var_16 = (short)25585;
short var_17 = (short)25625;
unsigned char var_18 = (unsigned char)153;
long long int arr_0 [22] ;
long long int arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 7760188045700524629LL : 3855108753784598197LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -7802779385082323011LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
