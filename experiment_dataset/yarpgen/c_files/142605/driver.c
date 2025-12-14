#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17827426584745213838ULL;
long long int var_6 = -4212546567887304893LL;
unsigned short var_7 = (unsigned short)18175;
unsigned long long int var_9 = 12401860930134687146ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)46002;
unsigned int var_11 = 2458093925U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
