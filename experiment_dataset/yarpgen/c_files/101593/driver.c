#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12021415847843482909ULL;
_Bool var_5 = (_Bool)1;
unsigned short var_12 = (unsigned short)50847;
int var_13 = 1971615501;
short var_14 = (short)-19856;
short var_17 = (short)10810;
int zero = 0;
short var_18 = (short)-14883;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 4444048520699178757ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
