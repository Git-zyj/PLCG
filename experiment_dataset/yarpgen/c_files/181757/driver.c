#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2026620702U;
unsigned short var_8 = (unsigned short)46261;
_Bool var_12 = (_Bool)0;
unsigned int var_14 = 2075656102U;
short var_15 = (short)18526;
long long int var_17 = -2488244482592248347LL;
int zero = 0;
unsigned short var_20 = (unsigned short)59682;
long long int var_21 = 6534578881797814454LL;
short var_22 = (short)1308;
short var_23 = (short)-26742;
_Bool var_24 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
