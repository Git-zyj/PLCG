#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -912400927;
int var_1 = -927667244;
unsigned short var_2 = (unsigned short)14494;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 1550728540U;
unsigned short var_8 = (unsigned short)37506;
unsigned char var_9 = (unsigned char)189;
int zero = 0;
unsigned short var_10 = (unsigned short)35569;
signed char var_11 = (signed char)31;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
