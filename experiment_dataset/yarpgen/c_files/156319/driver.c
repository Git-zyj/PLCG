#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15564955725221142799ULL;
unsigned int var_7 = 3627312904U;
unsigned long long int var_9 = 5229561376287790619ULL;
int zero = 0;
int var_10 = -684256179;
int var_11 = 549241329;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
