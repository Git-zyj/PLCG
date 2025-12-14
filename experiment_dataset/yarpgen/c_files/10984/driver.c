#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)232;
short var_4 = (short)13684;
short var_10 = (short)-21917;
unsigned short var_14 = (unsigned short)45696;
int zero = 0;
unsigned long long int var_19 = 15847539543845181496ULL;
unsigned short var_20 = (unsigned short)31351;
unsigned long long int var_21 = 1515406478520626061ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
