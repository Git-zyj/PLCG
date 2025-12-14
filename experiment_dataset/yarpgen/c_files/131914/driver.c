#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-74;
signed char var_4 = (signed char)62;
long long int var_8 = -5555165198938469724LL;
int zero = 0;
long long int var_10 = 5153084000874920911LL;
long long int var_11 = -3945798143203098003LL;
long long int var_12 = -8287491618151078743LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
