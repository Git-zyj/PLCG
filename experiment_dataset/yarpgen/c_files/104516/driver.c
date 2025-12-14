#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5032236920875417146ULL;
unsigned long long int var_1 = 15485725726221300930ULL;
long long int var_2 = 1956668421608766622LL;
unsigned int var_3 = 752847079U;
long long int var_4 = -2138015450517272827LL;
int var_5 = -995935194;
short var_7 = (short)-16605;
unsigned long long int var_8 = 10820253197694432371ULL;
unsigned long long int var_10 = 17733303249081822521ULL;
unsigned char var_11 = (unsigned char)111;
int zero = 0;
long long int var_12 = -1535274865590223886LL;
unsigned long long int var_13 = 9161469410140049303ULL;
long long int var_14 = -6143207078264717400LL;
int var_15 = -326341937;
short var_16 = (short)-15503;
long long int var_17 = 4915711668464532193LL;
long long int var_18 = -6179797712369053586LL;
signed char var_19 = (signed char)110;
unsigned long long int var_20 = 3503888707551088866ULL;
short arr_0 [15] [15] ;
unsigned short arr_1 [15] ;
signed char arr_4 [15] [15] ;
unsigned short arr_5 [15] [15] [15] [15] ;
unsigned long long int arr_9 [17] [17] ;
unsigned long long int arr_10 [17] ;
short arr_20 [18] ;
long long int arr_21 [18] ;
long long int arr_23 [18] [18] ;
long long int arr_6 [15] ;
long long int arr_7 [15] [15] ;
unsigned int arr_11 [17] [17] ;
long long int arr_12 [17] ;
long long int arr_19 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (short)18219;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)13516;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-48;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (unsigned short)19243;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = 16225665808086629768ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = 13130818576260498226ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = (short)-25690;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_21 [i_0] = -8602476002845321846LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_23 [i_0] [i_1] = (i_1 % 2 == 0) ? 6425275932288833016LL : -1273760572694964993LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 7513135966638063316LL : -46561478952779775LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? -9008813420362991648LL : 8009015784948303845LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 2730707489U : 3329137243U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -3790597102239463507LL : -7277688114692602241LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? -509609924261789796LL : 5599708950866323892LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
