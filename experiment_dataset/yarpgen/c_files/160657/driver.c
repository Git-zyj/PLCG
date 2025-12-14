#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-113;
long long int var_1 = 8991916280061088783LL;
unsigned char var_10 = (unsigned char)236;
int zero = 0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-71;
unsigned char var_13 = (unsigned char)17;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
