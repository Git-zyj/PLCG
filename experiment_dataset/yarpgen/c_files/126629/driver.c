#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)4815;
signed char var_11 = (signed char)4;
unsigned short var_14 = (unsigned short)15953;
int zero = 0;
signed char var_20 = (signed char)126;
unsigned short var_21 = (unsigned short)45604;
short var_22 = (short)4692;
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
