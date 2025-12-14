#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)6228;
int var_4 = 781080788;
unsigned short var_6 = (unsigned short)55051;
int var_7 = -40094085;
int var_9 = 460612387;
unsigned int var_10 = 3930972960U;
int zero = 0;
signed char var_11 = (signed char)-93;
int var_12 = 555710156;
unsigned char var_13 = (unsigned char)33;
unsigned short var_14 = (unsigned short)25562;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
