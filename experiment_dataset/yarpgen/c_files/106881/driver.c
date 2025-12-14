#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)8;
short var_1 = (short)23705;
unsigned char var_2 = (unsigned char)8;
unsigned long long int var_4 = 9274124282168131988ULL;
int var_6 = -1650636684;
unsigned int var_8 = 2942901378U;
unsigned char var_9 = (unsigned char)36;
int var_10 = 613291673;
unsigned long long int var_11 = 3912674781694429228ULL;
unsigned long long int var_12 = 9682051811971797305ULL;
unsigned int var_13 = 3966326476U;
signed char var_14 = (signed char)-89;
int var_15 = -1361149134;
unsigned char var_16 = (unsigned char)204;
unsigned short var_17 = (unsigned short)29922;
int var_18 = 1439139181;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 3542720948U;
long long int var_21 = 1375283343516135147LL;
unsigned char var_22 = (unsigned char)142;
_Bool var_23 = (_Bool)1;
long long int var_24 = -184646735778285316LL;
int arr_0 [12] [12] ;
long long int arr_1 [12] [12] ;
unsigned char arr_4 [25] ;
unsigned char arr_5 [25] ;
unsigned char arr_6 [25] ;
int arr_2 [12] [12] ;
unsigned short arr_3 [12] ;
_Bool arr_7 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 222678425;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = -6216633495798837132LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)48 : (unsigned char)110;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned char)110;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 2046455681;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)45061;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
