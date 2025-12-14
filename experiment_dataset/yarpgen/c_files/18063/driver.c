#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3327221288896860626LL;
unsigned long long int var_1 = 646723730700095882ULL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 17910005926865103335ULL;
signed char var_6 = (signed char)1;
unsigned char var_7 = (unsigned char)67;
int var_8 = 1624246047;
signed char var_12 = (signed char)22;
unsigned char var_15 = (unsigned char)234;
int zero = 0;
unsigned long long int var_16 = 1464170999098760580ULL;
short var_17 = (short)-21662;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
