#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7825531502800666799LL;
long long int var_2 = 8300304424868270201LL;
unsigned short var_5 = (unsigned short)15107;
unsigned char var_9 = (unsigned char)251;
int zero = 0;
short var_11 = (short)11893;
unsigned char var_12 = (unsigned char)167;
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
