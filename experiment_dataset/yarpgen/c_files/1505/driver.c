#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)12575;
unsigned short var_3 = (unsigned short)39098;
unsigned short var_4 = (unsigned short)54456;
int var_5 = -1299924042;
unsigned int var_6 = 1473654156U;
unsigned char var_8 = (unsigned char)136;
unsigned int var_11 = 429105166U;
int zero = 0;
int var_13 = 699477448;
unsigned long long int var_14 = 9713064131835614252ULL;
unsigned long long int var_15 = 13637010837211461560ULL;
unsigned long long int var_16 = 9868380709889770948ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
