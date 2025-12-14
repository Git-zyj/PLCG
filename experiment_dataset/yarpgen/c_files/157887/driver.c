#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-20;
unsigned short var_1 = (unsigned short)62140;
unsigned long long int var_5 = 3533227936617384361ULL;
int var_6 = -1471827323;
unsigned int var_7 = 3213843809U;
unsigned long long int var_8 = 11528318286059289309ULL;
int zero = 0;
unsigned int var_12 = 657339620U;
unsigned int var_13 = 3682244848U;
long long int var_14 = 8898277573358753383LL;
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
