#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)-28981;
short var_3 = (short)-29425;
short var_4 = (short)-16624;
_Bool var_10 = (_Bool)0;
short var_11 = (short)20872;
int zero = 0;
unsigned char var_12 = (unsigned char)238;
short var_13 = (short)19907;
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
