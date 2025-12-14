#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)12533;
long long int var_4 = 4627387452835395282LL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_10 = 296855996897274379ULL;
signed char var_12 = (signed char)4;
signed char var_15 = (signed char)-84;
signed char var_17 = (signed char)62;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)52;
unsigned char var_20 = (unsigned char)23;
int var_21 = 1845123156;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
