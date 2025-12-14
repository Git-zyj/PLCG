#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)3;
unsigned short var_9 = (unsigned short)4639;
unsigned long long int var_15 = 15084949090509128527ULL;
signed char var_17 = (signed char)18;
int zero = 0;
unsigned long long int var_18 = 4181331750858570142ULL;
unsigned long long int var_19 = 10276443959663533814ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
