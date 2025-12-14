#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1615500997U;
unsigned char var_3 = (unsigned char)62;
short var_5 = (short)-25042;
short var_12 = (short)28918;
int zero = 0;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
