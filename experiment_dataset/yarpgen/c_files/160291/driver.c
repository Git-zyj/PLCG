#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15951;
short var_5 = (short)32563;
unsigned int var_15 = 3896702962U;
int zero = 0;
unsigned short var_17 = (unsigned short)24650;
unsigned short var_18 = (unsigned short)57164;
signed char var_19 = (signed char)-6;
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
