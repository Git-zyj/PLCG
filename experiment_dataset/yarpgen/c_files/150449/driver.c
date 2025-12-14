#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2097644256;
unsigned int var_1 = 3970544882U;
unsigned short var_2 = (unsigned short)13554;
long long int var_3 = 3961935542546696861LL;
int var_4 = -510142811;
short var_5 = (short)14726;
int var_6 = -1775587076;
long long int var_7 = 357673946021111462LL;
long long int var_8 = -2378711617705167837LL;
_Bool var_9 = (_Bool)1;
short var_10 = (short)18658;
long long int var_11 = 5633277547207851778LL;
unsigned int var_12 = 2082252780U;
unsigned char var_13 = (unsigned char)166;
short var_14 = (short)-15902;
int var_15 = 1957106494;
unsigned int var_16 = 437542953U;
int zero = 0;
unsigned short var_17 = (unsigned short)1113;
short var_18 = (short)-7522;
long long int var_19 = -657746359382785782LL;
int var_20 = 400731504;
unsigned char var_21 = (unsigned char)159;
signed char var_22 = (signed char)-71;
long long int var_23 = -2344550472818239959LL;
unsigned short var_24 = (unsigned short)64401;
signed char var_25 = (signed char)-17;
signed char var_26 = (signed char)-82;
short var_27 = (short)-6150;
unsigned short var_28 = (unsigned short)11118;
unsigned long long int var_29 = 18189288841672418137ULL;
unsigned int var_30 = 3667881945U;
unsigned char var_31 = (unsigned char)103;
int var_32 = 1824619296;
unsigned int var_33 = 3631617717U;
signed char var_34 = (signed char)39;
_Bool var_35 = (_Bool)1;
short var_36 = (short)-3836;
unsigned int var_37 = 510135008U;
long long int var_38 = 5818804628990661350LL;
int var_39 = 688182316;
unsigned int var_40 = 1299204888U;
unsigned int var_41 = 2214748734U;
short arr_8 [15] ;
unsigned int arr_14 [15] [15] [15] [15] [15] ;
unsigned int arr_21 [15] [15] ;
unsigned long long int arr_22 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)27670 : (short)-27339;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 3782430591U : 3769869019U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? 680652577U : 3431834593U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 18398775927526009435ULL : 15473705858855210978ULL;
}

void checksum() {
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
