#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 236948830;
short var_2 = (short)12343;
int var_8 = -845244815;
_Bool var_13 = (_Bool)0;
unsigned short var_16 = (unsigned short)37324;
int zero = 0;
signed char var_17 = (signed char)-30;
long long int var_18 = -6463955036729259180LL;
void init() {
}

void checksum() {
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
