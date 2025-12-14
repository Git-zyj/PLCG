#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1409105910;
unsigned short var_4 = (unsigned short)56100;
short var_13 = (short)17231;
int zero = 0;
short var_20 = (short)6879;
unsigned char var_21 = (unsigned char)29;
unsigned char var_22 = (unsigned char)52;
signed char var_23 = (signed char)9;
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
