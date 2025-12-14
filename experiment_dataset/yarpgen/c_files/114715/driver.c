#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)224;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-18831;
unsigned long long int var_7 = 63447675860853189ULL;
unsigned short var_9 = (unsigned short)49230;
long long int var_10 = 1821569813845501640LL;
short var_13 = (short)576;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-96;
signed char var_19 = (signed char)-53;
long long int var_20 = -3515590998241465837LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
