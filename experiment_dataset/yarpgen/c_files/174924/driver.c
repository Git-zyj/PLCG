#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1283112601U;
short var_1 = (short)-7347;
short var_4 = (short)19743;
_Bool var_5 = (_Bool)1;
long long int var_6 = -3099390333256999780LL;
unsigned long long int var_8 = 1097414078051625064ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1712218744U;
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
