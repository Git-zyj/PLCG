#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3624498391U;
signed char var_3 = (signed char)32;
long long int var_4 = -3633183674285709397LL;
unsigned int var_6 = 4081621286U;
short var_7 = (short)24932;
short var_8 = (short)-29296;
signed char var_9 = (signed char)65;
_Bool var_10 = (_Bool)0;
long long int var_11 = -4463313242648279077LL;
_Bool var_12 = (_Bool)0;
long long int var_13 = 1494638027749585538LL;
short var_14 = (short)11823;
int zero = 0;
long long int var_15 = -2836825367467767766LL;
unsigned char var_16 = (unsigned char)2;
_Bool var_17 = (_Bool)0;
long long int var_18 = -4090875008202383431LL;
long long int var_19 = 345923625755700109LL;
unsigned int var_20 = 3792760464U;
_Bool arr_0 [22] ;
unsigned long long int arr_1 [22] [22] ;
_Bool arr_7 [22] ;
int arr_8 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 14211332827257287950ULL : 9118726531065700115ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 387608071 : 1331121879;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
