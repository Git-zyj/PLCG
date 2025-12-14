#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)27770;
long long int var_2 = -7136505047096110207LL;
unsigned char var_3 = (unsigned char)244;
unsigned char var_4 = (unsigned char)159;
int var_5 = -417242297;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)41676;
short var_9 = (short)15511;
unsigned short var_10 = (unsigned short)7692;
unsigned char var_12 = (unsigned char)126;
int zero = 0;
int var_14 = -928817157;
unsigned int var_15 = 576347289U;
unsigned int var_16 = 2483602014U;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)34794;
short var_19 = (short)-30676;
unsigned short arr_0 [14] ;
unsigned short arr_1 [14] ;
unsigned int arr_2 [14] ;
unsigned short arr_5 [14] [14] [14] ;
unsigned short arr_3 [14] ;
unsigned long long int arr_4 [14] ;
unsigned int arr_8 [14] ;
int arr_13 [14] ;
unsigned int arr_14 [14] ;
unsigned char arr_18 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)16380;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)54464;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 2921820639U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)27720;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned short)46542;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 7075301979574217122ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 3404866768U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = -565642509;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = 2867606192U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (unsigned char)105 : (unsigned char)40;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
