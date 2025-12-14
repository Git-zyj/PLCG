#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-5133;
signed char var_3 = (signed char)-30;
signed char var_4 = (signed char)87;
unsigned long long int var_5 = 12030783805830516905ULL;
unsigned char var_6 = (unsigned char)241;
unsigned char var_7 = (unsigned char)217;
int var_8 = 2021173686;
int zero = 0;
unsigned int var_12 = 863224662U;
signed char var_13 = (signed char)16;
unsigned char var_14 = (unsigned char)236;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
