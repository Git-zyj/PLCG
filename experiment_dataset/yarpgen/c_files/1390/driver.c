#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)-26702;
unsigned char var_3 = (unsigned char)240;
long long int var_4 = -2025610418998164780LL;
long long int var_8 = 209411778274086835LL;
long long int var_11 = 7967309127686327629LL;
int zero = 0;
long long int var_16 = -2384549373673985748LL;
short var_17 = (short)30413;
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
