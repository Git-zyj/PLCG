#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)19;
long long int var_2 = -3663943361362073794LL;
_Bool var_5 = (_Bool)1;
long long int var_8 = -4521187676446695197LL;
unsigned int var_9 = 1041675951U;
short var_12 = (short)-19808;
short var_13 = (short)5746;
short var_14 = (short)-16594;
int zero = 0;
unsigned int var_17 = 1540386445U;
unsigned int var_18 = 759228275U;
unsigned char var_19 = (unsigned char)76;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
