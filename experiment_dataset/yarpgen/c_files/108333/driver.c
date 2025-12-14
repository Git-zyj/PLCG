#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)8;
signed char var_6 = (signed char)101;
unsigned int var_9 = 2100884669U;
int zero = 0;
int var_10 = -1725326810;
long long int var_11 = -3435672734204749999LL;
unsigned char var_12 = (unsigned char)209;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
