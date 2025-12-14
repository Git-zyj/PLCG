#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-26203;
short var_8 = (short)30225;
unsigned long long int var_18 = 2868410425810641253ULL;
int zero = 0;
unsigned long long int var_19 = 1018934886737874916ULL;
int var_20 = 1063382458;
int var_21 = -1427010371;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
