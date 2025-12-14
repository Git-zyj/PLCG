#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)33090;
unsigned short var_2 = (unsigned short)12234;
unsigned char var_3 = (unsigned char)132;
long long int var_4 = 4423641799176210317LL;
signed char var_11 = (signed char)-89;
int zero = 0;
unsigned char var_17 = (unsigned char)54;
int var_18 = -839701902;
unsigned char var_19 = (unsigned char)214;
unsigned long long int var_20 = 7326615650868655785ULL;
short var_21 = (short)-22761;
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
