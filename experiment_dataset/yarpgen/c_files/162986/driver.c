#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6283435678383275428ULL;
long long int var_3 = -1851625485338927402LL;
unsigned int var_8 = 884799029U;
long long int var_13 = -5785785633171517815LL;
unsigned short var_16 = (unsigned short)6386;
int zero = 0;
unsigned short var_20 = (unsigned short)53237;
short var_21 = (short)27053;
int var_22 = 369583949;
long long int var_23 = -3592415139687448605LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
