#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)723;
unsigned long long int var_1 = 6669598170792909280ULL;
_Bool var_3 = (_Bool)1;
long long int var_4 = -6911502314600716653LL;
int var_6 = -1032181468;
_Bool var_9 = (_Bool)1;
short var_10 = (short)11061;
signed char var_11 = (signed char)-111;
long long int var_15 = -2594373691882986871LL;
int zero = 0;
signed char var_16 = (signed char)-59;
unsigned short var_17 = (unsigned short)48820;
int var_18 = -609143841;
unsigned char var_19 = (unsigned char)55;
signed char var_20 = (signed char)-22;
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
