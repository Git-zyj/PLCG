#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8180142296928598667LL;
unsigned char var_7 = (unsigned char)62;
long long int var_9 = -7552211356953476919LL;
int zero = 0;
long long int var_11 = -3991600176257896352LL;
long long int var_12 = -6881951383354283823LL;
void init() {
}

void checksum() {
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
