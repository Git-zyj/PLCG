#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_3 = (unsigned char)215;
unsigned char var_5 = (unsigned char)199;
signed char var_7 = (signed char)-15;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)61386;
int zero = 0;
unsigned long long int var_13 = 1084482180557301207ULL;
long long int var_14 = -2776459747814734909LL;
short var_15 = (short)11935;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
