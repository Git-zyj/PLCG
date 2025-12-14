#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)81;
long long int var_2 = -171770075095118895LL;
int var_3 = -1862323357;
int var_13 = -469071749;
int zero = 0;
long long int var_16 = 7844646753447732917LL;
short var_17 = (short)18964;
signed char var_18 = (signed char)-63;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
