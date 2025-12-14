#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)182;
unsigned short var_1 = (unsigned short)24877;
unsigned int var_4 = 1288641249U;
long long int var_5 = 7119187621018627132LL;
signed char var_9 = (signed char)-101;
unsigned short var_11 = (unsigned short)22690;
unsigned char var_13 = (unsigned char)239;
long long int var_14 = 5768310809869392625LL;
long long int var_15 = -1856654703401981237LL;
short var_18 = (short)9739;
int zero = 0;
short var_20 = (short)24686;
signed char var_21 = (signed char)-34;
unsigned short var_22 = (unsigned short)56462;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
