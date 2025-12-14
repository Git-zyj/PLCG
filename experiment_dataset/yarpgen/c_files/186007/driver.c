#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)173;
signed char var_3 = (signed char)-92;
short var_8 = (short)31262;
short var_9 = (short)11337;
unsigned char var_11 = (unsigned char)26;
unsigned long long int var_18 = 5266757967632690058ULL;
int zero = 0;
int var_20 = 2133061013;
int var_21 = -1753366928;
long long int var_22 = 6615313352247864730LL;
int var_23 = 536489935;
unsigned char var_24 = (unsigned char)253;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
