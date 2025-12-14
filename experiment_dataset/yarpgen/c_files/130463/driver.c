#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)22161;
long long int var_11 = 6753313733529210322LL;
long long int var_14 = 4991655438086864500LL;
unsigned int var_18 = 3205092417U;
int zero = 0;
unsigned char var_19 = (unsigned char)175;
int var_20 = 1510625692;
long long int var_21 = 2840744224119826419LL;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)0;
unsigned int var_24 = 3772788851U;
_Bool var_25 = (_Bool)1;
long long int arr_0 [19] ;
unsigned short arr_1 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 5546656100717983214LL : 4616584806821977400LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)29285 : (unsigned short)15103;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
