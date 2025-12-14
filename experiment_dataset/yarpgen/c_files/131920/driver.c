#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16333686760205853316ULL;
signed char var_1 = (signed char)5;
unsigned short var_9 = (unsigned short)2677;
int zero = 0;
unsigned long long int var_17 = 10846525919545955973ULL;
unsigned int var_18 = 2849251907U;
void init() {
}

void checksum() {
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
