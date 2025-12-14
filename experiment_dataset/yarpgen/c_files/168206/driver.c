#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)39779;
_Bool var_4 = (_Bool)0;
short var_14 = (short)-9250;
unsigned int var_17 = 3437834663U;
int zero = 0;
short var_19 = (short)6741;
unsigned int var_20 = 3504769432U;
unsigned char var_21 = (unsigned char)133;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
