#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 1703411289352124241LL;
unsigned short var_13 = (unsigned short)39764;
signed char var_16 = (signed char)89;
int zero = 0;
unsigned short var_18 = (unsigned short)6539;
short var_19 = (short)-10915;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
