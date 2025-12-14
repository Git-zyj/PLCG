#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-48;
unsigned char var_1 = (unsigned char)191;
unsigned char var_5 = (unsigned char)113;
int var_6 = 651951782;
short var_7 = (short)23116;
short var_8 = (short)-20003;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = 6660092065895893688LL;
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
