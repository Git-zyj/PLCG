#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -413285265;
short var_8 = (short)6763;
int var_9 = -412618074;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)46542;
unsigned short var_12 = (unsigned short)1481;
int var_13 = -1442780339;
int zero = 0;
unsigned short var_15 = (unsigned short)22718;
short var_16 = (short)26559;
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
