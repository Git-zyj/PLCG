#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)98;
unsigned char var_5 = (unsigned char)125;
signed char var_11 = (signed char)1;
long long int var_15 = 5163130972364725393LL;
short var_17 = (short)29784;
int zero = 0;
unsigned short var_18 = (unsigned short)24913;
int var_19 = 483152570;
unsigned short var_20 = (unsigned short)58806;
signed char var_21 = (signed char)9;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
