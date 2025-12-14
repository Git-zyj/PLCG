#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13234333230434377276ULL;
unsigned char var_1 = (unsigned char)168;
_Bool var_2 = (_Bool)1;
unsigned int var_4 = 2616517951U;
_Bool var_7 = (_Bool)0;
unsigned short var_12 = (unsigned short)34769;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-80;
signed char var_15 = (signed char)-40;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
