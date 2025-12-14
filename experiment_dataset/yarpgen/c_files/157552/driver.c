#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1703216430691610771LL;
unsigned short var_1 = (unsigned short)8292;
unsigned char var_3 = (unsigned char)183;
signed char var_7 = (signed char)-88;
short var_8 = (short)-7091;
signed char var_9 = (signed char)51;
unsigned int var_13 = 1907708661U;
int zero = 0;
unsigned short var_15 = (unsigned short)58211;
int var_16 = -2144952307;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
