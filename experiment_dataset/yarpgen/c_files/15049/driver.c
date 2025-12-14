#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2288753576U;
unsigned short var_11 = (unsigned short)4450;
int zero = 0;
unsigned long long int var_12 = 1589828466320929206ULL;
unsigned short var_13 = (unsigned short)20669;
unsigned long long int var_14 = 16608564264731298336ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
