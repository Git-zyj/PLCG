#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1420164025;
int var_2 = 1160955830;
unsigned short var_4 = (unsigned short)65145;
unsigned short var_12 = (unsigned short)65396;
int zero = 0;
int var_14 = -1154621888;
unsigned short var_15 = (unsigned short)23987;
unsigned short var_16 = (unsigned short)58668;
unsigned short var_17 = (unsigned short)38816;
unsigned short var_18 = (unsigned short)37657;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
