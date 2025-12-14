#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-21085;
unsigned short var_9 = (unsigned short)51807;
unsigned short var_12 = (unsigned short)61529;
unsigned short var_15 = (unsigned short)64006;
unsigned short var_17 = (unsigned short)44171;
int zero = 0;
int var_19 = 1617818190;
signed char var_20 = (signed char)120;
unsigned short var_21 = (unsigned short)8239;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
