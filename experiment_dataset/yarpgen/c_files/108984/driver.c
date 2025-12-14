#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32303;
unsigned long long int var_2 = 2801445906905112874ULL;
long long int var_3 = -3327352600046818904LL;
long long int var_6 = -2232446439519287925LL;
signed char var_10 = (signed char)-68;
short var_11 = (short)32730;
_Bool var_12 = (_Bool)0;
signed char var_15 = (signed char)-41;
unsigned short var_17 = (unsigned short)31081;
unsigned char var_18 = (unsigned char)140;
signed char var_19 = (signed char)85;
int zero = 0;
unsigned long long int var_20 = 215562252314699105ULL;
int var_21 = 924303770;
void init() {
}

void checksum() {
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
