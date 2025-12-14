#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3903806385U;
int var_4 = -1791584059;
long long int var_11 = 7819435372192316856LL;
int zero = 0;
long long int var_12 = -2854967138288079969LL;
unsigned long long int var_13 = 16053779696946752562ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
