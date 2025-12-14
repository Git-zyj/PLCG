#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2004447432848287009LL;
long long int var_1 = -2662915366257791486LL;
unsigned long long int var_3 = 10795008072926929146ULL;
long long int var_4 = 8298845105259714001LL;
unsigned int var_5 = 2162310489U;
int var_8 = -1789175544;
unsigned char var_10 = (unsigned char)223;
long long int var_11 = -5108240050728568776LL;
int var_13 = -666187579;
unsigned int var_14 = 783760204U;
unsigned char var_15 = (unsigned char)200;
int zero = 0;
long long int var_17 = 3843840399387317810LL;
unsigned char var_18 = (unsigned char)193;
long long int var_19 = 3874997258486838986LL;
long long int var_20 = 4798687542798246364LL;
long long int var_21 = -4551281916658274284LL;
int var_22 = -549617593;
signed char var_23 = (signed char)55;
int var_24 = 1517748106;
short var_25 = (short)15209;
long long int var_26 = -4073607692972777429LL;
unsigned int var_27 = 184520345U;
long long int var_28 = 7014699483612895572LL;
_Bool var_29 = (_Bool)0;
long long int var_30 = 2720882985236595129LL;
int var_31 = -767116004;
unsigned long long int var_32 = 14633163459076114871ULL;
long long int arr_0 [11] ;
long long int arr_1 [11] [11] ;
unsigned short arr_2 [11] [11] ;
long long int arr_6 [11] [11] [11] [11] ;
unsigned long long int arr_13 [11] [11] [11] [11] [11] ;
long long int arr_16 [11] [11] [11] ;
unsigned int arr_17 [11] ;
long long int arr_20 [11] [11] ;
long long int arr_19 [11] [11] ;
int arr_22 [11] ;
long long int arr_26 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -3794524550673002750LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 8856345796414633467LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)48188;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -4210765063272798836LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 3411929236661407202ULL : 2635534628490688924ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 557092000013868460LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_17 [i_0] = 3049800050U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_20 [i_0] [i_1] = -6766377946369377762LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_19 [i_0] [i_1] = 6244481909257783170LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_22 [i_0] = 379313680;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_26 [i_0] [i_1] = 1844984791340159012LL;
}

void checksum() {
    hash(&seed, var_17);
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
