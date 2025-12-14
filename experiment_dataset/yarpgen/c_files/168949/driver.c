#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)18964;
long long int var_2 = -4852334216487876907LL;
int var_3 = 2093826277;
long long int var_9 = -6591437119686888837LL;
signed char var_12 = (signed char)5;
signed char var_16 = (signed char)62;
int zero = 0;
signed char var_17 = (signed char)-66;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
