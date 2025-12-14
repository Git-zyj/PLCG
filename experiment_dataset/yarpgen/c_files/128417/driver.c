#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-28998;
int var_4 = 1256261743;
short var_5 = (short)-4990;
short var_10 = (short)24256;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_17 = -611106515;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-88;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
