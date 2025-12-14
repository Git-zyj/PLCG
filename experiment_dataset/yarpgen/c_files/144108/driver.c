#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-76;
long long int var_1 = 8224688289481267895LL;
signed char var_3 = (signed char)15;
unsigned short var_5 = (unsigned short)2943;
long long int var_6 = -3697690913094714983LL;
unsigned char var_10 = (unsigned char)236;
int zero = 0;
long long int var_12 = -8637924370191199409LL;
short var_13 = (short)-15270;
short var_14 = (short)23428;
short var_15 = (short)-25830;
unsigned short var_16 = (unsigned short)13939;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
