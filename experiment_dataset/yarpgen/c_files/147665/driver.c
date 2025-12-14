#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)78;
int var_1 = -1827684080;
unsigned long long int var_3 = 5526420078630815282ULL;
unsigned char var_4 = (unsigned char)215;
_Bool var_5 = (_Bool)1;
unsigned char var_8 = (unsigned char)185;
unsigned int var_9 = 320352836U;
short var_11 = (short)29695;
unsigned int var_14 = 1792716483U;
int zero = 0;
long long int var_19 = -2901168698930180467LL;
unsigned short var_20 = (unsigned short)11508;
void init() {
}

void checksum() {
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
