#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3431014411832257929LL;
unsigned int var_1 = 3935228283U;
long long int var_4 = -2147704833345196668LL;
long long int var_8 = -5758036699399313055LL;
int var_10 = -421669329;
int var_11 = -892229468;
short var_12 = (short)23123;
signed char var_13 = (signed char)-15;
int zero = 0;
signed char var_14 = (signed char)43;
int var_15 = 316416104;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
