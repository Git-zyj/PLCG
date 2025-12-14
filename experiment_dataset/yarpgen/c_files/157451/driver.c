#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)31;
unsigned int var_7 = 2640304701U;
unsigned short var_9 = (unsigned short)49905;
int zero = 0;
int var_12 = 542063794;
unsigned int var_13 = 733253745U;
unsigned long long int var_14 = 6652186229667075575ULL;
long long int var_15 = -4681090577168594324LL;
unsigned short var_16 = (unsigned short)13187;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
