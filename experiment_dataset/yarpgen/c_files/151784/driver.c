#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)98;
unsigned int var_2 = 1270087059U;
unsigned int var_3 = 1013448183U;
unsigned char var_4 = (unsigned char)147;
unsigned short var_7 = (unsigned short)21866;
unsigned int var_8 = 3574456949U;
unsigned char var_9 = (unsigned char)243;
signed char var_11 = (signed char)-70;
unsigned char var_12 = (unsigned char)166;
long long int var_15 = 6268696234007390059LL;
unsigned char var_16 = (unsigned char)131;
unsigned char var_17 = (unsigned char)111;
unsigned short var_18 = (unsigned short)65425;
int zero = 0;
unsigned int var_19 = 1658924147U;
unsigned long long int var_20 = 14919316080299231775ULL;
unsigned int var_21 = 331138663U;
long long int var_22 = -4118233480821234010LL;
unsigned int var_23 = 2622625424U;
unsigned short var_24 = (unsigned short)40138;
unsigned long long int var_25 = 11694070108269855394ULL;
unsigned int arr_3 [24] ;
short arr_4 [24] ;
int arr_5 [24] ;
unsigned short arr_8 [24] ;
long long int arr_11 [24] [24] ;
unsigned int arr_12 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 2690908109U : 180798086U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)29997 : (short)9457;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 2050245584 : 1738420129;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)13454 : (unsigned short)39664;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? 402809154367529512LL : -8168738108447487258LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 3174934665U : 1359594123U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
