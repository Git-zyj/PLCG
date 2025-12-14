#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4250585706U;
_Bool var_2 = (_Bool)1;
long long int var_4 = -6027027910542844965LL;
unsigned int var_7 = 1259265500U;
short var_8 = (short)-12476;
unsigned int var_9 = 1764267453U;
signed char var_11 = (signed char)-6;
unsigned int var_14 = 3796492749U;
int zero = 0;
short var_15 = (short)9158;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 11677979442750100054ULL;
int var_18 = 1991597748;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
