#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4689;
short var_3 = (short)31229;
unsigned char var_5 = (unsigned char)15;
unsigned short var_7 = (unsigned short)6258;
int var_12 = 1876739640;
_Bool var_13 = (_Bool)1;
int var_17 = -1739909436;
int zero = 0;
long long int var_19 = 3717093267883904906LL;
signed char var_20 = (signed char)-26;
void init() {
}

void checksum() {
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
