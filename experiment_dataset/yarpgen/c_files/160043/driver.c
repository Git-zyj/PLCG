#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7574224686731192283LL;
unsigned long long int var_3 = 16017294940729646896ULL;
int var_4 = 100294561;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-12675;
int zero = 0;
short var_14 = (short)-3290;
int var_15 = -770723010;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
