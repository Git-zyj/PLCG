#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 745341437U;
short var_8 = (short)6999;
short var_9 = (short)20004;
unsigned int var_10 = 2746464846U;
unsigned short var_12 = (unsigned short)28419;
int zero = 0;
short var_13 = (short)-27563;
short var_14 = (short)-18584;
unsigned short var_15 = (unsigned short)19297;
unsigned char var_16 = (unsigned char)108;
unsigned char var_17 = (unsigned char)187;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
