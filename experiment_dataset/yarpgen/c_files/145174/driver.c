#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14626;
signed char var_2 = (signed char)-38;
long long int var_5 = 5325021384901503027LL;
int var_6 = 2031755525;
short var_7 = (short)8401;
unsigned char var_10 = (unsigned char)183;
long long int var_11 = -4160620979004100105LL;
int zero = 0;
int var_12 = 1426373275;
unsigned short var_13 = (unsigned short)45929;
signed char var_14 = (signed char)-1;
short var_15 = (short)-14427;
signed char var_16 = (signed char)-20;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
