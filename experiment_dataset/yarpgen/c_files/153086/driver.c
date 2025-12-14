#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4705360422389448924LL;
unsigned long long int var_3 = 370924354354279991ULL;
unsigned char var_5 = (unsigned char)148;
int var_6 = 1058126706;
short var_9 = (short)3914;
unsigned long long int var_12 = 615598389610310662ULL;
unsigned char var_13 = (unsigned char)19;
unsigned int var_14 = 3022359094U;
unsigned int var_17 = 460604749U;
int zero = 0;
long long int var_18 = 6032093612751271104LL;
long long int var_19 = -4971615130359671489LL;
unsigned char var_20 = (unsigned char)255;
int var_21 = -463490956;
long long int var_22 = -6291524875981476051LL;
unsigned char var_23 = (unsigned char)75;
unsigned long long int var_24 = 895443811049356530ULL;
long long int var_25 = -4443787219672283728LL;
unsigned char var_26 = (unsigned char)208;
signed char var_27 = (signed char)-94;
long long int var_28 = 5809515997921695769LL;
unsigned char arr_0 [17] ;
unsigned int arr_1 [17] [17] ;
unsigned long long int arr_3 [17] [17] ;
unsigned int arr_4 [17] ;
unsigned int arr_5 [17] [17] [17] ;
unsigned long long int arr_6 [17] ;
unsigned int arr_2 [17] ;
unsigned short arr_7 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned char)205;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 662168664U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 6720904653550664700ULL : 12722330021553389175ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 1153024614U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 98845165U : 3669095795U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 14381165776107840008ULL : 1744097604119041892ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 3338765356U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)24463 : (unsigned short)5863;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
