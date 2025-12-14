#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -5624761140089415421LL;
short var_8 = (short)30614;
unsigned short var_9 = (unsigned short)39856;
int zero = 0;
unsigned int var_12 = 1813203392U;
_Bool var_13 = (_Bool)1;
short var_14 = (short)2514;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
