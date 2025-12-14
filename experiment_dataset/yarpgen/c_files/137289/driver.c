#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-78;
unsigned long long int var_7 = 15225590028299320427ULL;
unsigned char var_14 = (unsigned char)204;
signed char var_18 = (signed char)20;
int zero = 0;
int var_20 = 649682601;
int var_21 = 1442327625;
unsigned int var_22 = 2526117614U;
long long int var_23 = 6161959456563902126LL;
signed char var_24 = (signed char)52;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
