#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-7036;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-57;
short var_17 = (short)-12555;
long long int var_18 = 9007751008277666161LL;
long long int var_19 = -1827380783629819608LL;
unsigned int var_20 = 2975048032U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
