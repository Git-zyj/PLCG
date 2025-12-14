#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)32846;
unsigned short var_5 = (unsigned short)40941;
long long int var_6 = -7656794924319694326LL;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)52792;
int var_13 = 1949063668;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = -1994143146;
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
