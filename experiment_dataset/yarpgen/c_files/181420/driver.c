#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31442;
unsigned int var_1 = 1905675574U;
unsigned short var_4 = (unsigned short)19285;
int var_5 = 1190346600;
short var_6 = (short)-16464;
short var_8 = (short)-13067;
int zero = 0;
unsigned short var_10 = (unsigned short)56903;
_Bool var_11 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
