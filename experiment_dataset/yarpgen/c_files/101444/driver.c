#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -829047363020691966LL;
unsigned char var_1 = (unsigned char)75;
unsigned long long int var_4 = 17732731560893481241ULL;
long long int var_5 = -4697306401139409432LL;
unsigned long long int var_6 = 17800669688922221116ULL;
short var_7 = (short)30644;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)17166;
_Bool var_10 = (_Bool)1;
unsigned long long int var_12 = 6235657708283514441ULL;
short var_13 = (short)-15651;
long long int var_14 = 4780970004984282715LL;
signed char var_17 = (signed char)100;
signed char var_18 = (signed char)4;
long long int var_19 = 5059511149138111055LL;
int zero = 0;
signed char var_20 = (signed char)45;
signed char var_21 = (signed char)-75;
long long int var_22 = -3584953845633145803LL;
signed char var_23 = (signed char)67;
int var_24 = 1345836508;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
