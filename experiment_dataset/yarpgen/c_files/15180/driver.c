#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12375188321798450163ULL;
unsigned long long int var_1 = 9429397441129326391ULL;
signed char var_2 = (signed char)38;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)9257;
unsigned long long int var_7 = 12401890696336367609ULL;
unsigned int var_8 = 2700604158U;
unsigned long long int var_9 = 318745691536559444ULL;
long long int var_10 = 5410742727713645384LL;
short var_11 = (short)11674;
unsigned int var_12 = 1156237649U;
unsigned char var_13 = (unsigned char)244;
long long int var_14 = 1346784316732445148LL;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 4047095092418070118ULL;
long long int var_17 = -2673940886773341995LL;
long long int var_18 = 4534110455601887183LL;
unsigned long long int var_19 = 4582454376906334774ULL;
int zero = 0;
signed char var_20 = (signed char)100;
unsigned char var_21 = (unsigned char)64;
short var_22 = (short)-28250;
_Bool var_23 = (_Bool)0;
int var_24 = -1585141489;
unsigned char var_25 = (unsigned char)58;
int var_26 = 1979478429;
long long int var_27 = 8535533433084832382LL;
unsigned char var_28 = (unsigned char)38;
unsigned int arr_3 [12] ;
unsigned char arr_4 [12] ;
unsigned long long int arr_8 [12] ;
unsigned long long int arr_13 [17] ;
_Bool arr_16 [17] ;
signed char arr_17 [17] [17] ;
unsigned long long int arr_18 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 1513780921U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned char)58;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 9682112379895693006ULL : 5532114050917638108ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = 16535161287077579424ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_17 [i_0] [i_1] = (signed char)-14;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = 716326379890166874ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
