#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13341864141306277596ULL;
long long int var_1 = 9075961677127339905LL;
unsigned long long int var_2 = 5864902046971915177ULL;
unsigned long long int var_3 = 3760402396900850755ULL;
unsigned long long int var_4 = 1017914357627447376ULL;
unsigned int var_5 = 2002991264U;
unsigned short var_6 = (unsigned short)13982;
signed char var_7 = (signed char)-36;
unsigned int var_8 = 362896310U;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)163;
unsigned int var_11 = 2673034377U;
unsigned short var_12 = (unsigned short)41615;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3833719371U;
short var_15 = (short)23239;
unsigned int var_16 = 911531339U;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)104;
int zero = 0;
unsigned char var_19 = (unsigned char)66;
unsigned long long int var_20 = 10339489827660331444ULL;
unsigned short var_21 = (unsigned short)32003;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 3415263022U;
signed char var_24 = (signed char)50;
unsigned long long int var_25 = 2832065986844100778ULL;
int var_26 = 1838342130;
unsigned int var_27 = 1487950827U;
int var_28 = 542398263;
_Bool var_29 = (_Bool)1;
int var_30 = 1002371375;
unsigned int var_31 = 272071310U;
unsigned short arr_10 [11] ;
int arr_11 [11] [11] ;
unsigned char arr_16 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (unsigned short)9605;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_11 [i_0] [i_1] = 755955250;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)20 : (unsigned char)213;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
