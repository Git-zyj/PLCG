#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8485112292320280506LL;
unsigned char var_2 = (unsigned char)19;
signed char var_4 = (signed char)99;
unsigned long long int var_6 = 4362278527876077033ULL;
long long int var_14 = 7488335926447442158LL;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2692127364U;
unsigned short var_17 = (unsigned short)30433;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
