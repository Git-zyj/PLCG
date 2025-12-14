#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31537;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 1720469204U;
short var_4 = (short)15053;
unsigned long long int var_7 = 9117958176595572252ULL;
unsigned short var_9 = (unsigned short)3684;
int zero = 0;
short var_11 = (short)-26205;
short var_12 = (short)8729;
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
