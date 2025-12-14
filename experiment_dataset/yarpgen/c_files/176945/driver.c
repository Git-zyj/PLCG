#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 1218067837;
unsigned char var_2 = (unsigned char)135;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)105;
_Bool var_5 = (_Bool)1;
long long int var_6 = -1679535005247573572LL;
short var_7 = (short)8788;
_Bool var_8 = (_Bool)0;
long long int var_9 = -2538487621369211478LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = 782283143;
unsigned short var_12 = (unsigned short)15363;
int var_13 = 515860919;
unsigned int var_14 = 2554404433U;
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
