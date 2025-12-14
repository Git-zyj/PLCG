#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)238;
long long int var_3 = -7534181296852862243LL;
signed char var_4 = (signed char)-125;
int var_6 = 1744750672;
unsigned char var_7 = (unsigned char)220;
unsigned int var_8 = 212014682U;
unsigned char var_10 = (unsigned char)161;
int var_14 = 12958694;
unsigned char var_15 = (unsigned char)139;
int zero = 0;
signed char var_18 = (signed char)17;
signed char var_19 = (signed char)10;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
