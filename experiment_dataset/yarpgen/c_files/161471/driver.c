#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_12 = (signed char)15;
unsigned char var_19 = (unsigned char)139;
int zero = 0;
unsigned char var_20 = (unsigned char)206;
unsigned int var_21 = 1741735062U;
unsigned char var_22 = (unsigned char)161;
unsigned int var_23 = 3691447674U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
