#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)26;
unsigned long long int var_5 = 9317887778803826212ULL;
unsigned short var_8 = (unsigned short)49058;
unsigned short var_10 = (unsigned short)14402;
unsigned short var_11 = (unsigned short)34610;
int zero = 0;
unsigned long long int var_12 = 17714824616442194853ULL;
unsigned int var_13 = 341002575U;
short var_14 = (short)-30880;
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
