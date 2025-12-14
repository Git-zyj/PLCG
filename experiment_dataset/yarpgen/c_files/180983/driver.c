#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)2373;
int var_3 = -2115192017;
long long int var_4 = 8575427076910894347LL;
unsigned long long int var_5 = 7752270267942930091ULL;
unsigned long long int var_6 = 1587077924944745853ULL;
signed char var_7 = (signed char)97;
long long int var_8 = -4119684892455283985LL;
_Bool var_11 = (_Bool)1;
long long int var_12 = 5667949322267838604LL;
signed char var_13 = (signed char)15;
signed char var_15 = (signed char)39;
unsigned char var_16 = (unsigned char)44;
int zero = 0;
unsigned char var_17 = (unsigned char)144;
unsigned long long int var_18 = 13068242859644519177ULL;
unsigned long long int var_19 = 5441328862024385714ULL;
long long int var_20 = -8900965548282628939LL;
signed char var_21 = (signed char)-113;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
