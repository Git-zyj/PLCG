#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)82;
long long int var_3 = -7060823234646225077LL;
short var_4 = (short)10088;
short var_8 = (short)-11782;
long long int var_9 = -2519846472771040980LL;
unsigned long long int var_10 = 7378491240568448331ULL;
unsigned short var_11 = (unsigned short)55363;
int zero = 0;
long long int var_14 = 2208551892488014789LL;
signed char var_15 = (signed char)60;
long long int var_16 = 2788848363256190405LL;
unsigned char var_17 = (unsigned char)39;
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
