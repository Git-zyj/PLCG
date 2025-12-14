#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 8187522784139843420ULL;
unsigned int var_7 = 2113235812U;
unsigned short var_9 = (unsigned short)7541;
int zero = 0;
unsigned short var_16 = (unsigned short)27167;
long long int var_17 = 2776687422942972472LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
