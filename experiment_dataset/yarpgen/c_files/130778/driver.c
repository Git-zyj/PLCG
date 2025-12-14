#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3521936875475553768ULL;
int var_6 = 1730366191;
int var_9 = 1832756261;
int zero = 0;
long long int var_14 = 3728708634701211118LL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 4596144176206099520ULL;
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
