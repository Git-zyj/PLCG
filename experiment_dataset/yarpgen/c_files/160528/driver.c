#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1718200972U;
unsigned short var_8 = (unsigned short)30936;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_10 = 2505199775U;
unsigned char var_11 = (unsigned char)168;
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
