#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1724231308;
int var_5 = -768771976;
long long int var_6 = 2455734673935565224LL;
long long int var_9 = 3765987215330249833LL;
long long int var_11 = 6157959369115710558LL;
int zero = 0;
short var_13 = (short)-4466;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
