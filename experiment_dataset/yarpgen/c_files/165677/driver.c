#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10902596102834096137ULL;
long long int var_5 = -1156517736324846917LL;
signed char var_6 = (signed char)124;
long long int var_8 = -7245816765096053613LL;
unsigned char var_18 = (unsigned char)62;
int zero = 0;
int var_20 = -166085209;
signed char var_21 = (signed char)48;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
