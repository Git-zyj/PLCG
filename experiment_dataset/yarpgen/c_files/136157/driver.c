#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39429;
int var_3 = 169608475;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)45974;
int zero = 0;
short var_12 = (short)-4314;
unsigned char var_13 = (unsigned char)25;
unsigned short var_14 = (unsigned short)1597;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
