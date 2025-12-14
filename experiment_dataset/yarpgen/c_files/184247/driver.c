#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17079049025310022523ULL;
short var_2 = (short)14979;
unsigned short var_3 = (unsigned short)3968;
unsigned int var_5 = 1661234144U;
unsigned short var_6 = (unsigned short)12692;
int zero = 0;
unsigned long long int var_11 = 7535744541422790412ULL;
signed char var_12 = (signed char)-47;
long long int var_13 = 4717286510357096442LL;
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
