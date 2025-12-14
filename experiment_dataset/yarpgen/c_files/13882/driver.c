#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15197;
unsigned int var_2 = 4225836057U;
long long int var_3 = -3968957395568013066LL;
int var_4 = -372673646;
unsigned long long int var_5 = 5900022321920662599ULL;
unsigned short var_8 = (unsigned short)39905;
int zero = 0;
unsigned int var_10 = 3917031562U;
signed char var_11 = (signed char)81;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
