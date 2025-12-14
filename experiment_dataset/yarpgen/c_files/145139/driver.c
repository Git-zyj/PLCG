#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-68;
unsigned int var_7 = 1196601331U;
unsigned int var_8 = 4079241988U;
int zero = 0;
unsigned long long int var_10 = 8936112984094767393ULL;
unsigned char var_11 = (unsigned char)120;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
