#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 4908199880835377612ULL;
int var_14 = -1055192214;
unsigned char var_15 = (unsigned char)231;
int zero = 0;
int var_17 = 163223069;
unsigned short var_18 = (unsigned short)24595;
signed char var_19 = (signed char)-31;
void init() {
}

void checksum() {
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
