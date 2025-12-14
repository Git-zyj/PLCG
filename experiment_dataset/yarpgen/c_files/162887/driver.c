#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-42;
int var_2 = -1878705734;
unsigned short var_3 = (unsigned short)25727;
long long int var_5 = 2282954125481963727LL;
signed char var_9 = (signed char)-18;
unsigned int var_17 = 2864156613U;
signed char var_18 = (signed char)-40;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)26046;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)-28;
long long int var_24 = 6120846080023576631LL;
signed char arr_8 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)-62 : (signed char)59;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
