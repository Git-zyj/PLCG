#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)8404;
unsigned int var_5 = 3072171886U;
short var_7 = (short)-29943;
unsigned short var_8 = (unsigned short)24892;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 14995478594879445497ULL;
long long int var_15 = -1951282163442679911LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
