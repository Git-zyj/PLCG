#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2959004989U;
_Bool var_4 = (_Bool)1;
signed char var_8 = (signed char)-42;
long long int var_9 = -8207800677453493018LL;
short var_10 = (short)2010;
unsigned long long int var_11 = 12671122449884894475ULL;
int zero = 0;
unsigned long long int var_16 = 6491376397740825060ULL;
short var_17 = (short)15018;
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
