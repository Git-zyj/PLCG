#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -88829926;
unsigned int var_2 = 1431826787U;
int var_3 = -1446710606;
signed char var_5 = (signed char)-87;
unsigned short var_8 = (unsigned short)52393;
signed char var_10 = (signed char)119;
int var_11 = 282884482;
short var_12 = (short)1436;
int zero = 0;
unsigned short var_14 = (unsigned short)63854;
unsigned long long int var_15 = 18083717270961179425ULL;
signed char var_16 = (signed char)-5;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
