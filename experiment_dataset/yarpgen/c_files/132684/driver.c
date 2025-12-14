#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)55;
unsigned char var_4 = (unsigned char)44;
short var_5 = (short)30614;
int zero = 0;
short var_20 = (short)-25658;
long long int var_21 = -1866435415567611025LL;
signed char var_22 = (signed char)52;
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
