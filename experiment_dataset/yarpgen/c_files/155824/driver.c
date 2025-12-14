#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_7 = 10501447511042914453ULL;
long long int var_8 = -4142124215926480053LL;
int var_13 = -1539484334;
int zero = 0;
int var_15 = 671322353;
unsigned char var_16 = (unsigned char)127;
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
