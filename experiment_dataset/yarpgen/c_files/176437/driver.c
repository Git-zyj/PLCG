#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_11 = -9055274152282128372LL;
_Bool var_13 = (_Bool)0;
short var_15 = (short)-9778;
long long int var_17 = -1217313888066555019LL;
int zero = 0;
long long int var_19 = -5139261130837485556LL;
int var_20 = 782773707;
int var_21 = -854811909;
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
