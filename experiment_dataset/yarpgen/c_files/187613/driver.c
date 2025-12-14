#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19313;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)39518;
signed char var_5 = (signed char)-13;
short var_6 = (short)17545;
signed char var_8 = (signed char)-22;
_Bool var_12 = (_Bool)1;
int var_17 = 388744195;
int zero = 0;
signed char var_18 = (signed char)-79;
int var_19 = 563167305;
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
