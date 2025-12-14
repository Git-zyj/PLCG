#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 462759357555146545LL;
short var_2 = (short)-10393;
long long int var_4 = 2628362825910247468LL;
_Bool var_7 = (_Bool)0;
int zero = 0;
int var_11 = -1401659575;
short var_12 = (short)11593;
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
