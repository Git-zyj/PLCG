#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5552223449289866489LL;
long long int var_2 = -8161687230000462801LL;
signed char var_9 = (signed char)-8;
signed char var_16 = (signed char)28;
int zero = 0;
signed char var_20 = (signed char)69;
long long int var_21 = -8267891432489184505LL;
signed char var_22 = (signed char)-3;
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
