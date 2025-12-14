#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)191;
long long int var_3 = 6974124304315233871LL;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-73;
unsigned char var_12 = (unsigned char)44;
signed char var_13 = (signed char)90;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = -1541416285;
long long int var_18 = 4238856774655660135LL;
long long int var_19 = 8063070137568542762LL;
void init() {
}

void checksum() {
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
