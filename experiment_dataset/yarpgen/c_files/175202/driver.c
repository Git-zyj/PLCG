#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)75;
signed char var_6 = (signed char)30;
unsigned char var_8 = (unsigned char)5;
unsigned short var_9 = (unsigned short)34285;
int zero = 0;
unsigned short var_19 = (unsigned short)12276;
unsigned short var_20 = (unsigned short)55135;
short var_21 = (short)14168;
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
