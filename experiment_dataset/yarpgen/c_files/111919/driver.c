#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 490971550;
long long int var_3 = 2560660149427337696LL;
unsigned short var_7 = (unsigned short)58821;
short var_8 = (short)7695;
int zero = 0;
int var_13 = 1885626298;
int var_14 = -907334153;
unsigned char var_15 = (unsigned char)183;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
