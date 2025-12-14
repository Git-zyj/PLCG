#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34732;
_Bool var_1 = (_Bool)1;
short var_2 = (short)3757;
unsigned long long int var_3 = 16038483732577623488ULL;
unsigned short var_4 = (unsigned short)44445;
signed char var_7 = (signed char)-10;
short var_8 = (short)-6901;
unsigned short var_9 = (unsigned short)41403;
int zero = 0;
short var_10 = (short)5026;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
