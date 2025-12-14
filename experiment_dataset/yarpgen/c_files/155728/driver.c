#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-958;
unsigned char var_2 = (unsigned char)142;
int var_4 = -6445225;
signed char var_7 = (signed char)-8;
int zero = 0;
signed char var_10 = (signed char)-101;
signed char var_11 = (signed char)87;
unsigned long long int var_12 = 13227030096654567417ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
