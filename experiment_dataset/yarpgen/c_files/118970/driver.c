#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3689260994001866810LL;
unsigned int var_4 = 3470822174U;
long long int var_5 = -2827212332543282553LL;
unsigned char var_7 = (unsigned char)159;
int zero = 0;
short var_10 = (short)-6681;
unsigned int var_11 = 2921887839U;
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
