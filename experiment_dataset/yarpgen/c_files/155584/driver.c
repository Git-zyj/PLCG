#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 358253319;
unsigned char var_1 = (unsigned char)80;
_Bool var_2 = (_Bool)0;
int var_3 = -1770440368;
int var_4 = 1784268843;
signed char var_5 = (signed char)108;
unsigned int var_6 = 813952121U;
int var_7 = -1571048690;
unsigned int var_8 = 4261962538U;
unsigned long long int var_9 = 14914970646876948349ULL;
signed char var_10 = (signed char)-68;
int zero = 0;
int var_11 = -894326191;
unsigned int var_12 = 2609459406U;
unsigned char var_13 = (unsigned char)29;
signed char var_14 = (signed char)50;
unsigned char var_15 = (unsigned char)96;
unsigned long long int var_16 = 1096124509633399526ULL;
signed char var_17 = (signed char)99;
unsigned long long int var_18 = 13355651465209436453ULL;
unsigned int var_19 = 3966402107U;
unsigned int var_20 = 3384482918U;
unsigned long long int var_21 = 7910140292755370090ULL;
unsigned long long int var_22 = 1766904735539109201ULL;
unsigned long long int var_23 = 6112466447352781035ULL;
unsigned long long int var_24 = 17556356899899301727ULL;
unsigned int var_25 = 4057147268U;
unsigned long long int var_26 = 13079366009120096181ULL;
unsigned char arr_0 [13] [13] ;
long long int arr_1 [13] [13] ;
unsigned char arr_2 [12] ;
unsigned long long int arr_3 [12] ;
unsigned char arr_4 [12] ;
unsigned char arr_5 [12] ;
unsigned char arr_6 [12] ;
unsigned long long int arr_7 [12] ;
unsigned char arr_8 [12] ;
unsigned char arr_9 [12] ;
unsigned int arr_10 [12] ;
unsigned char arr_14 [12] [12] ;
_Bool arr_16 [12] [12] [12] ;
unsigned int arr_20 [12] [12] ;
unsigned int arr_21 [12] [12] [12] [12] ;
unsigned char arr_15 [12] ;
unsigned int arr_22 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 4549044357423698275LL : 4300656197048304658LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)62;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 1008210777158202262ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned char)246;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 2181909375558216412ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = 3789265599U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? 3301546806U : 917265758U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1115099325U : 423730749U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = (unsigned char)231;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 977049671U : 1035544675U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
