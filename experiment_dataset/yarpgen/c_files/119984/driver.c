#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)23832;
short var_5 = (short)-1757;
int var_7 = 2103742486;
long long int var_8 = -5216633929831051275LL;
unsigned int var_9 = 1710347149U;
int zero = 0;
long long int var_11 = -2085570428703409392LL;
int var_12 = 2001481752;
void init() {
}

void checksum() {
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
