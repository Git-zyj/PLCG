#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 16471102282403368848ULL;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)9;
int zero = 0;
unsigned long long int var_14 = 7804130185223001444ULL;
unsigned int var_15 = 2218460069U;
unsigned long long int var_16 = 733426946658513817ULL;
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
