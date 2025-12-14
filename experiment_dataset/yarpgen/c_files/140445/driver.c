#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)52666;
signed char var_5 = (signed char)46;
unsigned int var_12 = 3432326314U;
signed char var_16 = (signed char)-61;
int zero = 0;
int var_18 = 1261561926;
short var_19 = (short)28844;
unsigned char var_20 = (unsigned char)247;
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
