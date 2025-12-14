#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 2406635950U;
unsigned char var_2 = (unsigned char)90;
unsigned int var_9 = 3000602183U;
unsigned char var_10 = (unsigned char)168;
int zero = 0;
long long int var_12 = -6915435784213267899LL;
unsigned char var_13 = (unsigned char)57;
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
