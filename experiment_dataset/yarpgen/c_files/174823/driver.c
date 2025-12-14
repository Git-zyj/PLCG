#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6450976787123248185ULL;
unsigned long long int var_1 = 7198179446301870278ULL;
int var_2 = -162044403;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)154;
short var_5 = (short)3953;
short var_7 = (short)11519;
unsigned short var_8 = (unsigned short)55371;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 4926497511601455586ULL;
signed char var_11 = (signed char)81;
long long int var_12 = -1300321548318060334LL;
int zero = 0;
signed char var_13 = (signed char)111;
long long int var_14 = -6937603586495855812LL;
unsigned int var_15 = 1104552370U;
unsigned int var_16 = 3538528118U;
long long int var_17 = -4114253163749683127LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
