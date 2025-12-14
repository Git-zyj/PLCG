#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 1124423028U;
long long int var_3 = -7437068445822213320LL;
int var_5 = -1820391335;
long long int var_6 = 9209562158008856138LL;
signed char var_7 = (signed char)127;
unsigned short var_9 = (unsigned short)30179;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_12 = 120850664;
long long int var_13 = -3994607090353239132LL;
void init() {
}

void checksum() {
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
