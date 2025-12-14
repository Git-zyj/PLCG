#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_6 = (unsigned short)12161;
signed char var_7 = (signed char)75;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 567011742U;
unsigned short var_14 = (unsigned short)16073;
long long int var_16 = 7561265991770684653LL;
unsigned char var_17 = (unsigned char)189;
int zero = 0;
long long int var_18 = 7535112160674910870LL;
_Bool var_19 = (_Bool)0;
int var_20 = -125497710;
long long int var_21 = 173930720259745770LL;
unsigned int var_22 = 2332722359U;
unsigned long long int var_23 = 12025642255537632803ULL;
unsigned short var_24 = (unsigned short)53136;
signed char var_25 = (signed char)109;
_Bool var_26 = (_Bool)0;
unsigned int var_27 = 1343524398U;
_Bool var_28 = (_Bool)0;
short var_29 = (short)31361;
_Bool var_30 = (_Bool)1;
int var_31 = -1760169590;
long long int arr_0 [17] [17] ;
unsigned int arr_1 [17] [17] ;
unsigned int arr_4 [17] [17] [17] ;
long long int arr_5 [17] [17] ;
unsigned int arr_7 [17] [17] ;
unsigned short arr_8 [17] [17] ;
short arr_14 [17] ;
unsigned long long int arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = -4644918135193770297LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 1209454297U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1835121929U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = -4699646839118329287LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = 2681915011U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)47033;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = (short)30671;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 2284594576377000758ULL;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
