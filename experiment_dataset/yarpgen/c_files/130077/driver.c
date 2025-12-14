#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 18297393067401443686ULL;
unsigned short var_4 = (unsigned short)54700;
unsigned int var_7 = 2979278611U;
long long int var_14 = -1866414254064810932LL;
int zero = 0;
unsigned int var_17 = 714246406U;
unsigned char var_18 = (unsigned char)40;
short var_19 = (short)-9605;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
