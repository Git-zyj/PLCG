#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8146695349880483981LL;
long long int var_13 = -680125959523268622LL;
int zero = 0;
unsigned char var_20 = (unsigned char)207;
long long int var_21 = 8435164109616683717LL;
unsigned char var_22 = (unsigned char)208;
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
