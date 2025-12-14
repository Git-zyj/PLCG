#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)30031;
signed char var_7 = (signed char)-17;
long long int var_8 = 4213056287159935445LL;
unsigned char var_9 = (unsigned char)92;
signed char var_11 = (signed char)-119;
unsigned long long int var_15 = 4248992856502690282ULL;
short var_16 = (short)31838;
int zero = 0;
signed char var_19 = (signed char)-71;
short var_20 = (short)28995;
short var_21 = (short)24710;
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
