#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-59;
unsigned char var_4 = (unsigned char)211;
unsigned char var_6 = (unsigned char)9;
long long int var_8 = -4079677658246703799LL;
long long int var_10 = -1920660042281618372LL;
unsigned int var_12 = 3082834867U;
unsigned long long int var_14 = 13532825218986114118ULL;
int zero = 0;
long long int var_16 = 1823595392968890062LL;
long long int var_17 = 4489856866055475911LL;
long long int var_18 = -2988730208968198812LL;
unsigned long long int var_19 = 5269778357465022601ULL;
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
