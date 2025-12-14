#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4388992706470613579LL;
unsigned char var_1 = (unsigned char)0;
unsigned short var_2 = (unsigned short)24123;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)207;
unsigned char var_5 = (unsigned char)179;
unsigned char var_6 = (unsigned char)66;
long long int var_7 = 9081971788054318958LL;
long long int var_8 = 892873310635117126LL;
unsigned short var_9 = (unsigned short)30105;
int zero = 0;
unsigned char var_10 = (unsigned char)201;
unsigned short var_11 = (unsigned short)23335;
unsigned short var_12 = (unsigned short)4693;
unsigned short var_13 = (unsigned short)6003;
unsigned short var_14 = (unsigned short)25142;
unsigned char var_15 = (unsigned char)14;
unsigned short var_16 = (unsigned short)49137;
unsigned char var_17 = (unsigned char)113;
long long int var_18 = -4831655621304226845LL;
_Bool var_19 = (_Bool)1;
long long int var_20 = -6811061090050812182LL;
unsigned char var_21 = (unsigned char)12;
unsigned char var_22 = (unsigned char)31;
signed char var_23 = (signed char)-117;
unsigned short var_24 = (unsigned short)43364;
unsigned short var_25 = (unsigned short)4295;
unsigned char var_26 = (unsigned char)223;
unsigned short arr_0 [24] ;
short arr_2 [24] ;
long long int arr_6 [24] [24] [24] [24] ;
long long int arr_7 [24] [24] [24] [24] ;
short arr_8 [24] [24] [24] [24] ;
unsigned char arr_10 [24] [24] [24] ;
long long int arr_12 [24] [24] [24] ;
unsigned char arr_13 [24] ;
long long int arr_14 [24] ;
unsigned char arr_18 [19] ;
_Bool arr_11 [24] [24] [24] [24] ;
unsigned char arr_15 [24] ;
unsigned short arr_16 [24] [24] [24] [24] ;
long long int arr_17 [24] [24] [24] [24] ;
unsigned short arr_21 [19] ;
_Bool arr_26 [19] ;
signed char arr_27 [19] ;
long long int arr_30 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)47978;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)29138;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -5986893782374862586LL : 4044325482188788140LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 6770135139001656080LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)23684 : (short)-19683;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3740050062918016090LL : -5330992019150310644LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (unsigned char)25;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = 486972649022250528LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = (unsigned char)202;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned char)184 : (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)11018 : (unsigned short)16637;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -678611107146559384LL : -8408211775792184692LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_21 [i_0] = (unsigned short)18976;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_26 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_27 [i_0] = (signed char)127;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_30 [i_0] = -2660237281818529744LL;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_30 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
