#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)39166;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)52548;
unsigned short var_5 = (unsigned short)3607;
signed char var_9 = (signed char)-88;
unsigned long long int var_12 = 13658326622130126459ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)4346;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
