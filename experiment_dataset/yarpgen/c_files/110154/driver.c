#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 6212354867551081218ULL;
long long int var_10 = 5836215692859845372LL;
int zero = 0;
long long int var_14 = -1594572732636886894LL;
unsigned long long int var_15 = 16051364007108167446ULL;
unsigned short var_16 = (unsigned short)28194;
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
