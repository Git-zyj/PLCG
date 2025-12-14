#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1804321885U;
_Bool var_8 = (_Bool)1;
short var_9 = (short)8366;
int var_14 = -1445445425;
unsigned int var_16 = 3969389490U;
short var_17 = (short)-8075;
int zero = 0;
short var_19 = (short)25739;
unsigned int var_20 = 1729100215U;
int var_21 = 679229936;
unsigned int var_22 = 1494782732U;
signed char var_23 = (signed char)115;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
