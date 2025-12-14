#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)47;
short var_2 = (short)-29980;
unsigned int var_4 = 4030147991U;
short var_5 = (short)-9179;
signed char var_6 = (signed char)31;
unsigned char var_9 = (unsigned char)70;
short var_11 = (short)-5727;
short var_12 = (short)484;
unsigned int var_13 = 3224344686U;
long long int var_14 = -1033388767451112140LL;
int zero = 0;
unsigned char var_15 = (unsigned char)178;
unsigned short var_16 = (unsigned short)61594;
void init() {
}

void checksum() {
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
