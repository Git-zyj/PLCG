#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64680;
unsigned long long int var_3 = 11500141859329666322ULL;
int var_4 = -1852158081;
unsigned int var_5 = 365513973U;
long long int var_7 = -8737878930089786854LL;
unsigned long long int var_8 = 17356138638098327220ULL;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 2489881094237648026ULL;
int zero = 0;
int var_13 = 1515534647;
unsigned char var_14 = (unsigned char)96;
int var_15 = 353416651;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-94;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
