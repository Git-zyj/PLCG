#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8089;
unsigned int var_4 = 2112017789U;
signed char var_6 = (signed char)93;
unsigned short var_8 = (unsigned short)55734;
signed char var_11 = (signed char)103;
long long int var_13 = 5055602496879766277LL;
long long int var_14 = -6446987807465148145LL;
int zero = 0;
short var_16 = (short)21328;
long long int var_17 = -1445414938685183458LL;
long long int var_18 = -6873801316338740661LL;
unsigned char var_19 = (unsigned char)12;
signed char var_20 = (signed char)-7;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
