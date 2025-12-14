#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-14;
_Bool var_3 = (_Bool)1;
short var_5 = (short)30588;
unsigned long long int var_6 = 4564913821076577630ULL;
long long int var_7 = 3266380568732108038LL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 14804343837647480013ULL;
int zero = 0;
unsigned int var_10 = 2488820449U;
short var_11 = (short)-30787;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
