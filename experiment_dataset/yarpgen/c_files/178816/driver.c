#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)9;
unsigned long long int var_4 = 12349734725343509533ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 9260485588980117334ULL;
unsigned short var_9 = (unsigned short)14597;
signed char var_12 = (signed char)122;
_Bool var_13 = (_Bool)0;
short var_15 = (short)-20706;
unsigned long long int var_16 = 12120781621369331717ULL;
int zero = 0;
long long int var_17 = 6583766899265892773LL;
short var_18 = (short)-18595;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-1;
short arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)-17267;
}

void checksum() {
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
