#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5243102046304356836ULL;
unsigned int var_4 = 3772953406U;
unsigned short var_8 = (unsigned short)18822;
unsigned short var_9 = (unsigned short)27227;
unsigned short var_11 = (unsigned short)12547;
unsigned char var_12 = (unsigned char)1;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)28820;
unsigned short var_17 = (unsigned short)17632;
void init() {
}

void checksum() {
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
