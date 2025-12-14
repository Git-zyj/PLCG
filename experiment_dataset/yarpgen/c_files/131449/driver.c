#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -774220791;
short var_4 = (short)21747;
unsigned int var_9 = 3469797747U;
int zero = 0;
unsigned short var_10 = (unsigned short)28693;
int var_11 = 880204577;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)95;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
