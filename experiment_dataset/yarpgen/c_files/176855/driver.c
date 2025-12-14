#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 120127664U;
unsigned short var_1 = (unsigned short)3404;
int var_3 = -457338735;
long long int var_4 = -174442487916953034LL;
signed char var_5 = (signed char)89;
int var_8 = -737628766;
unsigned long long int var_9 = 7582958715714144111ULL;
short var_11 = (short)21689;
signed char var_12 = (signed char)94;
unsigned char var_13 = (unsigned char)63;
int zero = 0;
unsigned char var_14 = (unsigned char)154;
long long int var_15 = -1900320111160221002LL;
unsigned char var_16 = (unsigned char)111;
unsigned int var_17 = 1881357207U;
unsigned short var_18 = (unsigned short)1530;
long long int var_19 = 1413413936598839683LL;
int var_20 = -429776191;
long long int var_21 = -4103513599292140589LL;
int var_22 = -1877129542;
long long int arr_0 [22] [22] ;
signed char arr_1 [22] ;
unsigned char arr_2 [22] ;
unsigned char arr_5 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 752786214541173173LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)71;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)52 : (unsigned char)140;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
