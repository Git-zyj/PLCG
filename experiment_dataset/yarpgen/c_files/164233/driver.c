#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17513014193253597528ULL;
unsigned int var_6 = 2384863188U;
short var_10 = (short)-25340;
long long int var_11 = 3926502546932783240LL;
int zero = 0;
unsigned short var_17 = (unsigned short)8322;
unsigned short var_18 = (unsigned short)35489;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
