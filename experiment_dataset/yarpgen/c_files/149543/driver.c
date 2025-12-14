#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)29170;
unsigned short var_5 = (unsigned short)12538;
short var_13 = (short)-8649;
unsigned short var_18 = (unsigned short)12722;
int zero = 0;
long long int var_19 = 1909336793966766339LL;
unsigned short var_20 = (unsigned short)60389;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
