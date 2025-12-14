#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 640288489860337808ULL;
signed char var_3 = (signed char)31;
signed char var_6 = (signed char)-69;
long long int var_9 = 7168972415189918741LL;
unsigned long long int var_16 = 16294753716742258640ULL;
unsigned long long int var_17 = 7255523504660058057ULL;
signed char var_18 = (signed char)23;
signed char var_19 = (signed char)-84;
int zero = 0;
signed char var_20 = (signed char)-63;
long long int var_21 = -4639677563813578817LL;
unsigned short var_22 = (unsigned short)24026;
unsigned long long int var_23 = 10038268590421849828ULL;
long long int var_24 = -1425557391104919677LL;
long long int var_25 = -3334821071648478954LL;
long long int var_26 = -643611349736821936LL;
unsigned long long int var_27 = 3583009858386439664ULL;
unsigned short var_28 = (unsigned short)63550;
signed char arr_3 [21] [21] [21] ;
unsigned long long int arr_5 [21] [21] ;
signed char arr_10 [21] [21] ;
long long int arr_16 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)97;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = 10536865540806837144ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)14 : (signed char)-11;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 8177754535795773012LL : -4309528582512019036LL;
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
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
