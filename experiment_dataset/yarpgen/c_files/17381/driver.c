#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8405;
unsigned short var_3 = (unsigned short)62026;
int var_5 = 1023886631;
long long int var_8 = -6304701332846442189LL;
int zero = 0;
short var_10 = (short)-86;
long long int var_11 = -7689763953294717793LL;
unsigned short var_12 = (unsigned short)58373;
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
