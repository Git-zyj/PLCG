#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)8908;
unsigned long long int var_3 = 8185176525324535ULL;
signed char var_6 = (signed char)114;
int zero = 0;
long long int var_10 = -8198699521717613221LL;
unsigned char var_11 = (unsigned char)193;
signed char var_12 = (signed char)88;
unsigned char var_13 = (unsigned char)6;
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
