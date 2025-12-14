#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 220350730U;
long long int var_3 = 2744533027797240441LL;
unsigned int var_4 = 2875596247U;
unsigned int var_5 = 4236774167U;
int var_6 = 1051476090;
long long int var_7 = 4419922188285368249LL;
unsigned int var_9 = 2574275997U;
long long int var_11 = -1263294958686668594LL;
long long int var_12 = -4155452417094634655LL;
unsigned int var_14 = 1703121677U;
unsigned long long int var_15 = 8495452592506848368ULL;
unsigned int var_17 = 88780972U;
signed char var_18 = (signed char)9;
int zero = 0;
long long int var_19 = -1706772135765401313LL;
unsigned int var_20 = 3229449604U;
long long int var_21 = -753301182702439190LL;
signed char var_22 = (signed char)5;
int var_23 = -1638755705;
unsigned short arr_2 [14] [14] ;
unsigned int arr_3 [14] ;
unsigned short arr_7 [14] [14] [14] ;
signed char arr_8 [14] [14] ;
unsigned short arr_16 [14] [14] [14] [14] ;
unsigned int arr_19 [14] ;
signed char arr_20 [14] [14] ;
long long int arr_24 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)62136;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 3856346657U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)43420 : (unsigned short)5288;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)18;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (unsigned short)51217;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 2993399180U : 645299997U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-71 : (signed char)15;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_24 [i_0] = 2523745851208409866LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
