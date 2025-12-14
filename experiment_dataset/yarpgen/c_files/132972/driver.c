#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)63929;
unsigned short var_3 = (unsigned short)768;
long long int var_4 = 2325587757553865300LL;
long long int var_5 = -8670176305796056200LL;
long long int var_12 = 2991725951803589328LL;
unsigned short var_13 = (unsigned short)11242;
unsigned int var_15 = 701068691U;
unsigned int var_16 = 2914608634U;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 12972454217144532471ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
