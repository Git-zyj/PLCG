#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57712;
_Bool var_3 = (_Bool)1;
unsigned long long int var_9 = 11608873782792513841ULL;
int var_11 = 1145009405;
long long int var_12 = -2990213742361685214LL;
int zero = 0;
unsigned long long int var_16 = 15538608102024615304ULL;
signed char var_17 = (signed char)-20;
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
