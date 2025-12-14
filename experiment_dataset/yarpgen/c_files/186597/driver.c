#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-13;
long long int var_2 = 4289673060672746659LL;
unsigned char var_3 = (unsigned char)140;
_Bool var_4 = (_Bool)1;
long long int var_5 = -1340942541038356735LL;
unsigned char var_6 = (unsigned char)33;
long long int var_7 = 2910106993999845797LL;
short var_10 = (short)-14619;
unsigned long long int var_11 = 3492774428712458053ULL;
int var_12 = 2096326009;
unsigned short var_13 = (unsigned short)42006;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_15 = 1745403826;
unsigned short var_16 = (unsigned short)19754;
unsigned short var_17 = (unsigned short)16560;
unsigned short var_18 = (unsigned short)59366;
unsigned short var_19 = (unsigned short)51226;
unsigned int var_20 = 675658976U;
long long int var_21 = -6685199443868425363LL;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 2002653723941969354ULL;
long long int var_24 = -2817987777478948012LL;
short var_25 = (short)-6241;
unsigned char var_26 = (unsigned char)192;
int var_27 = 394355261;
unsigned long long int var_28 = 7192954706884548139ULL;
unsigned short var_29 = (unsigned short)10102;
unsigned int var_30 = 3008393364U;
unsigned long long int var_31 = 234387448331249453ULL;
unsigned int var_32 = 3820119435U;
unsigned short var_33 = (unsigned short)54842;
unsigned int arr_0 [15] ;
signed char arr_1 [15] ;
unsigned long long int arr_4 [20] ;
unsigned short arr_6 [20] ;
unsigned long long int arr_8 [20] ;
unsigned int arr_13 [20] [20] [20] [20] ;
unsigned long long int arr_14 [20] [20] [20] [20] [20] [20] ;
unsigned long long int arr_17 [20] [20] [20] [20] ;
short arr_22 [20] ;
short arr_23 [20] [20] [20] [20] [20] [20] ;
_Bool arr_25 [20] [20] [20] [20] [20] ;
unsigned char arr_30 [15] ;
unsigned int arr_2 [15] ;
short arr_15 [20] [20] ;
unsigned short arr_26 [20] [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 3552543261U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)-49;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 5498577108021292791ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (unsigned short)63864;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 13439975999791814004ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 3029060443U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 15127878691286468996ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 1800380377767406017ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_22 [i_0] = (short)-30563;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-26734;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_30 [i_0] = (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 3119248524U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_15 [i_0] [i_1] = (short)15335;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)59958;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
