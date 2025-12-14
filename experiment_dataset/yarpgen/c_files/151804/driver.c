#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1179905420;
short var_7 = (short)17631;
unsigned char var_13 = (unsigned char)179;
int zero = 0;
unsigned int var_16 = 3425421456U;
unsigned short var_17 = (unsigned short)50782;
signed char var_18 = (signed char)108;
unsigned int var_19 = 3918880753U;
signed char var_20 = (signed char)-83;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
