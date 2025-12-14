#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4616532329879624066LL;
_Bool var_6 = (_Bool)1;
unsigned char var_8 = (unsigned char)137;
unsigned short var_12 = (unsigned short)15462;
int zero = 0;
signed char var_15 = (signed char)5;
int var_16 = 1945771200;
signed char var_17 = (signed char)58;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
