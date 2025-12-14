#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2906173273U;
unsigned int var_1 = 3199206519U;
signed char var_3 = (signed char)-116;
signed char var_5 = (signed char)127;
unsigned int var_6 = 1243562863U;
unsigned long long int var_10 = 8004122347072147665ULL;
unsigned long long int var_12 = 280409182333831229ULL;
int zero = 0;
unsigned long long int var_16 = 11019587872111786708ULL;
unsigned long long int var_17 = 17529733232123296635ULL;
unsigned long long int var_18 = 4621155937873184277ULL;
unsigned long long int var_19 = 7993922588471681336ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
