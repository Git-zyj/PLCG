#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1221051369U;
short var_3 = (short)24954;
unsigned long long int var_4 = 15387349529095465361ULL;
long long int var_5 = 3976873093521216896LL;
int var_6 = -549046590;
unsigned long long int var_10 = 16112432856746748268ULL;
_Bool var_11 = (_Bool)1;
unsigned short var_13 = (unsigned short)48503;
unsigned int var_14 = 3040168694U;
int zero = 0;
signed char var_16 = (signed char)85;
unsigned short var_17 = (unsigned short)59075;
void init() {
}

void checksum() {
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
