#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)33;
int var_6 = 514449936;
unsigned long long int var_8 = 13687047906244007331ULL;
signed char var_11 = (signed char)-75;
unsigned char var_12 = (unsigned char)52;
short var_16 = (short)13649;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-91;
void init() {
}

void checksum() {
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
