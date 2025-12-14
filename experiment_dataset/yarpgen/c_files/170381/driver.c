#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5540734389920113815ULL;
unsigned char var_6 = (unsigned char)173;
unsigned long long int var_8 = 1129552822672271727ULL;
signed char var_9 = (signed char)-90;
int var_10 = 1985318433;
long long int var_13 = -5973003008268340126LL;
int zero = 0;
unsigned long long int var_14 = 6937267886155927185ULL;
int var_15 = -1775666675;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
