#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1533700971U;
signed char var_6 = (signed char)-23;
signed char var_8 = (signed char)6;
int zero = 0;
unsigned int var_11 = 1140283340U;
unsigned short var_12 = (unsigned short)30555;
unsigned long long int var_13 = 16620975813284118151ULL;
unsigned short var_14 = (unsigned short)520;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
