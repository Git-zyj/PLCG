#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3421254271U;
unsigned long long int var_4 = 2807739499501248656ULL;
_Bool var_5 = (_Bool)1;
long long int var_6 = 1721991656381947060LL;
unsigned short var_7 = (unsigned short)36718;
long long int var_8 = -5457077796834373214LL;
signed char var_9 = (signed char)-49;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)201;
int zero = 0;
short var_14 = (short)-22349;
int var_15 = 1522574132;
int var_16 = -1224268499;
unsigned long long int var_17 = 663427050798415449ULL;
unsigned long long int var_18 = 12716905329289194311ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
