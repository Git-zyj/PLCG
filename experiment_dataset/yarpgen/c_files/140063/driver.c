#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-42;
unsigned long long int var_4 = 12188887564660411159ULL;
unsigned int var_9 = 696195389U;
int zero = 0;
unsigned int var_14 = 428363905U;
unsigned char var_15 = (unsigned char)35;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
