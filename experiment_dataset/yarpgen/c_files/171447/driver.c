#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -2309646155618825851LL;
unsigned char var_7 = (unsigned char)91;
unsigned int var_13 = 2090296654U;
int zero = 0;
long long int var_14 = 946392350720691175LL;
unsigned int var_15 = 4072683513U;
int var_16 = 1973743884;
void init() {
}

void checksum() {
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
