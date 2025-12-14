#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5142803389220594030LL;
unsigned int var_2 = 2708409207U;
unsigned short var_3 = (unsigned short)16043;
unsigned int var_5 = 1601760527U;
long long int var_6 = -9108865582818914391LL;
short var_7 = (short)23173;
signed char var_10 = (signed char)-92;
short var_13 = (short)-17926;
unsigned char var_17 = (unsigned char)20;
int zero = 0;
signed char var_18 = (signed char)-10;
unsigned short var_19 = (unsigned short)4355;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
