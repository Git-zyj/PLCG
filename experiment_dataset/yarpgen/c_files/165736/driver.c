#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61920;
unsigned int var_1 = 898975643U;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 1596819598U;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 17085886325837567262ULL;
signed char var_9 = (signed char)30;
short var_10 = (short)5474;
long long int var_11 = 31727633933630560LL;
unsigned int var_12 = 1564851114U;
int zero = 0;
int var_14 = 329780646;
unsigned short var_15 = (unsigned short)45207;
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
