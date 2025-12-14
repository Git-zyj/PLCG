#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7417492120589212045LL;
unsigned long long int var_2 = 5200869693876499298ULL;
_Bool var_3 = (_Bool)1;
unsigned short var_9 = (unsigned short)3727;
int zero = 0;
unsigned int var_15 = 3223409453U;
unsigned int var_16 = 4051945503U;
void init() {
}

void checksum() {
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
