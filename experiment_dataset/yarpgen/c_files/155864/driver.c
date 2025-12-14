#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)63141;
unsigned int var_10 = 2040898931U;
unsigned short var_11 = (unsigned short)11623;
int zero = 0;
long long int var_15 = 2381632211601533043LL;
unsigned int var_16 = 1232228707U;
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
