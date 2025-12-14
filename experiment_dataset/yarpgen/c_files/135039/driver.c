#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)252;
_Bool var_3 = (_Bool)0;
long long int var_6 = -5791925459827642243LL;
unsigned int var_8 = 1152545897U;
unsigned long long int var_12 = 10490896967995569169ULL;
int zero = 0;
unsigned int var_15 = 514210957U;
int var_16 = 1911806044;
_Bool var_17 = (_Bool)1;
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
