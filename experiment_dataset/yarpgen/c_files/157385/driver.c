#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)202;
unsigned short var_3 = (unsigned short)47684;
unsigned int var_9 = 1205392569U;
unsigned char var_10 = (unsigned char)233;
unsigned int var_11 = 2163046454U;
long long int var_12 = -3818333221737180491LL;
unsigned int var_13 = 3417597830U;
unsigned long long int var_14 = 10859837549880038943ULL;
unsigned int var_15 = 923974295U;
int zero = 0;
unsigned short var_19 = (unsigned short)25528;
long long int var_20 = -6142790169653381407LL;
short var_21 = (short)29532;
short var_22 = (short)462;
unsigned int var_23 = 2548370360U;
long long int var_24 = -5401421345555015306LL;
short arr_0 [12] ;
int arr_1 [12] ;
unsigned int arr_3 [12] [12] ;
unsigned long long int arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)-11976 : (short)-12117;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1271293993 : 801600503;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 3204930404U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 6783964420094826109ULL : 17000327636665973746ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
