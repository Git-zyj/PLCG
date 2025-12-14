#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3865457635U;
int var_6 = -1024972376;
_Bool var_7 = (_Bool)0;
unsigned char var_9 = (unsigned char)170;
unsigned int var_10 = 1908264543U;
short var_12 = (short)31584;
unsigned int var_13 = 4156081094U;
int zero = 0;
unsigned int var_15 = 3510122370U;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
