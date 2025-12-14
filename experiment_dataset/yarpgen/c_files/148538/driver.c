#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)85;
unsigned char var_4 = (unsigned char)115;
unsigned int var_7 = 2114584294U;
long long int var_11 = -3410793292277807200LL;
int zero = 0;
int var_19 = 1107546373;
unsigned int var_20 = 2043939088U;
long long int var_21 = -7698415762988985549LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
