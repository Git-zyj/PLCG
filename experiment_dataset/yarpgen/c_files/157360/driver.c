#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11541;
short var_3 = (short)21258;
_Bool var_11 = (_Bool)1;
short var_13 = (short)22044;
int zero = 0;
unsigned long long int var_17 = 6173933321672389720ULL;
unsigned long long int var_18 = 11049274261880004080ULL;
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
