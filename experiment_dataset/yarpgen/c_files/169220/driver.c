#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-16677;
unsigned int var_3 = 3722456269U;
signed char var_14 = (signed char)111;
unsigned int var_15 = 3233828155U;
unsigned long long int var_16 = 14432394321974045976ULL;
unsigned short var_17 = (unsigned short)31404;
int zero = 0;
unsigned short var_18 = (unsigned short)36684;
unsigned int var_19 = 2319699663U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
