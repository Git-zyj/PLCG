#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)191;
long long int var_1 = -2900384473757149195LL;
int var_2 = 1596147327;
int zero = 0;
signed char var_18 = (signed char)126;
short var_19 = (short)-14448;
long long int var_20 = 6680166208769644512LL;
signed char var_21 = (signed char)-45;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
