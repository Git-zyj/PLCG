#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7755;
unsigned char var_3 = (unsigned char)246;
_Bool var_6 = (_Bool)1;
unsigned short var_10 = (unsigned short)23577;
int zero = 0;
int var_15 = -239139075;
unsigned long long int var_16 = 10517060990473879809ULL;
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
