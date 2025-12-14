#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)44;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)36;
unsigned char var_8 = (unsigned char)36;
signed char var_9 = (signed char)21;
int var_12 = -779866390;
int zero = 0;
unsigned short var_13 = (unsigned short)34531;
unsigned short var_14 = (unsigned short)15286;
unsigned char var_15 = (unsigned char)213;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)61074;
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
