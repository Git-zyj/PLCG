#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)31724;
signed char var_3 = (signed char)-72;
signed char var_5 = (signed char)2;
short var_6 = (short)-3001;
long long int var_7 = -7629059416491419913LL;
short var_10 = (short)-27324;
short var_11 = (short)-28834;
signed char var_12 = (signed char)64;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)127;
int var_16 = -400094705;
int var_17 = -525396305;
int zero = 0;
short var_18 = (short)-30129;
unsigned short var_19 = (unsigned short)38518;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
