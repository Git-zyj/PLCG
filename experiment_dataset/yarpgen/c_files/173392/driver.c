#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3310820047U;
_Bool var_2 = (_Bool)1;
short var_5 = (short)45;
unsigned short var_7 = (unsigned short)60100;
signed char var_8 = (signed char)-25;
int zero = 0;
unsigned int var_12 = 1018530352U;
int var_13 = 5876935;
unsigned long long int var_14 = 1887062218557156673ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
