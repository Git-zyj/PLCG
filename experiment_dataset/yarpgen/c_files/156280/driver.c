#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1965073161;
unsigned short var_3 = (unsigned short)40504;
unsigned int var_5 = 121095473U;
unsigned char var_9 = (unsigned char)59;
unsigned char var_10 = (unsigned char)130;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_13 = (short)6927;
int var_14 = -1435088428;
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
