#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -799477959;
long long int var_7 = -8861615988117525080LL;
unsigned char var_9 = (unsigned char)13;
unsigned int var_12 = 337035307U;
int zero = 0;
unsigned int var_14 = 398580077U;
unsigned int var_15 = 3272158037U;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
