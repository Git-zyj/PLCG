#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9147691566030778085LL;
unsigned long long int var_1 = 466780636256069552ULL;
unsigned int var_3 = 3967109431U;
unsigned long long int var_4 = 12860846912883139712ULL;
short var_6 = (short)26243;
int var_7 = 1402983818;
unsigned long long int var_9 = 11928337850781663924ULL;
signed char var_10 = (signed char)-60;
int zero = 0;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)53;
signed char var_14 = (signed char)96;
unsigned long long int var_15 = 3040294206158459466ULL;
short var_16 = (short)-27420;
unsigned int var_17 = 2504730653U;
signed char var_18 = (signed char)-83;
unsigned char var_19 = (unsigned char)67;
long long int var_20 = 2512933079657922275LL;
int var_21 = -1320048707;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
