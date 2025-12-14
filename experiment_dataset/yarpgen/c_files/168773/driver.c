#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)55;
unsigned char var_2 = (unsigned char)9;
unsigned char var_6 = (unsigned char)176;
unsigned char var_7 = (unsigned char)210;
unsigned char var_8 = (unsigned char)86;
short var_10 = (short)-19661;
long long int var_11 = -7181838606069449783LL;
int zero = 0;
short var_12 = (short)-6270;
long long int var_13 = 5799608559723355855LL;
unsigned int var_14 = 3922354122U;
unsigned char var_15 = (unsigned char)252;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
