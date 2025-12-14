#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)24222;
signed char var_14 = (signed char)78;
unsigned short var_17 = (unsigned short)64369;
int zero = 0;
signed char var_20 = (signed char)64;
signed char var_21 = (signed char)-87;
unsigned short var_22 = (unsigned short)15473;
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
