#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_12 = 55037257;
unsigned long long int var_16 = 3165065653518720489ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)118;
unsigned char var_21 = (unsigned char)236;
unsigned long long int var_22 = 1496347463588714213ULL;
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
