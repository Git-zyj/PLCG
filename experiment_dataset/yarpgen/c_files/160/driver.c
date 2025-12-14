#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)10964;
unsigned int var_5 = 403398244U;
unsigned char var_6 = (unsigned char)96;
int var_8 = 1458287474;
int var_10 = 870112129;
unsigned short var_12 = (unsigned short)46704;
signed char var_13 = (signed char)-47;
int var_15 = -1080014214;
long long int var_16 = 7022366277772753928LL;
short var_17 = (short)-17830;
int zero = 0;
unsigned char var_20 = (unsigned char)254;
unsigned int var_21 = 3250770719U;
int var_22 = 791973878;
short var_23 = (short)-10014;
int var_24 = 1786662057;
long long int var_25 = -4839233009934166035LL;
short var_26 = (short)-11155;
short var_27 = (short)-11264;
unsigned char var_28 = (unsigned char)115;
int var_29 = 1493900145;
unsigned char var_30 = (unsigned char)37;
signed char arr_1 [19] ;
int arr_3 [22] ;
unsigned char arr_5 [24] ;
unsigned int arr_6 [24] ;
_Bool arr_7 [24] [24] ;
unsigned long long int arr_8 [24] [24] ;
unsigned char arr_10 [24] [24] [24] ;
long long int arr_12 [24] ;
long long int arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)-79;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 453193469;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 3683291121U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = 15971398118589781430ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)85;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = 8977289156533729803LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = -7821116653365048639LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
