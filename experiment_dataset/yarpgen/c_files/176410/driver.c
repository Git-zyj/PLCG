#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)46;
long long int var_6 = 3222299477328929390LL;
int var_11 = -2114368102;
short var_12 = (short)6558;
unsigned int var_13 = 3485647575U;
unsigned char var_14 = (unsigned char)240;
unsigned short var_16 = (unsigned short)4831;
int zero = 0;
signed char var_19 = (signed char)-107;
signed char var_20 = (signed char)80;
unsigned long long int var_21 = 15152385705484827830ULL;
signed char var_22 = (signed char)-85;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
