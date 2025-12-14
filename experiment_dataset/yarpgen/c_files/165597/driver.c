#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1779963397;
unsigned short var_2 = (unsigned short)41100;
signed char var_3 = (signed char)-93;
signed char var_5 = (signed char)34;
int var_8 = 1949462158;
unsigned int var_10 = 2134226860U;
int var_11 = -622218966;
unsigned char var_13 = (unsigned char)152;
signed char var_16 = (signed char)52;
short var_17 = (short)19821;
int zero = 0;
short var_18 = (short)27365;
int var_19 = -1743179400;
unsigned short var_20 = (unsigned short)27079;
long long int var_21 = -5089323587587876630LL;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)7311;
unsigned char var_24 = (unsigned char)95;
short var_25 = (short)-2856;
signed char var_26 = (signed char)103;
int var_27 = -850901455;
unsigned char var_28 = (unsigned char)153;
unsigned long long int var_29 = 4387266327423333278ULL;
signed char var_30 = (signed char)32;
long long int var_31 = -7369704035760767795LL;
unsigned char var_32 = (unsigned char)227;
int var_33 = 985351180;
unsigned char var_34 = (unsigned char)118;
signed char var_35 = (signed char)-113;
unsigned int arr_0 [15] ;
unsigned long long int arr_1 [15] ;
unsigned short arr_2 [15] [15] ;
signed char arr_3 [15] ;
signed char arr_6 [15] [15] [15] ;
long long int arr_7 [15] [15] [15] [15] ;
_Bool arr_8 [15] [15] [15] ;
unsigned long long int arr_10 [15] [15] [15] ;
unsigned long long int arr_12 [15] [15] [15] ;
unsigned long long int arr_14 [15] ;
unsigned short arr_17 [20] ;
unsigned int arr_18 [20] ;
signed char arr_15 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 743803799U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 13324446844156037657ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)6837;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (signed char)-57;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-67 : (signed char)-17;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 6677918351815994475LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 15603503965058795741ULL : 9306795009727249016ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 4399076920768115309ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = 4475644406033154364ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = (unsigned short)62664;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_18 [i_0] = 3254253028U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (signed char)81 : (signed char)-39;
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
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
