#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1411668073;
unsigned char var_9 = (unsigned char)236;
long long int var_10 = 5061120847110341014LL;
unsigned int var_13 = 2962360511U;
int zero = 0;
signed char var_20 = (signed char)-120;
unsigned int var_21 = 274575677U;
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
