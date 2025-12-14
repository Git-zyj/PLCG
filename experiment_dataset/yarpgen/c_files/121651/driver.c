#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)51676;
short var_5 = (short)18989;
unsigned char var_7 = (unsigned char)251;
int var_8 = -2045484216;
unsigned short var_14 = (unsigned short)64385;
short var_16 = (short)13710;
signed char var_19 = (signed char)-12;
int zero = 0;
signed char var_20 = (signed char)113;
int var_21 = -757901288;
unsigned int var_22 = 2683668665U;
unsigned short var_23 = (unsigned short)7993;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
