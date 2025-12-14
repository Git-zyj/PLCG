#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2919511370U;
_Bool var_8 = (_Bool)0;
short var_10 = (short)-18835;
unsigned long long int var_15 = 18434218234667058665ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)44;
unsigned int var_17 = 2179231623U;
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
