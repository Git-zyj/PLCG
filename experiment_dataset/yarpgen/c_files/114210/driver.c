#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6263401056382115788LL;
_Bool var_1 = (_Bool)0;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)1;
long long int var_9 = -2218333286244205494LL;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)64113;
long long int var_13 = 1388444368219253000LL;
_Bool var_14 = (_Bool)1;
long long int var_15 = -203602948938546582LL;
signed char var_16 = (signed char)2;
unsigned short var_17 = (unsigned short)32929;
unsigned long long int var_18 = 715129484249266182ULL;
long long int var_19 = -7214771598921463030LL;
int zero = 0;
short var_20 = (short)18307;
unsigned long long int var_21 = 17255533409331111779ULL;
signed char var_22 = (signed char)-29;
int var_23 = -243113182;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
