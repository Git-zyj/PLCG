#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)95;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)166;
int zero = 0;
unsigned short var_13 = (unsigned short)20763;
signed char var_14 = (signed char)5;
short var_15 = (short)9808;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
