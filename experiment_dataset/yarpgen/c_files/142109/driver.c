#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)117;
unsigned int var_2 = 3059956295U;
unsigned long long int var_3 = 12813363845358182028ULL;
unsigned char var_5 = (unsigned char)201;
short var_7 = (short)-902;
unsigned char var_8 = (unsigned char)190;
long long int var_9 = 3301081637975747819LL;
short var_11 = (short)-13714;
int zero = 0;
unsigned int var_12 = 116293242U;
unsigned char var_13 = (unsigned char)168;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
