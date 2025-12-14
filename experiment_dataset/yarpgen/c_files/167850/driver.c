#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2393673848248509303LL;
unsigned char var_4 = (unsigned char)105;
unsigned short var_13 = (unsigned short)2418;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 3327299600U;
unsigned int var_19 = 695450602U;
unsigned int var_20 = 2460754082U;
long long int var_21 = 2916175584517453047LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
