#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)10615;
long long int var_3 = -5940894429720598530LL;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)2654;
_Bool var_6 = (_Bool)0;
long long int var_8 = -7296238091661749347LL;
long long int var_9 = 4035310907242047523LL;
long long int var_11 = -3643617059891561024LL;
int zero = 0;
unsigned char var_15 = (unsigned char)189;
signed char var_16 = (signed char)35;
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
