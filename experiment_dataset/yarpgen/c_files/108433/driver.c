#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)30752;
int var_3 = -945099272;
int var_4 = 224365198;
unsigned long long int var_6 = 17173590206124932688ULL;
unsigned int var_7 = 584762072U;
_Bool var_9 = (_Bool)1;
short var_12 = (short)-26122;
int zero = 0;
signed char var_14 = (signed char)-54;
unsigned char var_15 = (unsigned char)143;
unsigned long long int var_16 = 2971905686342022916ULL;
unsigned short var_17 = (unsigned short)36735;
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
