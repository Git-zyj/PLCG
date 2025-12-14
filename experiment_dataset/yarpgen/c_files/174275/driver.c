#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)17;
unsigned short var_1 = (unsigned short)46682;
int var_4 = 1941169586;
signed char var_5 = (signed char)64;
_Bool var_7 = (_Bool)1;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = -871739008;
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
