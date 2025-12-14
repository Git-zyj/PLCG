#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-31;
unsigned char var_4 = (unsigned char)124;
long long int var_10 = -3134929513012949337LL;
int zero = 0;
unsigned long long int var_14 = 8613901566423648093ULL;
unsigned long long int var_15 = 15039749775324316848ULL;
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
