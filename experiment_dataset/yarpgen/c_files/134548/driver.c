#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8452727925148714883ULL;
unsigned int var_6 = 3904981060U;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)175;
unsigned char var_12 = (unsigned char)24;
signed char var_13 = (signed char)15;
unsigned char var_17 = (unsigned char)152;
int zero = 0;
long long int var_19 = 4969966062417801123LL;
unsigned char var_20 = (unsigned char)227;
unsigned long long int var_21 = 337246443143709603ULL;
unsigned char var_22 = (unsigned char)240;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
