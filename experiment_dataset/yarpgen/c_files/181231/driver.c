#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5447;
unsigned short var_1 = (unsigned short)12980;
unsigned long long int var_3 = 17409864840680906490ULL;
unsigned short var_4 = (unsigned short)35810;
unsigned char var_6 = (unsigned char)174;
unsigned char var_7 = (unsigned char)83;
unsigned short var_8 = (unsigned short)36324;
unsigned long long int var_9 = 14270929459959776493ULL;
short var_10 = (short)-26609;
unsigned short var_11 = (unsigned short)37903;
unsigned long long int var_12 = 2298799640583615725ULL;
unsigned short var_13 = (unsigned short)6241;
unsigned int var_14 = 1688263953U;
unsigned short var_15 = (unsigned short)23836;
unsigned short var_16 = (unsigned short)17117;
int zero = 0;
unsigned int var_17 = 1382231553U;
_Bool var_18 = (_Bool)1;
short var_19 = (short)14134;
short var_20 = (short)-3796;
unsigned char var_21 = (unsigned char)251;
unsigned int var_22 = 3295079187U;
unsigned short var_23 = (unsigned short)44470;
unsigned int var_24 = 2027539440U;
short var_25 = (short)-23248;
unsigned short var_26 = (unsigned short)33234;
unsigned int var_27 = 3582367976U;
short var_28 = (short)-10458;
unsigned short var_29 = (unsigned short)23115;
unsigned short var_30 = (unsigned short)48626;
unsigned int arr_1 [19] [19] ;
unsigned int arr_5 [20] ;
unsigned short arr_7 [20] [20] ;
unsigned int arr_8 [20] [20] ;
unsigned short arr_9 [20] [20] ;
unsigned short arr_14 [20] ;
unsigned short arr_17 [20] [20] ;
unsigned short arr_20 [25] ;
unsigned short arr_3 [19] ;
unsigned int arr_4 [19] [19] ;
unsigned int arr_11 [20] [20] [20] ;
unsigned short arr_12 [20] [20] [20] ;
unsigned int arr_15 [20] ;
unsigned int arr_18 [20] [20] [20] ;
unsigned int arr_21 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 1405870777U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 1935401314U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)59974;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = 2807075804U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)53130;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned short)25963 : (unsigned short)48099;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned short)32217;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (unsigned short)87 : (unsigned short)34254;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)63510;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 3243052664U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 3828993553U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned short)35698;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 4159808343U : 3172741317U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 49778561U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 1313139969U : 106171119U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
