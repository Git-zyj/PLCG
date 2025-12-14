#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 884572058;
int var_1 = 1529586559;
unsigned int var_3 = 3363502255U;
long long int var_4 = -1272001625343437283LL;
unsigned short var_9 = (unsigned short)26467;
long long int var_14 = -5368743632249963999LL;
_Bool var_15 = (_Bool)1;
int var_17 = -24042329;
int zero = 0;
unsigned int var_18 = 3876146985U;
unsigned int var_19 = 3787905167U;
unsigned char var_20 = (unsigned char)41;
unsigned short var_21 = (unsigned short)36682;
int arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -756687913 : -1402730205;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
