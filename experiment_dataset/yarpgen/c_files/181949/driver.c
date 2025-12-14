#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -370989389;
unsigned char var_8 = (unsigned char)93;
unsigned char var_9 = (unsigned char)5;
int zero = 0;
int var_16 = 1142221343;
long long int var_17 = -3013238689184951135LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
