#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24127;
long long int var_1 = -2849379064157041955LL;
signed char var_4 = (signed char)-45;
signed char var_6 = (signed char)-114;
int var_8 = -1578984337;
unsigned char var_9 = (unsigned char)88;
int zero = 0;
unsigned int var_10 = 492914813U;
unsigned char var_11 = (unsigned char)226;
unsigned int var_12 = 2618035316U;
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
