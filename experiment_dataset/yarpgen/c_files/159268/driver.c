#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-15;
_Bool var_6 = (_Bool)1;
unsigned char var_10 = (unsigned char)1;
int var_11 = -1330098626;
int zero = 0;
unsigned short var_12 = (unsigned short)41362;
short var_13 = (short)27468;
unsigned int var_14 = 252024306U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
