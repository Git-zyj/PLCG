#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1448786882;
unsigned short var_1 = (unsigned short)22776;
short var_3 = (short)15464;
unsigned short var_5 = (unsigned short)7943;
short var_6 = (short)15099;
short var_7 = (short)-4693;
unsigned short var_12 = (unsigned short)44595;
short var_17 = (short)-18333;
int var_18 = -1123577521;
int zero = 0;
int var_20 = 839349836;
short var_21 = (short)5994;
short var_22 = (short)-31419;
short var_23 = (short)-8472;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
