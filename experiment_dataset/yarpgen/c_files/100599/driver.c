#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 537813698U;
unsigned char var_3 = (unsigned char)75;
signed char var_5 = (signed char)-115;
signed char var_8 = (signed char)-40;
_Bool var_11 = (_Bool)0;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)46704;
int zero = 0;
short var_18 = (short)2269;
unsigned char var_19 = (unsigned char)109;
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
