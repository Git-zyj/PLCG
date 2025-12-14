#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)131;
_Bool var_7 = (_Bool)0;
unsigned long long int var_11 = 7975930067873492768ULL;
short var_13 = (short)-299;
unsigned int var_15 = 3575057171U;
unsigned short var_16 = (unsigned short)14454;
int zero = 0;
unsigned char var_17 = (unsigned char)176;
short var_18 = (short)22692;
short var_19 = (short)22615;
unsigned int var_20 = 2530819165U;
unsigned char var_21 = (unsigned char)165;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
