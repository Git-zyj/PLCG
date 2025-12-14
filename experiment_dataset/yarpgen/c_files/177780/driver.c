#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8306145475338935232LL;
unsigned char var_6 = (unsigned char)4;
unsigned long long int var_10 = 3438221418311279617ULL;
int var_11 = -1802010713;
int zero = 0;
unsigned int var_17 = 1977617358U;
short var_18 = (short)-16809;
short var_19 = (short)-26439;
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
