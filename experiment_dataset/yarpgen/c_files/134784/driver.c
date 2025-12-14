#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-7779;
unsigned int var_5 = 4245545736U;
unsigned int var_6 = 497052395U;
unsigned int var_9 = 1861117991U;
unsigned int var_11 = 191522812U;
unsigned char var_13 = (unsigned char)104;
int zero = 0;
unsigned long long int var_15 = 2333946427461487288ULL;
int var_16 = 630675282;
long long int var_17 = -205431084950311896LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
