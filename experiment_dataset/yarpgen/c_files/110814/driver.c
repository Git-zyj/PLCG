#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)4346;
short var_2 = (short)-28660;
signed char var_3 = (signed char)105;
int var_4 = -178981721;
unsigned int var_6 = 1204839349U;
unsigned int var_7 = 1682519339U;
unsigned short var_9 = (unsigned short)54256;
int zero = 0;
int var_10 = -1377263504;
unsigned short var_11 = (unsigned short)6005;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
