#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)14679;
long long int var_6 = -7445124657599436348LL;
unsigned int var_7 = 69348682U;
long long int var_12 = 7874572289156389055LL;
int zero = 0;
unsigned short var_14 = (unsigned short)23195;
signed char var_15 = (signed char)122;
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
