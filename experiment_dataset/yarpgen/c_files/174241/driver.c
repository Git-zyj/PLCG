#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3273830041U;
long long int var_4 = 5684566074616532570LL;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned char var_9 = (unsigned char)67;
short var_12 = (short)25003;
int zero = 0;
unsigned char var_13 = (unsigned char)133;
unsigned int var_14 = 4278716341U;
unsigned int var_15 = 2542515409U;
unsigned int var_16 = 4040475844U;
unsigned int var_17 = 2335295920U;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 1808658634U;
int var_20 = -965724165;
long long int var_21 = -4038451842927324151LL;
long long int var_22 = 8264130261044366342LL;
signed char var_23 = (signed char)-84;
long long int var_24 = -611368412776111131LL;
signed char arr_1 [19] ;
int arr_2 [19] [19] ;
unsigned int arr_6 [19] [19] ;
unsigned long long int arr_11 [19] [19] [19] ;
int arr_10 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)-103;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 1104189307;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = 1842686099U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 11740599155578379826ULL : 2372192239310344515ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -1015305136 : -2108692521;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
