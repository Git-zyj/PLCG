#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)58;
unsigned char var_2 = (unsigned char)174;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)147;
short var_10 = (short)18339;
unsigned long long int var_13 = 2121596769503044665ULL;
int var_14 = 1678568684;
int zero = 0;
unsigned long long int var_18 = 885273828511773370ULL;
int var_19 = 598686089;
signed char var_20 = (signed char)17;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
