#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)6;
unsigned char var_4 = (unsigned char)125;
long long int var_8 = 8085706760849663402LL;
unsigned int var_15 = 1277137632U;
int var_16 = -1566795353;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 4020210190U;
unsigned int var_19 = 2949458674U;
long long int var_20 = -7326753878115952924LL;
void init() {
}

void checksum() {
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
