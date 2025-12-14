#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20423;
long long int var_8 = 387587629830967455LL;
unsigned int var_10 = 348678427U;
unsigned long long int var_16 = 6206373388630724533ULL;
int zero = 0;
signed char var_18 = (signed char)62;
unsigned int var_19 = 2606221370U;
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
