#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1894481180U;
unsigned int var_3 = 863023932U;
int var_4 = 380214464;
short var_8 = (short)-29261;
short var_10 = (short)7969;
long long int var_11 = 9096846177173489845LL;
long long int var_13 = -8076386684027139820LL;
int var_16 = -529285704;
unsigned short var_19 = (unsigned short)7326;
int zero = 0;
unsigned char var_20 = (unsigned char)28;
unsigned short var_21 = (unsigned short)56822;
long long int var_22 = -5673833407439281710LL;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
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
