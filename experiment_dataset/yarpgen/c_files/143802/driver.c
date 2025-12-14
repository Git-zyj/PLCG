#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -1549174681;
long long int var_10 = -8643238286779378164LL;
long long int var_11 = 2439853704192687067LL;
int var_16 = -2034753826;
int var_19 = 1654847551;
int zero = 0;
int var_20 = -652315277;
signed char var_21 = (signed char)-80;
signed char var_22 = (signed char)-22;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
