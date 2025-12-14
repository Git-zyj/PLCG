#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3384844838U;
unsigned int var_11 = 3681418729U;
signed char var_14 = (signed char)-3;
int zero = 0;
unsigned short var_19 = (unsigned short)46811;
long long int var_20 = -1378375587669535985LL;
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
