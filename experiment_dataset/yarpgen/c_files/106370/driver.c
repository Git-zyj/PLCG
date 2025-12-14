#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13220556722227191863ULL;
unsigned long long int var_2 = 3409101218837933131ULL;
short var_7 = (short)24802;
int var_13 = 895050004;
int zero = 0;
short var_15 = (short)-10688;
int var_16 = -1605275710;
long long int var_17 = -8060525428274685970LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
