#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8972;
int var_2 = 1425428474;
signed char var_5 = (signed char)121;
signed char var_8 = (signed char)55;
int zero = 0;
unsigned char var_17 = (unsigned char)249;
signed char var_18 = (signed char)83;
short var_19 = (short)-31272;
signed char var_20 = (signed char)-16;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
