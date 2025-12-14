#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-63;
unsigned short var_6 = (unsigned short)46638;
unsigned long long int var_9 = 7097657327004631779ULL;
short var_10 = (short)27781;
int var_11 = -40176494;
int var_13 = 1534942289;
int zero = 0;
long long int var_14 = 2577956791328770023LL;
int var_15 = 739288595;
int var_16 = -1050954070;
void init() {
}

void checksum() {
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
