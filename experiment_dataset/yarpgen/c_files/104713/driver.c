#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)186;
signed char var_12 = (signed char)-3;
long long int var_16 = -5666710938001220547LL;
int zero = 0;
signed char var_20 = (signed char)-97;
unsigned int var_21 = 1271190192U;
unsigned char var_22 = (unsigned char)216;
unsigned short var_23 = (unsigned short)47419;
long long int var_24 = 4295146631123190536LL;
long long int var_25 = -9181384210990361697LL;
signed char arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)90;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
