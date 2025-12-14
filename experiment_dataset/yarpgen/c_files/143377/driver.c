#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10060155222610025184ULL;
_Bool var_9 = (_Bool)0;
int var_10 = -1849306008;
long long int var_11 = 367668292751308926LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = 1074945086;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
