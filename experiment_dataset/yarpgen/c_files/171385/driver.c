#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3965371421961329754LL;
unsigned char var_2 = (unsigned char)74;
signed char var_5 = (signed char)33;
unsigned char var_8 = (unsigned char)51;
int zero = 0;
signed char var_12 = (signed char)91;
int var_13 = -506621192;
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
