#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 14030364313281857201ULL;
long long int var_2 = -8506142458308300169LL;
unsigned long long int var_3 = 13350643696864846003ULL;
signed char var_4 = (signed char)-6;
long long int var_5 = 7156371057341419746LL;
signed char var_6 = (signed char)46;
long long int var_7 = 656370624190306990LL;
unsigned short var_8 = (unsigned short)12996;
long long int var_9 = -5604359184950587499LL;
signed char var_10 = (signed char)37;
unsigned int var_11 = 2891197417U;
unsigned int var_13 = 761345429U;
unsigned char var_14 = (unsigned char)196;
short var_15 = (short)22020;
int zero = 0;
int var_16 = 1534175889;
long long int var_17 = -367775397543133399LL;
long long int var_18 = -365175337270502724LL;
unsigned short var_19 = (unsigned short)19148;
unsigned long long int var_20 = 9802600481093131587ULL;
unsigned int var_21 = 3089356185U;
signed char var_22 = (signed char)-98;
unsigned char var_23 = (unsigned char)156;
unsigned int var_24 = 237611552U;
unsigned long long int var_25 = 3725749621565304883ULL;
unsigned int var_26 = 3700134426U;
unsigned char var_27 = (unsigned char)237;
int var_28 = 2043108303;
unsigned short var_29 = (unsigned short)64326;
unsigned int var_30 = 270534443U;
signed char var_31 = (signed char)-115;
unsigned short arr_0 [15] [15] ;
short arr_1 [15] [15] ;
int arr_2 [14] [14] ;
unsigned int arr_3 [14] ;
unsigned int arr_4 [14] [14] ;
unsigned long long int arr_5 [14] ;
unsigned long long int arr_7 [14] [14] ;
_Bool arr_9 [14] [14] ;
int arr_12 [14] [14] ;
unsigned int arr_15 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)14387;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-24838 : (short)5671;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = -1065412786;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 3310579602U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 28405243U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 765665116870507396ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 18144927945197687547ULL : 15267073632557620208ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? -1737679742 : -1895443101;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_15 [i_0] [i_1] = 1777492368U;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
