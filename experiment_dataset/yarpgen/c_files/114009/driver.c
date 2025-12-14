#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14477;
unsigned short var_2 = (unsigned short)56333;
unsigned long long int var_6 = 1201008034565671361ULL;
short var_8 = (short)14199;
int zero = 0;
unsigned long long int var_10 = 12086013198444944136ULL;
signed char var_11 = (signed char)-30;
unsigned long long int var_12 = 9689555394609839636ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
