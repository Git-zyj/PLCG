#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 545966911382460423LL;
long long int var_3 = -3733545953886053806LL;
unsigned int var_5 = 2602301879U;
unsigned long long int var_6 = 13356824750987825001ULL;
short var_8 = (short)-26421;
unsigned long long int var_9 = 3989847028964968999ULL;
short var_11 = (short)-21190;
signed char var_12 = (signed char)2;
short var_13 = (short)-19555;
long long int var_15 = -3072962583251051707LL;
long long int var_16 = 3028171103868226353LL;
unsigned short var_17 = (unsigned short)35975;
signed char var_18 = (signed char)36;
unsigned int var_19 = 1998202530U;
int zero = 0;
unsigned long long int var_20 = 5380396206649459677ULL;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)64429;
_Bool var_23 = (_Bool)1;
long long int var_24 = -1226888848020229713LL;
short var_25 = (short)-6509;
unsigned long long int arr_2 [16] ;
unsigned long long int arr_3 [16] ;
short arr_7 [25] ;
unsigned long long int arr_8 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 13024916375213787610ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 12070689317703538718ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)-11632 : (short)-15897;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 16757928026020376876ULL : 12153965684741696290ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
