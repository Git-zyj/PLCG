#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
short var_15 = (short)25158;
unsigned short var_16 = (unsigned short)10783;
int zero = 0;
unsigned short var_20 = (unsigned short)57880;
unsigned short var_21 = (unsigned short)20428;
_Bool var_22 = (_Bool)0;
long long int var_23 = -4439421257023928629LL;
signed char var_24 = (signed char)-112;
unsigned short var_25 = (unsigned short)37332;
long long int var_26 = -7032849930963641881LL;
short var_27 = (short)4203;
unsigned int arr_11 [11] ;
unsigned char arr_12 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 1104966944U : 3044251408U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (unsigned char)58;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
