#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2460897329652956960ULL;
unsigned short var_14 = (unsigned short)18932;
int zero = 0;
unsigned long long int var_16 = 5862478488125963878ULL;
unsigned long long int var_17 = 6050370676743449579ULL;
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
