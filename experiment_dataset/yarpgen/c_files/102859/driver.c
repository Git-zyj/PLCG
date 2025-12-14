#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1765411894U;
unsigned short var_7 = (unsigned short)53023;
int var_9 = 2108031938;
int zero = 0;
unsigned long long int var_19 = 15158268097220443277ULL;
unsigned long long int var_20 = 5865927993530379259ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
