#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2931216836620985474LL;
unsigned long long int var_3 = 10799724201044130772ULL;
int var_4 = -538884360;
unsigned char var_5 = (unsigned char)98;
short var_6 = (short)-12631;
unsigned long long int var_7 = 9879600979765735718ULL;
unsigned long long int var_8 = 2203187020352209300ULL;
short var_10 = (short)22087;
short var_11 = (short)5822;
int var_12 = 1878320200;
unsigned short var_13 = (unsigned short)9606;
short var_14 = (short)-15525;
unsigned short var_15 = (unsigned short)49084;
int zero = 0;
unsigned long long int var_16 = 4569146329940145847ULL;
short var_17 = (short)21868;
short var_18 = (short)-21155;
unsigned long long int var_19 = 8995843682123151640ULL;
long long int var_20 = -8555351941739775520LL;
unsigned long long int var_21 = 9693392097833910856ULL;
int var_22 = 1597603336;
unsigned short var_23 = (unsigned short)59233;
short var_24 = (short)-31270;
int var_25 = 1722050289;
long long int arr_0 [24] ;
unsigned char arr_1 [24] ;
int arr_2 [24] [24] [24] ;
long long int arr_3 [24] [24] ;
unsigned int arr_4 [24] ;
unsigned long long int arr_6 [24] ;
unsigned char arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -8964429112641676718LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -1103262599;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 8872346384101144937LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 520416882U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 16720257555949356694ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (unsigned char)46;
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
