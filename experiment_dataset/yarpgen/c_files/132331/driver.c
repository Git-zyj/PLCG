#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 176390444;
unsigned int var_2 = 40339193U;
signed char var_5 = (signed char)-30;
unsigned int var_7 = 3651715759U;
unsigned long long int var_8 = 6689737909059783136ULL;
short var_10 = (short)17147;
int zero = 0;
int var_11 = -1902877236;
_Bool var_12 = (_Bool)1;
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
