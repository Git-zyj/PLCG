#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_10 = 335497586955441265ULL;
_Bool var_11 = (_Bool)1;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_15 = (short)-28482;
signed char var_16 = (signed char)98;
unsigned char var_17 = (unsigned char)224;
int var_18 = -1032507735;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
