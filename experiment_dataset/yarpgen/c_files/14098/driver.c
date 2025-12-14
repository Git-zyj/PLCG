#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
int var_5 = 1501563939;
short var_8 = (short)13630;
signed char var_9 = (signed char)-68;
signed char var_10 = (signed char)-26;
int zero = 0;
int var_11 = -872131556;
long long int var_12 = 287709656359308943LL;
signed char var_13 = (signed char)-72;
unsigned char var_14 = (unsigned char)91;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
