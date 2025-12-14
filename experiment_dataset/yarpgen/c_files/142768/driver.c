#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)210;
int var_1 = -1335150329;
unsigned char var_2 = (unsigned char)249;
unsigned int var_6 = 1700072176U;
unsigned int var_7 = 3081853849U;
int var_10 = 1742356879;
int var_15 = -829261947;
int zero = 0;
signed char var_16 = (signed char)3;
short var_17 = (short)29411;
signed char var_18 = (signed char)55;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
