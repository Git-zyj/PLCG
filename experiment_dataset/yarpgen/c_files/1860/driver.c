#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -756019906;
int var_7 = -1050323977;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 781266323U;
int zero = 0;
short var_14 = (short)-28319;
long long int var_15 = 1432258132036400968LL;
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
