#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7556;
int var_3 = -1326821052;
_Bool var_4 = (_Bool)1;
long long int var_5 = -7561831301103376717LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-9747;
signed char var_12 = (signed char)-60;
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
