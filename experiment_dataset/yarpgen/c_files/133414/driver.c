#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-38;
unsigned int var_3 = 417564922U;
unsigned long long int var_4 = 1320264535203417977ULL;
short var_10 = (short)-2060;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_13 = -8092215142180728190LL;
unsigned char var_14 = (unsigned char)29;
short var_15 = (short)-21696;
short var_16 = (short)-28061;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
