#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2023458050U;
unsigned char var_11 = (unsigned char)193;
unsigned int var_12 = 1243547634U;
short var_13 = (short)29146;
_Bool var_14 = (_Bool)1;
unsigned short var_16 = (unsigned short)27527;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_19 = -1891707220587969218LL;
long long int var_20 = -1963592053748874986LL;
signed char var_21 = (signed char)7;
short var_22 = (short)-25984;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
