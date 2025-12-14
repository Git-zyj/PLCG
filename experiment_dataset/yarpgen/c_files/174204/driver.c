#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17378;
_Bool var_3 = (_Bool)0;
short var_7 = (short)8838;
signed char var_9 = (signed char)-10;
short var_10 = (short)3025;
unsigned short var_11 = (unsigned short)49864;
long long int var_14 = -7155001619482472981LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = -150586694;
short var_19 = (short)25818;
void init() {
}

void checksum() {
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
