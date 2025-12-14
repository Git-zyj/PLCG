#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1330204673;
int var_1 = -842183952;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)53898;
long long int var_4 = 8499973738793622595LL;
unsigned char var_6 = (unsigned char)23;
unsigned long long int var_7 = 16257052633193324758ULL;
unsigned short var_8 = (unsigned short)27230;
unsigned long long int var_9 = 4183506147416574527ULL;
short var_11 = (short)11894;
long long int var_12 = 1244887840871870996LL;
short var_13 = (short)5137;
unsigned int var_14 = 1408553691U;
long long int var_15 = 712573839443000795LL;
unsigned short var_16 = (unsigned short)11940;
short var_17 = (short)21969;
short var_18 = (short)10990;
int zero = 0;
unsigned long long int var_19 = 2521884156946685413ULL;
unsigned short var_20 = (unsigned short)62584;
unsigned short var_21 = (unsigned short)9351;
unsigned short var_22 = (unsigned short)31284;
long long int var_23 = -970901571496632788LL;
long long int var_24 = 4016237960888019626LL;
short arr_0 [17] ;
signed char arr_1 [17] [17] ;
unsigned char arr_4 [20] ;
unsigned char arr_5 [20] ;
_Bool arr_7 [24] ;
_Bool arr_9 [24] ;
short arr_6 [20] ;
unsigned int arr_11 [24] [24] ;
short arr_12 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (short)10550;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)49;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned char)36;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (short)-20469;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = 2718312766U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (short)24825;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
