#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17035918961820503507ULL;
unsigned long long int var_8 = 1330372262175297521ULL;
unsigned int var_10 = 1580954936U;
short var_12 = (short)12216;
int zero = 0;
unsigned int var_13 = 2585457347U;
unsigned long long int var_14 = 9901576323679668586ULL;
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
