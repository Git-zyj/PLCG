#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)12187;
signed char var_6 = (signed char)-3;
unsigned char var_8 = (unsigned char)234;
int zero = 0;
signed char var_10 = (signed char)-106;
long long int var_11 = 4513221941292090424LL;
short var_12 = (short)-20468;
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
