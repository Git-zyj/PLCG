#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)52;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)99;
unsigned int var_6 = 1584009368U;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)196;
long long int var_10 = 6059465819613344257LL;
unsigned short var_11 = (unsigned short)48006;
unsigned long long int var_13 = 8462479609854335508ULL;
int zero = 0;
long long int var_15 = -7383190680937835798LL;
unsigned char var_16 = (unsigned char)168;
unsigned long long int var_17 = 2368119278899553805ULL;
unsigned short var_18 = (unsigned short)50679;
void init() {
}

void checksum() {
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
