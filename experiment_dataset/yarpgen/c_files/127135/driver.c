#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -4007568076827388381LL;
int var_16 = -904834490;
signed char var_17 = (signed char)34;
int zero = 0;
unsigned short var_18 = (unsigned short)39889;
short var_19 = (short)14114;
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
