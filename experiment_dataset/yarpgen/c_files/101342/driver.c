#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1039723341U;
unsigned int var_1 = 681255353U;
signed char var_3 = (signed char)-38;
unsigned int var_4 = 2238726543U;
short var_9 = (short)-20772;
int zero = 0;
short var_10 = (short)-27408;
signed char var_11 = (signed char)(-127 - 1);
short var_12 = (short)309;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
