#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3650450105531579755ULL;
unsigned int var_1 = 1438071446U;
unsigned long long int var_2 = 14713180303362202761ULL;
unsigned short var_3 = (unsigned short)59177;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)50280;
unsigned short var_8 = (unsigned short)37061;
long long int var_9 = 2424193452513192694LL;
unsigned short var_11 = (unsigned short)32640;
unsigned long long int var_12 = 17712083650583272825ULL;
unsigned int var_13 = 415000004U;
unsigned short var_14 = (unsigned short)22811;
int var_15 = 997336146;
_Bool var_16 = (_Bool)1;
long long int var_17 = 8923870655031690307LL;
int zero = 0;
long long int var_18 = 6268442879942745900LL;
int var_19 = 1696528250;
unsigned long long int var_20 = 8566277488576095542ULL;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)38;
unsigned long long int var_23 = 9205786078020331655ULL;
long long int var_24 = 3985443456837675360LL;
unsigned short var_25 = (unsigned short)56545;
long long int var_26 = -2479601329295577454LL;
unsigned int var_27 = 1315679421U;
long long int var_28 = -7331358072650158553LL;
unsigned int var_29 = 189679696U;
short var_30 = (short)-12372;
long long int var_31 = -96352053215756861LL;
signed char var_32 = (signed char)-31;
unsigned short arr_0 [15] ;
long long int arr_5 [10] [10] ;
long long int arr_6 [10] ;
signed char arr_9 [10] ;
int arr_13 [10] [10] [10] ;
unsigned long long int arr_14 [10] ;
unsigned int arr_15 [10] [10] [10] ;
unsigned long long int arr_16 [10] [10] [10] ;
unsigned long long int arr_17 [10] [10] [10] ;
long long int arr_21 [10] [10] [10] ;
signed char arr_3 [15] [15] ;
int arr_4 [15] [15] ;
unsigned int arr_10 [10] [10] ;
unsigned short arr_11 [10] [10] [10] ;
unsigned char arr_20 [10] [10] [10] ;
unsigned long long int arr_23 [10] [10] [10] ;
signed char arr_24 [10] ;
short arr_28 [10] ;
signed char arr_32 [10] ;
_Bool arr_33 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)37957;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? -8975534831092166320LL : 7864684556582538909LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 6713138705288586521LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (signed char)-76 : (signed char)124;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 139268154 : -596370047;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = 17383411141447605784ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 922057806U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2984082732257474453ULL : 4518765224697970209ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 18083127787602084101ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 248055384088709124LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-3;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = -673732308;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 288063915U : 1552225118U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)22560 : (unsigned short)11446;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)87 : (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 17580751204426727551ULL : 3484055523958788571ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (signed char)-16 : (signed char)14;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_28 [i_0] = (short)-16150;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_32 [i_0] = (signed char)5;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_33 [i_0] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_33 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
