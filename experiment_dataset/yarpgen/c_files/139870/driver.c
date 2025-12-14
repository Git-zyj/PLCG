#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)26;
unsigned long long int var_4 = 15597286538920878133ULL;
unsigned int var_12 = 3938350764U;
int zero = 0;
unsigned short var_15 = (unsigned short)18969;
long long int var_16 = 6329719287327600839LL;
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
