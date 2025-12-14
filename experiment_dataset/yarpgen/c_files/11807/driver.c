#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8732147570062411775LL;
unsigned int var_4 = 1378556540U;
unsigned char var_6 = (unsigned char)27;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
short var_10 = (short)29988;
short var_11 = (short)-13575;
short var_12 = (short)-30803;
int zero = 0;
signed char var_14 = (signed char)-82;
unsigned short var_15 = (unsigned short)28414;
unsigned char var_16 = (unsigned char)226;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
