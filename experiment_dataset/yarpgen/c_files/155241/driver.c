#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6796;
unsigned long long int var_4 = 17134077745324550377ULL;
unsigned short var_8 = (unsigned short)52261;
int zero = 0;
signed char var_12 = (signed char)22;
unsigned short var_13 = (unsigned short)38848;
void init() {
}

void checksum() {
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
