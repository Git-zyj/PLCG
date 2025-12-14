#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-53;
short var_1 = (short)-25557;
unsigned int var_2 = 1686005591U;
unsigned int var_3 = 1748893044U;
int var_4 = -1152465032;
unsigned short var_6 = (unsigned short)28825;
int var_7 = 1940198126;
unsigned short var_8 = (unsigned short)12136;
unsigned int var_9 = 165495399U;
int zero = 0;
unsigned short var_10 = (unsigned short)9227;
int var_11 = 547977376;
unsigned short var_12 = (unsigned short)22080;
short var_13 = (short)14477;
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
