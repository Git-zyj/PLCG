#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 12368602414632445393ULL;
unsigned short var_8 = (unsigned short)29933;
unsigned short var_10 = (unsigned short)56725;
int zero = 0;
signed char var_12 = (signed char)-123;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)28550;
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
