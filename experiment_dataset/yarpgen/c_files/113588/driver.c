#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)26455;
long long int var_7 = 1058247654460911826LL;
short var_8 = (short)-21697;
long long int var_11 = -3527545193385461920LL;
int zero = 0;
long long int var_14 = -1155428995672331598LL;
int var_15 = -1471757274;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
