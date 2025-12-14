#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)45028;
_Bool var_4 = (_Bool)0;
long long int var_5 = -8086572845419489988LL;
int var_8 = 1397757025;
int zero = 0;
signed char var_12 = (signed char)109;
short var_13 = (short)-6493;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
