#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6481440996352705873ULL;
unsigned char var_4 = (unsigned char)200;
unsigned int var_6 = 4216175361U;
_Bool var_8 = (_Bool)1;
long long int var_9 = 1607885340979167634LL;
int zero = 0;
unsigned int var_12 = 3759809543U;
_Bool var_13 = (_Bool)0;
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
