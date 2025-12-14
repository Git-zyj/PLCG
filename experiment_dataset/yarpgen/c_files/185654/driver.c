#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)2995;
unsigned char var_5 = (unsigned char)34;
unsigned char var_6 = (unsigned char)235;
unsigned short var_9 = (unsigned short)40054;
int zero = 0;
long long int var_15 = -4767363250341432711LL;
unsigned long long int var_16 = 7724519077590215340ULL;
signed char var_17 = (signed char)-91;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
