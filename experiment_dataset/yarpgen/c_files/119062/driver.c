#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 203201625;
unsigned short var_6 = (unsigned short)59531;
unsigned char var_12 = (unsigned char)44;
_Bool var_13 = (_Bool)1;
unsigned char var_16 = (unsigned char)221;
int zero = 0;
unsigned short var_18 = (unsigned short)45008;
int var_19 = -406395929;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
