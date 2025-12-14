#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)36872;
signed char var_4 = (signed char)8;
unsigned int var_7 = 1629532705U;
short var_8 = (short)7630;
unsigned short var_9 = (unsigned short)31755;
int zero = 0;
short var_17 = (short)-3304;
signed char var_18 = (signed char)-111;
unsigned short var_19 = (unsigned short)42935;
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
