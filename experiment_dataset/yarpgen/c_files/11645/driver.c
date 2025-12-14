#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2317142232741407811LL;
unsigned short var_2 = (unsigned short)8818;
short var_4 = (short)-6057;
unsigned int var_6 = 2758373519U;
signed char var_7 = (signed char)80;
unsigned short var_9 = (unsigned short)64706;
unsigned char var_10 = (unsigned char)133;
long long int var_11 = -3952098429370082977LL;
unsigned int var_12 = 1192543180U;
long long int var_14 = 3204371996128115588LL;
unsigned long long int var_15 = 17651594145442787472ULL;
long long int var_16 = 6646266592199523204LL;
unsigned long long int var_17 = 5372919767155806756ULL;
int zero = 0;
long long int var_18 = -5412296478339538188LL;
int var_19 = -917178049;
unsigned long long int var_20 = 2288192104020081226ULL;
unsigned short var_21 = (unsigned short)40251;
unsigned int var_22 = 1298979283U;
short var_23 = (short)11157;
_Bool var_24 = (_Bool)0;
signed char var_25 = (signed char)47;
short var_26 = (short)-9727;
int var_27 = 1358669964;
unsigned long long int var_28 = 7416769971069351990ULL;
short var_29 = (short)953;
long long int var_30 = -8438285814269806572LL;
unsigned short var_31 = (unsigned short)54176;
long long int var_32 = 8229499890116940392LL;
int var_33 = -174468875;
unsigned short var_34 = (unsigned short)26912;
signed char arr_0 [18] ;
unsigned long long int arr_1 [18] ;
unsigned long long int arr_2 [18] ;
_Bool arr_3 [18] [18] ;
int arr_4 [18] ;
signed char arr_5 [18] [18] ;
_Bool arr_6 [18] [18] ;
signed char arr_8 [18] [18] [18] ;
long long int arr_9 [18] ;
long long int arr_15 [10] ;
int arr_13 [18] [18] ;
int arr_21 [10] [10] ;
unsigned short arr_22 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)-60;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 16410275716001802726ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 5383632623625578743ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 2003151337;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)34;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)-94;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = 4843835114286667197LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = -7975302809120967327LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = 1112601531;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_21 [i_0] [i_1] = -1348807160;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_22 [i_0] [i_1] = (unsigned short)58403;
}

void checksum() {
    hash(&seed, var_18);
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
