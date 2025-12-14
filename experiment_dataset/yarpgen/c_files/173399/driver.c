#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -200878775;
long long int var_1 = 6803938320276889252LL;
long long int var_2 = 3385063796385216245LL;
unsigned int var_3 = 3683804001U;
short var_5 = (short)-7044;
short var_6 = (short)15281;
unsigned char var_7 = (unsigned char)166;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 134077021U;
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
