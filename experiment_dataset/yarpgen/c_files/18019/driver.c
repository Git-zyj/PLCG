#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_3 = -3573559855197225990LL;
unsigned int var_5 = 3431855680U;
unsigned int var_7 = 3341941956U;
unsigned char var_8 = (unsigned char)89;
short var_9 = (short)-19200;
unsigned char var_10 = (unsigned char)218;
short var_11 = (short)3241;
unsigned long long int var_12 = 15588892780212803622ULL;
unsigned long long int var_13 = 1965144839989951624ULL;
unsigned char var_14 = (unsigned char)121;
short var_15 = (short)1888;
short var_17 = (short)11941;
int zero = 0;
unsigned long long int var_19 = 14447439879009201189ULL;
unsigned char var_20 = (unsigned char)191;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)64;
unsigned char var_23 = (unsigned char)62;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
