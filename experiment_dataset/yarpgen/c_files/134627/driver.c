#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17723;
unsigned int var_1 = 2641473286U;
signed char var_2 = (signed char)108;
short var_3 = (short)8624;
signed char var_4 = (signed char)79;
long long int var_5 = -7832471341015199607LL;
unsigned short var_6 = (unsigned short)59249;
long long int var_8 = -4409665405118941579LL;
int zero = 0;
unsigned long long int var_10 = 13881880015523459366ULL;
unsigned int var_11 = 989523290U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
