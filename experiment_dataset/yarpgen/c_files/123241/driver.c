#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10221584225331289669ULL;
unsigned long long int var_2 = 738195457621442900ULL;
unsigned char var_7 = (unsigned char)244;
unsigned long long int var_10 = 11274381101616881842ULL;
unsigned long long int var_12 = 1646440411328988331ULL;
unsigned long long int var_13 = 15787147614259916545ULL;
short var_14 = (short)27545;
unsigned char var_16 = (unsigned char)91;
int zero = 0;
unsigned char var_17 = (unsigned char)67;
unsigned char var_18 = (unsigned char)173;
unsigned long long int var_19 = 7747953544674891622ULL;
void init() {
}

void checksum() {
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
