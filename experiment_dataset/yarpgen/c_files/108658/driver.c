#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-89;
unsigned long long int var_4 = 9984460208033564302ULL;
unsigned long long int var_5 = 14061747922980690632ULL;
unsigned int var_8 = 2849078075U;
unsigned int var_13 = 2704993615U;
int zero = 0;
unsigned short var_17 = (unsigned short)17364;
unsigned short var_18 = (unsigned short)37757;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 9385265226257368748ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
