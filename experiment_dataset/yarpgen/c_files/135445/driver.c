#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24003;
short var_5 = (short)6801;
signed char var_6 = (signed char)-124;
unsigned long long int var_8 = 11585215191817360031ULL;
int var_9 = 1999117541;
int zero = 0;
unsigned int var_10 = 505352254U;
long long int var_11 = 1813880561618167223LL;
unsigned char var_12 = (unsigned char)15;
long long int var_13 = -6031435011697993187LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
