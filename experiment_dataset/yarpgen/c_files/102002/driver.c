#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-66;
signed char var_2 = (signed char)-112;
short var_4 = (short)-12490;
unsigned long long int var_5 = 2209405200837425328ULL;
_Bool var_8 = (_Bool)1;
long long int var_9 = -3674664851653734309LL;
unsigned long long int var_10 = 1826198459341321874ULL;
_Bool var_11 = (_Bool)1;
long long int var_12 = 9180020232800726755LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 134425369U;
_Bool var_17 = (_Bool)0;
int var_18 = -463991650;
unsigned char var_19 = (unsigned char)85;
unsigned int var_20 = 2573878981U;
unsigned char arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)158;
}

void checksum() {
    hash(&seed, var_15);
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
