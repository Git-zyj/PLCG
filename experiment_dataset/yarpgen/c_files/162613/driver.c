#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16272699933090367649ULL;
unsigned int var_2 = 1877702133U;
int var_3 = 2128166803;
int var_4 = -1853456238;
signed char var_6 = (signed char)57;
unsigned long long int var_7 = 10885725435110309982ULL;
short var_8 = (short)-14173;
unsigned short var_11 = (unsigned short)3089;
long long int var_12 = 4909385944035206710LL;
int var_13 = -909584923;
short var_15 = (short)14231;
int zero = 0;
signed char var_16 = (signed char)49;
_Bool var_17 = (_Bool)0;
long long int var_18 = 11905693335429062LL;
long long int var_19 = -7971276440891773511LL;
int var_20 = -2061015196;
long long int var_21 = 2818774685699478916LL;
short var_22 = (short)-10397;
_Bool var_23 = (_Bool)0;
short var_24 = (short)-32649;
unsigned short var_25 = (unsigned short)30781;
unsigned short arr_0 [17] [17] ;
unsigned long long int arr_2 [17] ;
long long int arr_3 [17] ;
short arr_6 [17] ;
signed char arr_7 [17] [17] [17] ;
int arr_8 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)20500 : (unsigned short)54475;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 17603805659506287972ULL : 9351114647645958338ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -7401422704466375111LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (short)-17026;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)82 : (signed char)-31;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 489895816;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
