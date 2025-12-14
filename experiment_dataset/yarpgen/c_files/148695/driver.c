#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31728;
long long int var_1 = -8700621345263063809LL;
int var_3 = 184800430;
short var_5 = (short)16974;
unsigned long long int var_6 = 17547075961549337538ULL;
int var_7 = -183700130;
short var_8 = (short)26703;
unsigned short var_9 = (unsigned short)39463;
unsigned long long int var_10 = 12256850267251801354ULL;
short var_12 = (short)-20267;
unsigned int var_14 = 953237293U;
_Bool var_15 = (_Bool)1;
short var_17 = (short)31746;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)43461;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 4398029496838732241ULL;
int var_22 = 1736490354;
unsigned long long int var_23 = 6031466378359208954ULL;
int var_24 = -1064482633;
unsigned long long int arr_0 [19] [19] ;
unsigned short arr_1 [19] [19] ;
unsigned long long int arr_5 [19] [19] ;
_Bool arr_6 [19] ;
unsigned int arr_9 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 6219271106827399205ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)42954;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 16376739747796280014ULL : 17911663389935250136ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 845727592U : 902057987U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
