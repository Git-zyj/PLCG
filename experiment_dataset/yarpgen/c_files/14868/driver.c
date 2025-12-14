#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2055240243U;
_Bool var_1 = (_Bool)1;
long long int var_3 = -8535333855560695206LL;
_Bool var_5 = (_Bool)0;
unsigned int var_14 = 241985298U;
unsigned long long int var_15 = 1410303280048600653ULL;
int zero = 0;
unsigned int var_18 = 1933748670U;
unsigned short var_19 = (unsigned short)34921;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)6754;
unsigned char var_22 = (unsigned char)22;
unsigned int arr_7 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1516955643U : 1665810950U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
