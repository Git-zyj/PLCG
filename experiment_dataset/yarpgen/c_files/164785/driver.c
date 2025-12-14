#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)17642;
unsigned char var_2 = (unsigned char)161;
_Bool var_5 = (_Bool)0;
long long int var_6 = 5381675191245368630LL;
unsigned char var_10 = (unsigned char)100;
unsigned short var_11 = (unsigned short)17954;
long long int var_12 = 7355261830148615277LL;
_Bool var_14 = (_Bool)1;
unsigned short var_16 = (unsigned short)10867;
unsigned int var_18 = 666018310U;
int zero = 0;
long long int var_19 = -3567370665188450610LL;
unsigned long long int var_20 = 8631859011753534566ULL;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 5790147721130003904ULL;
unsigned int var_23 = 1478152725U;
unsigned int var_24 = 2428106607U;
unsigned char var_25 = (unsigned char)23;
long long int var_26 = -769958385349466211LL;
signed char arr_8 [12] ;
long long int arr_9 [12] ;
unsigned long long int arr_12 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)63 : (signed char)62;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = -3864068213933543127LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = 16834332440957783431ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
