#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6864308984220900306ULL;
_Bool var_3 = (_Bool)0;
short var_4 = (short)-2823;
short var_5 = (short)-6067;
short var_7 = (short)-3480;
int zero = 0;
unsigned int var_12 = 3484242329U;
unsigned char var_13 = (unsigned char)135;
short var_14 = (short)-1709;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
