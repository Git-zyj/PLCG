#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -845248149;
unsigned short var_7 = (unsigned short)45160;
unsigned short var_8 = (unsigned short)42311;
unsigned short var_11 = (unsigned short)51286;
int zero = 0;
unsigned long long int var_13 = 10018568917575628391ULL;
unsigned int var_14 = 3190836313U;
unsigned long long int var_15 = 5985612377747317850ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
