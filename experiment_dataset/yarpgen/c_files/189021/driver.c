#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2809483692U;
int var_4 = 1061850418;
int var_11 = 544416304;
unsigned int var_14 = 222708360U;
int zero = 0;
long long int var_19 = -928431305425754370LL;
unsigned short var_20 = (unsigned short)23629;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
