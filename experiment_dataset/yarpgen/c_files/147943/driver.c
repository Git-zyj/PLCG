#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 9023874261152254819ULL;
long long int var_12 = 7732805537055499960LL;
long long int var_13 = -4869915302853585918LL;
int zero = 0;
long long int var_20 = -4993912210982856649LL;
int var_21 = -7208517;
void init() {
}

void checksum() {
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
