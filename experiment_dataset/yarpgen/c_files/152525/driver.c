#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)44;
unsigned char var_4 = (unsigned char)115;
_Bool var_6 = (_Bool)1;
unsigned short var_11 = (unsigned short)30810;
long long int var_12 = -5950082298848590812LL;
int zero = 0;
short var_13 = (short)13905;
short var_14 = (short)-17935;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
