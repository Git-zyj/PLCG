#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-88;
short var_4 = (short)-21967;
unsigned char var_6 = (unsigned char)65;
int var_8 = 485905165;
int var_10 = -4126762;
int zero = 0;
unsigned short var_17 = (unsigned short)28011;
unsigned char var_18 = (unsigned char)7;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
