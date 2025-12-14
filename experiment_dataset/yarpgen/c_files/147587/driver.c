#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)13;
int var_3 = -1467211440;
unsigned long long int var_4 = 15396332991969566737ULL;
signed char var_6 = (signed char)-42;
_Bool var_7 = (_Bool)1;
short var_9 = (short)15186;
int zero = 0;
short var_12 = (short)-62;
unsigned short var_13 = (unsigned short)57288;
short var_14 = (short)-4023;
unsigned char var_15 = (unsigned char)163;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
