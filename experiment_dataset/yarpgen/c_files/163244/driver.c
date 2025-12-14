#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3724870483U;
unsigned long long int var_1 = 17344130229938473097ULL;
long long int var_5 = 5826691572940800152LL;
short var_9 = (short)4030;
unsigned short var_10 = (unsigned short)30836;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)38192;
int var_14 = 1122367903;
int zero = 0;
signed char var_15 = (signed char)122;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1911673157U;
unsigned long long int var_18 = 14123927910063112917ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
