#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)233;
signed char var_7 = (signed char)-40;
unsigned short var_16 = (unsigned short)49387;
int zero = 0;
short var_18 = (short)17120;
unsigned char var_19 = (unsigned char)50;
short var_20 = (short)13892;
short var_21 = (short)-31079;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
