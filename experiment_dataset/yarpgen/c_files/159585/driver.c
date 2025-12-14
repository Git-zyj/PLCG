#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16951630324671815026ULL;
_Bool var_2 = (_Bool)0;
short var_4 = (short)30402;
unsigned char var_6 = (unsigned char)232;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)114;
signed char var_9 = (signed char)123;
int zero = 0;
short var_18 = (short)-29505;
signed char var_19 = (signed char)127;
short var_20 = (short)1760;
unsigned long long int var_21 = 1900342373877448573ULL;
int var_22 = -1701647145;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
