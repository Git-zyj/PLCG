#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)217;
unsigned int var_10 = 1922726283U;
unsigned char var_15 = (unsigned char)246;
signed char var_18 = (signed char)-70;
int zero = 0;
long long int var_19 = -4984767579792031201LL;
int var_20 = 1035272551;
short var_21 = (short)28304;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
