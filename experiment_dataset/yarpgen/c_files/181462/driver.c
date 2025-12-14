#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17378828961693223398ULL;
unsigned char var_5 = (unsigned char)189;
signed char var_6 = (signed char)61;
signed char var_7 = (signed char)-14;
short var_11 = (short)-8011;
signed char var_12 = (signed char)-1;
int zero = 0;
short var_13 = (short)20235;
unsigned char var_14 = (unsigned char)246;
unsigned short var_15 = (unsigned short)43468;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
