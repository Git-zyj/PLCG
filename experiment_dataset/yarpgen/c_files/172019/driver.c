#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = 661724954;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)30;
unsigned char var_6 = (unsigned char)9;
unsigned short var_8 = (unsigned short)15498;
unsigned short var_10 = (unsigned short)19478;
unsigned long long int var_12 = 3689807857226318738ULL;
int zero = 0;
short var_13 = (short)4339;
long long int var_14 = 7577300790748923500LL;
long long int var_15 = 3563112751259030602LL;
unsigned int var_16 = 1072177155U;
short var_17 = (short)32016;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 1162266829U;
signed char arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-107 : (signed char)-108;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
