#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)20;
int var_4 = 1242127490;
unsigned long long int var_5 = 2049444364849225074ULL;
long long int var_9 = 852277580200492429LL;
int zero = 0;
short var_11 = (short)-12315;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
