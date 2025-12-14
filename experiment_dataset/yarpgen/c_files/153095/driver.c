#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -311257239;
unsigned short var_6 = (unsigned short)1570;
int var_9 = -312462227;
unsigned short var_11 = (unsigned short)52977;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-18914;
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
