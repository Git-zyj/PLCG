#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2915048275U;
short var_3 = (short)7943;
long long int var_5 = 6174819099380010267LL;
short var_8 = (short)-14076;
signed char var_9 = (signed char)80;
short var_12 = (short)26299;
long long int var_14 = -5714922887440524710LL;
int zero = 0;
short var_16 = (short)5458;
unsigned short var_17 = (unsigned short)25796;
signed char var_18 = (signed char)-79;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
