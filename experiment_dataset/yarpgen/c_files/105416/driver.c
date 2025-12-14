#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)94;
unsigned short var_3 = (unsigned short)31033;
short var_4 = (short)-10969;
long long int var_6 = 1782305804449884672LL;
unsigned long long int var_8 = 15241021391433579758ULL;
int zero = 0;
signed char var_10 = (signed char)-18;
short var_11 = (short)-30925;
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
