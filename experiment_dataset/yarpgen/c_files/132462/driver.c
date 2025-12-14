#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1778518803;
unsigned int var_1 = 3290716594U;
short var_2 = (short)-20707;
unsigned int var_5 = 1815792403U;
signed char var_6 = (signed char)-56;
unsigned char var_11 = (unsigned char)137;
int zero = 0;
long long int var_12 = -2897762747208733708LL;
signed char var_13 = (signed char)8;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
