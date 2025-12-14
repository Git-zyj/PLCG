#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1510296299U;
unsigned short var_3 = (unsigned short)47477;
long long int var_4 = 5074186629395486118LL;
_Bool var_8 = (_Bool)0;
int var_10 = -1720422605;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 12466015377707521551ULL;
void init() {
}

void checksum() {
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
