#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)45866;
_Bool var_6 = (_Bool)1;
long long int var_16 = -8881097178066434494LL;
int zero = 0;
short var_17 = (short)-20644;
unsigned char var_18 = (unsigned char)185;
unsigned short var_19 = (unsigned short)21007;
short var_20 = (short)3200;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
