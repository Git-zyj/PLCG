#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)48131;
unsigned int var_4 = 1086700111U;
int var_7 = 1218552550;
signed char var_9 = (signed char)-66;
unsigned short var_10 = (unsigned short)24452;
int zero = 0;
unsigned long long int var_12 = 10137233474323123336ULL;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)67;
unsigned short var_15 = (unsigned short)13464;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
