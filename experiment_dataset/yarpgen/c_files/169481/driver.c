#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-62;
signed char var_4 = (signed char)-33;
signed char var_5 = (signed char)80;
short var_6 = (short)-5364;
unsigned char var_10 = (unsigned char)134;
int var_12 = -1103767177;
signed char var_13 = (signed char)-35;
int zero = 0;
signed char var_14 = (signed char)-96;
int var_15 = 709890430;
unsigned int var_16 = 208651161U;
unsigned int var_17 = 1512484013U;
unsigned char var_18 = (unsigned char)234;
short var_19 = (short)-2609;
unsigned int var_20 = 1219446063U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
