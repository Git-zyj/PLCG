#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4794362722364360009LL;
unsigned short var_2 = (unsigned short)33296;
unsigned char var_8 = (unsigned char)110;
unsigned int var_14 = 4080886919U;
int zero = 0;
signed char var_15 = (signed char)6;
long long int var_16 = -1742423791425858435LL;
void init() {
}

void checksum() {
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
