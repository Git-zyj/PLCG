#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4255056537355064094LL;
unsigned short var_6 = (unsigned short)11664;
short var_7 = (short)-13528;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)151;
int var_16 = 747049552;
int zero = 0;
unsigned int var_18 = 1414328897U;
_Bool var_19 = (_Bool)0;
short var_20 = (short)22782;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
