#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)39;
unsigned short var_2 = (unsigned short)4821;
_Bool var_4 = (_Bool)1;
int var_7 = 1472745320;
unsigned int var_8 = 2791894700U;
short var_11 = (short)-30285;
int zero = 0;
unsigned short var_12 = (unsigned short)18753;
int var_13 = -1154205175;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
