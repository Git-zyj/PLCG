#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)17922;
signed char var_3 = (signed char)103;
short var_8 = (short)26908;
int var_11 = -1086597737;
_Bool var_12 = (_Bool)0;
int var_15 = 1509809143;
short var_17 = (short)9068;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)187;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 11445911448015869384ULL;
long long int var_22 = -64556104925664614LL;
unsigned int var_23 = 2646233829U;
unsigned int var_24 = 939772654U;
long long int var_25 = -2726710542377352050LL;
short var_26 = (short)29280;
unsigned int var_27 = 3853316792U;
long long int var_28 = -376086555159145664LL;
unsigned short var_29 = (unsigned short)58684;
long long int var_30 = 168181264088645722LL;
long long int arr_2 [14] ;
unsigned long long int arr_6 [14] ;
long long int arr_10 [14] [14] [14] [14] [14] ;
unsigned long long int arr_14 [19] [19] ;
unsigned long long int arr_15 [19] ;
_Bool arr_16 [19] ;
unsigned int arr_19 [19] [19] ;
short arr_21 [19] [19] ;
unsigned long long int arr_23 [19] [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -3898000383264434507LL : 4526783616432359292LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 3632425796911394499ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 5952097603681627477LL : 952079774739384020LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_14 [i_0] [i_1] = 6596837483126405024ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = 15453657771216371878ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_19 [i_0] [i_1] = 626268572U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)25041 : (short)8882;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 16822842242133729604ULL : 4347001171225347898ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
