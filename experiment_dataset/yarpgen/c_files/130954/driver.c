#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16370240353188625305ULL;
unsigned int var_7 = 2350743854U;
unsigned short var_10 = (unsigned short)9867;
int zero = 0;
long long int var_18 = 3188480923876053791LL;
unsigned long long int var_19 = 2055287541354882168ULL;
unsigned short var_20 = (unsigned short)30415;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
