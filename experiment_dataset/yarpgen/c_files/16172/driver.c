#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2782108982U;
long long int var_4 = 7992877749710473530LL;
int zero = 0;
long long int var_10 = 6102164778657870326LL;
unsigned char var_11 = (unsigned char)215;
long long int var_12 = 6894691381243458273LL;
unsigned long long int var_13 = 11806528804268188789ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
