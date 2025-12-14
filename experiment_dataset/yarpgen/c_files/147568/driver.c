#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10474257237955397853ULL;
signed char var_3 = (signed char)-13;
long long int var_6 = -8793075957462527603LL;
int var_9 = -821324945;
int var_10 = 1654652238;
short var_11 = (short)-18065;
unsigned short var_13 = (unsigned short)61489;
unsigned short var_14 = (unsigned short)45660;
short var_16 = (short)2695;
int zero = 0;
short var_17 = (short)24524;
unsigned short var_18 = (unsigned short)14842;
unsigned short var_19 = (unsigned short)26284;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
