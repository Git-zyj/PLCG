#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2785014088072449462LL;
long long int var_1 = 7573435771064475546LL;
short var_2 = (short)24858;
_Bool var_3 = (_Bool)1;
long long int var_7 = -13700265011354933LL;
long long int var_8 = 6161676616898191354LL;
int zero = 0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-8623;
long long int var_13 = 2834991825002592213LL;
long long int var_14 = 6510645774029577387LL;
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
