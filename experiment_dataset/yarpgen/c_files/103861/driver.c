#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)9;
unsigned short var_7 = (unsigned short)37279;
int var_8 = 867444898;
signed char var_12 = (signed char)-40;
unsigned short var_13 = (unsigned short)58186;
int zero = 0;
unsigned short var_16 = (unsigned short)29567;
unsigned int var_17 = 3771665154U;
unsigned short var_18 = (unsigned short)23089;
unsigned short var_19 = (unsigned short)1085;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
