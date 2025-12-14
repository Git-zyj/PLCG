#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59339;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 2481726326U;
unsigned int var_5 = 1020496462U;
unsigned char var_8 = (unsigned char)95;
unsigned int var_10 = 1545704860U;
unsigned long long int var_12 = 2930850572741345ULL;
int zero = 0;
unsigned int var_13 = 435829119U;
short var_14 = (short)-15776;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
