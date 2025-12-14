#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17732625692389233428ULL;
_Bool var_5 = (_Bool)1;
int var_6 = -1757691896;
unsigned short var_8 = (unsigned short)55562;
int zero = 0;
long long int var_19 = -4208470990141292927LL;
short var_20 = (short)-7510;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
