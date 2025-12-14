#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7308405661945382832LL;
unsigned int var_3 = 2767339429U;
unsigned long long int var_6 = 15408475095536462297ULL;
unsigned int var_7 = 3676753939U;
short var_13 = (short)488;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)129;
unsigned int var_17 = 4011649030U;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 11650386111165998011ULL;
signed char var_22 = (signed char)-82;
unsigned int var_23 = 2634106754U;
long long int var_24 = -1819145230844637650LL;
unsigned int var_25 = 2194552130U;
unsigned char var_26 = (unsigned char)217;
unsigned int var_27 = 2355849761U;
unsigned char var_28 = (unsigned char)54;
long long int arr_0 [12] ;
unsigned char arr_5 [12] ;
short arr_10 [12] [12] [12] [12] ;
signed char arr_11 [12] [12] [12] [12] ;
long long int arr_6 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 7459547063551764416LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned char)93;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)11899 : (short)-1843;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)-109 : (signed char)-122;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? -1012854185074783113LL : -6653302306719951801LL;
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
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
