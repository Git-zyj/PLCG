#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1152591330;
unsigned short var_4 = (unsigned short)16883;
unsigned char var_7 = (unsigned char)170;
_Bool var_9 = (_Bool)0;
long long int var_10 = -8401799710154018387LL;
long long int var_14 = 8357136488654091725LL;
int zero = 0;
int var_15 = -1451408041;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
long long int var_18 = -6625416967545886844LL;
long long int var_19 = 4232569332441306867LL;
int var_20 = -365361017;
long long int var_21 = -6444104212144093015LL;
unsigned int var_22 = 2386183928U;
int var_23 = -145142905;
long long int var_24 = -7292491588253277532LL;
unsigned long long int arr_0 [19] ;
signed char arr_1 [19] ;
unsigned char arr_2 [19] ;
unsigned char arr_5 [24] ;
short arr_10 [24] [24] [24] ;
unsigned int arr_15 [24] [24] [24] [24] ;
int arr_17 [24] [24] [24] [24] ;
unsigned short arr_18 [24] [24] [24] [24] ;
_Bool arr_3 [19] ;
long long int arr_4 [19] [19] ;
unsigned short arr_21 [24] [24] [24] [24] ;
long long int arr_22 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 17313804056424499685ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned char)54;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (short)-32419;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2957858332U : 1751295372U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 439589491;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)20542 : (unsigned short)21233;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 2604860292888372469LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)56798 : (unsigned short)52377;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_22 [i_0] [i_1] = (i_1 % 2 == 0) ? 5805512800066111020LL : -3103918738965762662LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
