#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1997129737;
long long int var_10 = 3291565610391166866LL;
long long int var_11 = 6759447169146166702LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = 2061833147;
unsigned char var_17 = (unsigned char)49;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
