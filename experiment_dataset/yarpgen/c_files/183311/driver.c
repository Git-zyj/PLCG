#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)43642;
int var_6 = 1925234523;
int var_7 = -39100752;
int var_8 = -1636133558;
unsigned short var_9 = (unsigned short)49656;
int zero = 0;
unsigned int var_11 = 119526659U;
unsigned int var_12 = 443768509U;
signed char var_13 = (signed char)-24;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
