#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2230955295U;
signed char var_3 = (signed char)-79;
long long int var_11 = 5647265252048776942LL;
_Bool var_12 = (_Bool)0;
short var_13 = (short)31066;
int zero = 0;
unsigned char var_17 = (unsigned char)5;
long long int var_18 = 6742801958704347538LL;
unsigned char var_19 = (unsigned char)155;
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
