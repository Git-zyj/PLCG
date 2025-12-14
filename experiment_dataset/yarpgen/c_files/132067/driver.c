#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-88;
int var_1 = 418869598;
int var_2 = -634217560;
long long int var_9 = -5213858887442421347LL;
_Bool var_11 = (_Bool)1;
signed char var_13 = (signed char)-122;
signed char var_14 = (signed char)-82;
unsigned short var_15 = (unsigned short)24152;
long long int var_16 = 2045854263417748379LL;
_Bool var_17 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)203;
void init() {
}

void checksum() {
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
