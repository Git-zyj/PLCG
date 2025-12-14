#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5774083401074695355LL;
unsigned short var_2 = (unsigned short)63881;
signed char var_3 = (signed char)-58;
short var_4 = (short)22559;
signed char var_5 = (signed char)-7;
signed char var_6 = (signed char)63;
unsigned long long int var_10 = 12493234974360442478ULL;
unsigned short var_12 = (unsigned short)41790;
long long int var_15 = 5999822340458555670LL;
unsigned short var_16 = (unsigned short)16712;
int zero = 0;
signed char var_17 = (signed char)-36;
long long int var_18 = -3705278194203721429LL;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-100;
unsigned long long int var_21 = 18338334086677642378ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
