#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30744;
long long int var_1 = -4497681831089767150LL;
unsigned long long int var_2 = 9826785682979576015ULL;
short var_5 = (short)11438;
short var_6 = (short)-20774;
unsigned char var_7 = (unsigned char)34;
long long int var_8 = -9193582299308410293LL;
int zero = 0;
short var_11 = (short)-2430;
unsigned long long int var_12 = 15216766696092686221ULL;
short var_13 = (short)26283;
void init() {
}

void checksum() {
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
