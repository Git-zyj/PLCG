#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 4861391400520781244LL;
int var_8 = 195855475;
signed char var_10 = (signed char)-98;
int zero = 0;
int var_15 = 58345187;
unsigned short var_16 = (unsigned short)6360;
int var_17 = 973282256;
short var_18 = (short)-2562;
signed char var_19 = (signed char)65;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
