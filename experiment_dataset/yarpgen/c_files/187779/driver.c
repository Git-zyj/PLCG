#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16613495873592877900ULL;
long long int var_2 = -7732548634778225682LL;
long long int var_3 = 8371985593138319072LL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_8 = 5660726475904369076ULL;
int zero = 0;
short var_10 = (short)9793;
unsigned char var_11 = (unsigned char)80;
short var_12 = (short)-32505;
int var_13 = -1757552966;
unsigned long long int var_14 = 2958311817011086512ULL;
long long int var_15 = 1732648772582276632LL;
unsigned long long int var_16 = 9884718462836048769ULL;
int var_17 = 1960934487;
long long int var_18 = 4681981741990469168LL;
unsigned long long int var_19 = 14956245651028070670ULL;
short var_20 = (short)-9037;
unsigned int var_21 = 3105311568U;
unsigned short var_22 = (unsigned short)46301;
unsigned char var_23 = (unsigned char)241;
unsigned char var_24 = (unsigned char)39;
unsigned short var_25 = (unsigned short)55243;
signed char var_26 = (signed char)85;
short var_27 = (short)26074;
_Bool var_28 = (_Bool)0;
unsigned char var_29 = (unsigned char)240;
unsigned short var_30 = (unsigned short)52122;
long long int var_31 = -4706831242827497991LL;
signed char var_32 = (signed char)-19;
unsigned short arr_1 [18] [18] ;
long long int arr_2 [18] [18] ;
unsigned char arr_3 [18] ;
unsigned long long int arr_4 [18] [18] [18] ;
unsigned long long int arr_5 [18] [18] ;
short arr_6 [18] ;
unsigned long long int arr_7 [18] ;
short arr_8 [18] ;
unsigned long long int arr_9 [18] [18] ;
unsigned char arr_11 [18] [18] [18] ;
short arr_13 [18] [18] [18] ;
long long int arr_21 [18] [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)39667 : (unsigned short)54849;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 7849713734517713339LL : 5487927481736621802LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned char)246;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 10670478209772122316ULL : 12003971357533077424ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 1412966790824931100ULL : 4895323026866353096ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (short)-32298;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 15859092199784280015ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (short)-18057;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = 11042843891721592659ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)-2857;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 3426097184204274587LL : -1495836865556651032LL;
}

void checksum() {
    hash(&seed, var_10);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
