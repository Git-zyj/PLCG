#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = 2549806869963594455LL;
unsigned short var_13 = (unsigned short)39382;
int zero = 0;
long long int var_18 = -377143353542529090LL;
short var_19 = (short)6020;
signed char var_20 = (signed char)124;
long long int var_21 = -2828321332292752905LL;
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
