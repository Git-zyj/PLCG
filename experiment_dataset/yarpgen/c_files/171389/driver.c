#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 17638696719845400164ULL;
unsigned char var_6 = (unsigned char)164;
_Bool var_14 = (_Bool)1;
long long int var_16 = 5924761205620773300LL;
int zero = 0;
long long int var_17 = -223909344899841650LL;
unsigned long long int var_18 = 8891223826187422635ULL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
