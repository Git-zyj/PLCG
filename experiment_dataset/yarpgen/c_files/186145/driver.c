#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)214;
unsigned short var_6 = (unsigned short)47443;
unsigned short var_7 = (unsigned short)52590;
unsigned long long int var_10 = 11910723644445784366ULL;
int var_12 = 873947880;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_15 = (short)1133;
unsigned int var_16 = 2182368388U;
unsigned short var_17 = (unsigned short)52025;
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
