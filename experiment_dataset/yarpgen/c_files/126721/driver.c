#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15892349389293917419ULL;
_Bool var_4 = (_Bool)1;
int var_5 = 841195636;
unsigned char var_6 = (unsigned char)80;
short var_7 = (short)25691;
unsigned int var_8 = 2142784031U;
short var_10 = (short)-11656;
int zero = 0;
short var_13 = (short)21836;
short var_14 = (short)-18862;
long long int var_15 = 3366321797324447LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
