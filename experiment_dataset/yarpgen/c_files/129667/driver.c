#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27288;
short var_2 = (short)-13785;
unsigned short var_5 = (unsigned short)45855;
unsigned int var_9 = 1864068038U;
unsigned char var_10 = (unsigned char)50;
int zero = 0;
short var_14 = (short)1955;
int var_15 = -1322228141;
short var_16 = (short)-20566;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
