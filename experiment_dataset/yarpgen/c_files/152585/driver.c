#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 16314165378907817627ULL;
short var_3 = (short)9387;
int var_4 = 1642798065;
int var_7 = 1658402749;
unsigned long long int var_8 = 16410568374278188347ULL;
int zero = 0;
int var_10 = 886586173;
short var_11 = (short)4849;
short var_12 = (short)-14090;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
