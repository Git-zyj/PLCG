#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 293344855U;
short var_4 = (short)-32658;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_15 = (short)29547;
unsigned char var_16 = (unsigned char)180;
int var_17 = -1529659158;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
