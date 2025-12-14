#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56063;
unsigned char var_1 = (unsigned char)135;
unsigned short var_6 = (unsigned short)56201;
short var_7 = (short)-27098;
unsigned int var_9 = 3805819769U;
unsigned short var_12 = (unsigned short)13043;
short var_15 = (short)26932;
int zero = 0;
signed char var_16 = (signed char)-88;
long long int var_17 = -6762734043106675011LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
