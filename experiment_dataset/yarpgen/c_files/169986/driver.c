#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)196;
short var_1 = (short)-9979;
unsigned char var_8 = (unsigned char)145;
unsigned int var_13 = 3378526283U;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_20 = (unsigned short)57263;
unsigned short var_21 = (unsigned short)44764;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
