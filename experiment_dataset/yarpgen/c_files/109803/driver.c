#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 7667089061500995115LL;
long long int var_5 = 2421509250540144865LL;
signed char var_7 = (signed char)24;
int zero = 0;
unsigned char var_12 = (unsigned char)247;
unsigned char var_13 = (unsigned char)128;
unsigned long long int var_14 = 3420759849229504587ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
