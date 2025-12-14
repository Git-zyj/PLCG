#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 10497435217130873612ULL;
long long int var_6 = -1456092112287918023LL;
long long int var_7 = 3451129021590962491LL;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
unsigned int var_16 = 3395160950U;
unsigned long long int var_19 = 11435053301620299073ULL;
int zero = 0;
unsigned long long int var_20 = 11302367778823854027ULL;
short var_21 = (short)-8097;
unsigned char var_22 = (unsigned char)143;
unsigned int var_23 = 4094627235U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
