#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)197;
_Bool var_5 = (_Bool)1;
unsigned int var_9 = 2388658681U;
unsigned int var_11 = 1360507563U;
long long int var_15 = 6168353530027367586LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_19 = (short)-29571;
signed char var_20 = (signed char)-125;
unsigned char var_21 = (unsigned char)225;
void init() {
}

void checksum() {
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
