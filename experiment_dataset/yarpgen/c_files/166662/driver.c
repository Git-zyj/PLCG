#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1172654511;
short var_2 = (short)-19883;
unsigned short var_3 = (unsigned short)7167;
unsigned short var_4 = (unsigned short)28177;
int zero = 0;
signed char var_10 = (signed char)35;
_Bool var_11 = (_Bool)1;
short var_12 = (short)20079;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
