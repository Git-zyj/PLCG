#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1846404911387346027LL;
long long int var_9 = 5161989245993883348LL;
long long int var_11 = 4197089835864600111LL;
long long int var_15 = 713503083461796419LL;
long long int var_17 = 240063219872534025LL;
int zero = 0;
long long int var_19 = 2601071666612445339LL;
long long int var_20 = -4966198707631408343LL;
long long int var_21 = -1791277435021167357LL;
long long int var_22 = -6941405326150253772LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
