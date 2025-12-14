#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-15059;
unsigned long long int var_5 = 2686347934017902245ULL;
_Bool var_6 = (_Bool)1;
unsigned char var_8 = (unsigned char)1;
unsigned long long int var_10 = 7390730058989227338ULL;
unsigned long long int var_12 = 13512298659878598478ULL;
unsigned long long int var_13 = 13258841319181426210ULL;
int zero = 0;
short var_14 = (short)9527;
signed char var_15 = (signed char)-15;
short var_16 = (short)4023;
unsigned long long int var_17 = 13031183481687845010ULL;
signed char var_18 = (signed char)3;
void init() {
}

void checksum() {
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
