#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)71;
int var_1 = -1469073224;
unsigned char var_7 = (unsigned char)34;
signed char var_8 = (signed char)65;
signed char var_9 = (signed char)92;
long long int var_12 = -6905835640425550809LL;
short var_13 = (short)-20230;
int zero = 0;
int var_14 = 1212152916;
unsigned char var_15 = (unsigned char)7;
void init() {
}

void checksum() {
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
