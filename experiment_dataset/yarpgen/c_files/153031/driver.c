#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1844137055;
unsigned short var_2 = (unsigned short)1830;
int var_4 = -438017724;
unsigned short var_5 = (unsigned short)20197;
int var_6 = -1201507272;
int var_7 = -1299454321;
short var_8 = (short)10590;
unsigned short var_10 = (unsigned short)20834;
unsigned short var_11 = (unsigned short)57472;
unsigned short var_12 = (unsigned short)5935;
unsigned short var_13 = (unsigned short)45141;
unsigned char var_15 = (unsigned char)45;
int zero = 0;
unsigned short var_18 = (unsigned short)62242;
unsigned int var_19 = 1437810559U;
unsigned long long int var_20 = 3288499367050951036ULL;
long long int var_21 = -7820475319822316105LL;
unsigned long long int var_22 = 10753307931046869023ULL;
unsigned char arr_1 [20] [20] ;
unsigned short arr_4 [21] [21] ;
unsigned long long int arr_5 [21] [21] ;
unsigned int arr_3 [20] ;
unsigned char arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)170;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)58995;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 1974496476673642010ULL : 9954616606028066672ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 570122501U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)93 : (unsigned char)169;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
