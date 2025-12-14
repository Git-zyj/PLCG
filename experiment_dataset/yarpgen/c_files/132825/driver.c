#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11689;
int var_1 = -769576586;
long long int var_5 = -325705411116469905LL;
short var_6 = (short)17364;
int var_7 = -207841056;
long long int var_10 = -779452099066758775LL;
int var_11 = -4430220;
int zero = 0;
signed char var_12 = (signed char)-25;
unsigned short var_13 = (unsigned short)10774;
unsigned long long int var_14 = 15646136853396873422ULL;
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
