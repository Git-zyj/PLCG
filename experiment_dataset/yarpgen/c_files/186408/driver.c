#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 607559158;
signed char var_15 = (signed char)72;
signed char var_16 = (signed char)5;
int zero = 0;
signed char var_17 = (signed char)-61;
unsigned int var_18 = 2776819512U;
int var_19 = 373703534;
signed char var_20 = (signed char)117;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
