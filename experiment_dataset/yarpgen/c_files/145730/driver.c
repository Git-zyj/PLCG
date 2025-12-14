#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13833;
unsigned short var_2 = (unsigned short)61651;
unsigned short var_4 = (unsigned short)54307;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)24607;
unsigned char var_11 = (unsigned char)121;
long long int var_12 = -5978859973454731473LL;
int zero = 0;
short var_16 = (short)-31076;
int var_17 = -201175937;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
