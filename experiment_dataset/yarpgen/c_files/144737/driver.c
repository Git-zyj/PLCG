#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_4 = 1507810234;
signed char var_7 = (signed char)-8;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)70;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = -8712062455759908357LL;
long long int var_15 = -6461437320018582647LL;
short var_16 = (short)-5186;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
