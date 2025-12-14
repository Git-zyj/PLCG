#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28171;
signed char var_11 = (signed char)-118;
_Bool var_12 = (_Bool)1;
short var_15 = (short)-14261;
unsigned char var_16 = (unsigned char)186;
int zero = 0;
int var_19 = 1740871624;
int var_20 = -698291935;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
