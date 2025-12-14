#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -27959894937879426LL;
signed char var_2 = (signed char)83;
long long int var_3 = 6258688322194368437LL;
unsigned int var_6 = 3468869343U;
short var_8 = (short)18567;
unsigned short var_10 = (unsigned short)31718;
long long int var_11 = -979679150197970646LL;
int var_12 = -33978379;
long long int var_15 = -296710154984599139LL;
short var_17 = (short)-14697;
int zero = 0;
unsigned int var_18 = 3767359089U;
unsigned long long int var_19 = 569145685193292433ULL;
short var_20 = (short)22943;
int var_21 = 110940816;
void init() {
}

void checksum() {
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
