#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-11;
unsigned short var_4 = (unsigned short)46378;
unsigned short var_6 = (unsigned short)11418;
unsigned short var_10 = (unsigned short)30903;
unsigned short var_13 = (unsigned short)23816;
unsigned short var_15 = (unsigned short)51967;
unsigned short var_17 = (unsigned short)56443;
int var_18 = -850202573;
int zero = 0;
unsigned short var_19 = (unsigned short)38981;
unsigned short var_20 = (unsigned short)2083;
signed char var_21 = (signed char)96;
unsigned short var_22 = (unsigned short)61240;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
