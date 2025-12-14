#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7315671009007193052LL;
unsigned long long int var_4 = 9474718934628568167ULL;
long long int var_6 = -7661457927862321355LL;
unsigned long long int var_10 = 17850393387429763864ULL;
int zero = 0;
long long int var_11 = -1992403746234055065LL;
unsigned char var_12 = (unsigned char)212;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
