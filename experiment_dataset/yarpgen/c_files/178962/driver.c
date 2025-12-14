#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2248816181857729698LL;
unsigned char var_1 = (unsigned char)42;
_Bool var_4 = (_Bool)0;
long long int var_5 = -8112134950641799313LL;
signed char var_9 = (signed char)65;
long long int var_10 = -1680051953647903244LL;
unsigned char var_11 = (unsigned char)15;
int zero = 0;
short var_12 = (short)-10438;
long long int var_13 = 6011695617405890942LL;
unsigned char var_14 = (unsigned char)252;
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
