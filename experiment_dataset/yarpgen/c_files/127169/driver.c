#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-9314;
unsigned int var_3 = 2611591051U;
short var_6 = (short)-19794;
_Bool var_7 = (_Bool)1;
unsigned char var_11 = (unsigned char)88;
int var_12 = -1536292594;
unsigned long long int var_14 = 14867186522387605438ULL;
long long int var_15 = 2801783928703198283LL;
long long int var_18 = -8801498109571537101LL;
int zero = 0;
short var_20 = (short)30415;
unsigned long long int var_21 = 11579138667123629923ULL;
unsigned long long int var_22 = 4201678936345838924ULL;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
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
