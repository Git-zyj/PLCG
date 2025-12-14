#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5044802729225605378ULL;
unsigned char var_1 = (unsigned char)186;
unsigned long long int var_2 = 11409560782104441584ULL;
int var_3 = -1277921482;
unsigned long long int var_9 = 8003206256983218909ULL;
unsigned char var_10 = (unsigned char)53;
short var_11 = (short)-3746;
short var_12 = (short)30527;
unsigned char var_14 = (unsigned char)123;
short var_18 = (short)3142;
int zero = 0;
short var_19 = (short)23320;
unsigned char var_20 = (unsigned char)226;
unsigned long long int var_21 = 6271346027287130153ULL;
unsigned long long int var_22 = 10602900459023351827ULL;
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
