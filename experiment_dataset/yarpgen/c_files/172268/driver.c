#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16956952232779120832ULL;
int var_1 = -529525132;
short var_2 = (short)11080;
_Bool var_3 = (_Bool)0;
short var_8 = (short)134;
int zero = 0;
unsigned int var_12 = 2748370350U;
short var_13 = (short)-27434;
unsigned long long int var_14 = 12320838407367509242ULL;
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
