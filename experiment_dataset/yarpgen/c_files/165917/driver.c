#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 751619571;
signed char var_4 = (signed char)-58;
unsigned short var_5 = (unsigned short)55824;
signed char var_8 = (signed char)-37;
int var_10 = -1821043140;
unsigned char var_11 = (unsigned char)55;
signed char var_14 = (signed char)-74;
unsigned int var_15 = 4012629193U;
int zero = 0;
unsigned short var_17 = (unsigned short)41691;
unsigned char var_18 = (unsigned char)252;
int var_19 = -812872549;
signed char var_20 = (signed char)114;
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
