#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5672186329193074247LL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 3988830464927464321ULL;
unsigned char var_8 = (unsigned char)153;
long long int var_10 = 3962883180162576024LL;
int var_14 = -272677264;
int zero = 0;
long long int var_15 = -5552019161485801563LL;
short var_16 = (short)25407;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-74;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
