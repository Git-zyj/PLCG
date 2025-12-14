#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)107;
int var_4 = 93027537;
signed char var_5 = (signed char)120;
signed char var_8 = (signed char)86;
_Bool var_10 = (_Bool)0;
short var_14 = (short)-12126;
int zero = 0;
long long int var_16 = -3840971441995236053LL;
int var_17 = 1263215384;
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
