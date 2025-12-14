#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1695533843;
unsigned int var_3 = 4195304891U;
unsigned long long int var_8 = 18163356279306955209ULL;
short var_10 = (short)-21834;
int zero = 0;
short var_13 = (short)-17675;
signed char var_14 = (signed char)-34;
unsigned int var_15 = 1117066407U;
short var_16 = (short)-24050;
void init() {
}

void checksum() {
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
