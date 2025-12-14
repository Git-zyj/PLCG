#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1759189204;
_Bool var_6 = (_Bool)1;
unsigned int var_10 = 3196971599U;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 14572479161723113226ULL;
long long int var_13 = 3105757815919397336LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
