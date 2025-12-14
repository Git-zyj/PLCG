#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1131073676;
_Bool var_4 = (_Bool)1;
unsigned short var_8 = (unsigned short)49646;
int var_9 = 1822154124;
int zero = 0;
int var_11 = 1697115133;
unsigned char var_12 = (unsigned char)64;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
