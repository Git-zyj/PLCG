#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)52;
_Bool var_4 = (_Bool)1;
_Bool var_7 = (_Bool)0;
short var_9 = (short)-29972;
short var_10 = (short)24621;
int zero = 0;
unsigned char var_12 = (unsigned char)184;
int var_13 = -1895278481;
short var_14 = (short)-26652;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
