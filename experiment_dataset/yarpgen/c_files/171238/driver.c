#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 764140332;
short var_6 = (short)-30801;
short var_8 = (short)-21046;
int zero = 0;
long long int var_10 = 3576181364337985863LL;
long long int var_11 = -7389141315669565252LL;
short var_12 = (short)31674;
unsigned short var_13 = (unsigned short)10634;
unsigned short var_14 = (unsigned short)34649;
short var_15 = (short)8431;
short var_16 = (short)997;
unsigned short var_17 = (unsigned short)35425;
unsigned short var_18 = (unsigned short)9677;
unsigned short arr_1 [20] ;
unsigned char arr_2 [20] ;
_Bool arr_3 [20] [20] [20] ;
long long int arr_4 [20] ;
int arr_5 [22] ;
signed char arr_6 [22] ;
unsigned long long int arr_7 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)18477;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = -9198373313840257840LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = -606439766;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)38 : (signed char)-18;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 12161485361593722943ULL : 702473378543892351ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
