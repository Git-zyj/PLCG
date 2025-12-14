#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17161836371017501683ULL;
signed char var_6 = (signed char)115;
unsigned short var_7 = (unsigned short)56923;
long long int var_8 = -4375394473949704424LL;
short var_11 = (short)31713;
unsigned long long int var_12 = 1214129835153980199ULL;
unsigned long long int var_16 = 9598555766560468317ULL;
int zero = 0;
long long int var_17 = 3483588565794451139LL;
unsigned short var_18 = (unsigned short)1356;
int var_19 = -468329384;
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
