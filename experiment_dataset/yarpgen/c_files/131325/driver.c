#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-39;
unsigned long long int var_3 = 113258870726966176ULL;
long long int var_4 = 6816657997518454609LL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_8 = 18430339353046705285ULL;
long long int var_9 = -2232727122115968943LL;
unsigned long long int var_10 = 883109909036280499ULL;
int zero = 0;
unsigned long long int var_11 = 8699672158573682113ULL;
signed char var_12 = (signed char)-85;
unsigned int var_13 = 244495629U;
unsigned int var_14 = 3706520529U;
unsigned short var_15 = (unsigned short)56873;
unsigned short var_16 = (unsigned short)63521;
long long int var_17 = 6399101101872859611LL;
short var_18 = (short)24662;
short var_19 = (short)-6019;
signed char var_20 = (signed char)10;
_Bool arr_0 [11] [11] ;
unsigned short arr_1 [11] ;
long long int arr_2 [11] [11] [11] ;
unsigned int arr_3 [11] [11] [11] ;
unsigned int arr_8 [11] [11] ;
long long int arr_10 [11] [11] [11] ;
unsigned char arr_12 [11] ;
unsigned long long int arr_14 [11] [11] [11] [11] ;
unsigned long long int arr_7 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned short)54857;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 3244437228672464154LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 4271516800U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = 620166169U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = -1965923689893641490LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 3545969074309045808ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 4254485501837085236ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
