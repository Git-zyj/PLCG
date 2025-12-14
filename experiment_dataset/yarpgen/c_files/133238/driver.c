#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_3 = (short)27420;
short var_10 = (short)20070;
short var_11 = (short)-7376;
short var_12 = (short)-21123;
short var_13 = (short)9192;
int zero = 0;
long long int var_14 = -6267412550361169554LL;
long long int var_15 = 4387417686344845610LL;
long long int var_16 = -6797525112190742326LL;
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
