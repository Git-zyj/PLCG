#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)7;
short var_2 = (short)-29797;
unsigned int var_3 = 290665444U;
_Bool var_4 = (_Bool)0;
long long int var_5 = 6867319336060589049LL;
short var_7 = (short)12480;
unsigned char var_8 = (unsigned char)11;
unsigned short var_9 = (unsigned short)27758;
int var_10 = 1318956451;
long long int var_12 = -5994257539540176416LL;
long long int var_13 = -4693602746345743833LL;
long long int var_16 = -4717657725510995189LL;
long long int var_17 = -2752675775088868655LL;
int zero = 0;
unsigned int var_18 = 2843898141U;
int var_19 = -1620610020;
unsigned short var_20 = (unsigned short)38528;
unsigned short var_21 = (unsigned short)47001;
short var_22 = (short)7742;
unsigned short var_23 = (unsigned short)23747;
unsigned short var_24 = (unsigned short)118;
long long int var_25 = 5965643217592535403LL;
short var_26 = (short)-18872;
long long int var_27 = -5689676831875408561LL;
_Bool var_28 = (_Bool)1;
unsigned char var_29 = (unsigned char)90;
long long int var_30 = 7814585735598757988LL;
long long int var_31 = -1795815908742096863LL;
unsigned char var_32 = (unsigned char)46;
unsigned char var_33 = (unsigned char)26;
unsigned char var_34 = (unsigned char)177;
int arr_2 [15] ;
unsigned char arr_3 [15] ;
long long int arr_6 [24] ;
long long int arr_7 [24] ;
unsigned int arr_8 [24] [24] ;
long long int arr_12 [16] [16] ;
_Bool arr_13 [16] ;
unsigned short arr_14 [16] [16] ;
long long int arr_17 [16] [16] [16] ;
unsigned short arr_19 [16] [16] ;
_Bool arr_22 [16] [16] [16] ;
unsigned int arr_4 [15] [15] ;
unsigned char arr_5 [15] ;
long long int arr_9 [24] ;
long long int arr_10 [24] ;
int arr_15 [16] [16] ;
int arr_16 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -746883421 : -1914356970;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)205 : (unsigned char)112;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 4584369776273302192LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 7465221793260624270LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = 1005678836U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = -9026222540643580726LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)40905;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 8513491575096674811LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned short)37403;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 3539956286U : 3792034270U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)95 : (unsigned char)170;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = -9002242760138332104LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = -3841661781335738986LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = -446646364;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = -1108323903;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
