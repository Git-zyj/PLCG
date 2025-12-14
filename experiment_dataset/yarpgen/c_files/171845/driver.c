#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)64;
unsigned int var_4 = 3128984667U;
long long int var_5 = -1736653739515190775LL;
unsigned int var_6 = 367090213U;
unsigned int var_8 = 699184367U;
unsigned short var_9 = (unsigned short)59427;
unsigned long long int var_10 = 7398942758966922521ULL;
unsigned short var_11 = (unsigned short)28838;
unsigned long long int var_13 = 8578862477401032032ULL;
signed char var_15 = (signed char)48;
unsigned int var_18 = 3588607016U;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 16065643080645088141ULL;
unsigned long long int var_21 = 17456810583933503433ULL;
unsigned short var_22 = (unsigned short)40413;
long long int var_23 = -2590752794847199542LL;
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
