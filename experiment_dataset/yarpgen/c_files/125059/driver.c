#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14785523206659628578ULL;
unsigned char var_6 = (unsigned char)24;
unsigned long long int var_9 = 2305371417777602962ULL;
_Bool var_10 = (_Bool)0;
signed char var_13 = (signed char)-73;
int zero = 0;
unsigned long long int var_14 = 159066919505470025ULL;
unsigned short var_15 = (unsigned short)43972;
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
