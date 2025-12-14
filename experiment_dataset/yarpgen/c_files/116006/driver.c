#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)29;
unsigned char var_3 = (unsigned char)117;
signed char var_6 = (signed char)116;
short var_13 = (short)-433;
int zero = 0;
unsigned char var_14 = (unsigned char)227;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)119;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
