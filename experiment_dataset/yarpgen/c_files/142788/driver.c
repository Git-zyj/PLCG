#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)126;
unsigned int var_2 = 3745594444U;
signed char var_7 = (signed char)115;
unsigned char var_9 = (unsigned char)107;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)11769;
unsigned char var_12 = (unsigned char)114;
int zero = 0;
long long int var_19 = 2799318752263451474LL;
signed char var_20 = (signed char)-47;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-32;
signed char var_23 = (signed char)-120;
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
