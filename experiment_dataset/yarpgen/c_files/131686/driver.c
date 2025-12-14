#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 628985074U;
signed char var_3 = (signed char)32;
unsigned char var_9 = (unsigned char)35;
unsigned int var_19 = 1367943713U;
int zero = 0;
unsigned int var_20 = 2984976351U;
signed char var_21 = (signed char)29;
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
