#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)90;
short var_2 = (short)-30213;
unsigned int var_3 = 360019415U;
long long int var_8 = 5882991958630739028LL;
int zero = 0;
unsigned char var_14 = (unsigned char)127;
unsigned char var_15 = (unsigned char)237;
unsigned int var_16 = 3365670672U;
unsigned char var_17 = (unsigned char)53;
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
