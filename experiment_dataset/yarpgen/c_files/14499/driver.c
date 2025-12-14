#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2261175626U;
unsigned long long int var_5 = 2582812598194677132ULL;
short var_9 = (short)-32009;
unsigned int var_10 = 2867157511U;
int zero = 0;
unsigned int var_12 = 1112250644U;
signed char var_13 = (signed char)115;
signed char var_14 = (signed char)-109;
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
