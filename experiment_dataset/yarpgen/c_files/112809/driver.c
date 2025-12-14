#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)45838;
signed char var_10 = (signed char)-17;
unsigned short var_11 = (unsigned short)8211;
int zero = 0;
int var_14 = 1534893565;
unsigned char var_15 = (unsigned char)115;
signed char var_16 = (signed char)31;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
