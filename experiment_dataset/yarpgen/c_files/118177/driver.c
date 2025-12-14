#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5867747435499516846LL;
short var_2 = (short)-23302;
_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 13515986904226600522ULL;
unsigned short var_9 = (unsigned short)55256;
int zero = 0;
int var_10 = 2042551253;
unsigned short var_11 = (unsigned short)50623;
unsigned short var_12 = (unsigned short)44804;
int var_13 = -1540896359;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
