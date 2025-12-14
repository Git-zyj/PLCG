#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)14;
unsigned short var_1 = (unsigned short)20880;
long long int var_3 = -8224754604386638551LL;
short var_8 = (short)29746;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = 4780107511637187277LL;
short var_19 = (short)11916;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
