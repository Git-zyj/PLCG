#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)42;
unsigned int var_4 = 997311818U;
unsigned short var_7 = (unsigned short)46633;
long long int var_10 = 4878502350340981969LL;
long long int var_12 = 5513505779178145192LL;
int zero = 0;
int var_13 = 1434828988;
short var_14 = (short)1926;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 10880834176198302629ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
