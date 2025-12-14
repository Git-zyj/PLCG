#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3434999325U;
int var_3 = 977085124;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 4080667370288736872ULL;
unsigned long long int var_11 = 16283512080673019015ULL;
int zero = 0;
unsigned int var_15 = 2962515360U;
unsigned long long int var_16 = 7679394003040295581ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
