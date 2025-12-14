#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 856696408U;
signed char var_1 = (signed char)92;
long long int var_2 = 3970063356923536510LL;
short var_4 = (short)-27781;
long long int var_5 = -5284382082763292360LL;
long long int var_6 = -4454748623854218635LL;
unsigned char var_8 = (unsigned char)253;
unsigned char var_9 = (unsigned char)5;
unsigned char var_10 = (unsigned char)27;
unsigned int var_12 = 3576587850U;
int zero = 0;
int var_14 = 1325804564;
unsigned char var_15 = (unsigned char)100;
unsigned char var_16 = (unsigned char)126;
unsigned char var_17 = (unsigned char)144;
long long int var_18 = -1987845318953493904LL;
int var_19 = -1328933790;
unsigned char var_20 = (unsigned char)106;
short var_21 = (short)31581;
unsigned long long int var_22 = 5966315227757129113ULL;
signed char var_23 = (signed char)-75;
unsigned short var_24 = (unsigned short)26730;
unsigned int var_25 = 1589217384U;
unsigned char var_26 = (unsigned char)25;
short var_27 = (short)29104;
long long int var_28 = 9113190682665283913LL;
unsigned int var_29 = 4129870504U;
_Bool var_30 = (_Bool)1;
unsigned char var_31 = (unsigned char)93;
unsigned short var_32 = (unsigned short)15991;
short var_33 = (short)13656;
unsigned long long int var_34 = 16532273593880467644ULL;
int var_35 = -1434189849;
long long int var_36 = 1683162624658256621LL;
unsigned long long int var_37 = 6132041448039878745ULL;
short var_38 = (short)19094;
long long int var_39 = -1807509533698199414LL;
unsigned char arr_0 [24] [24] ;
signed char arr_2 [24] [24] [24] ;
long long int arr_3 [24] ;
unsigned int arr_4 [24] [24] [24] [24] ;
unsigned short arr_5 [24] [24] [24] [24] ;
unsigned char arr_6 [24] [24] [24] ;
long long int arr_8 [24] [24] [24] ;
unsigned short arr_9 [24] [24] [24] ;
signed char arr_10 [24] [24] [24] ;
int arr_12 [24] [24] ;
unsigned short arr_14 [24] [24] [24] ;
short arr_15 [24] [24] [24] [24] [24] ;
short arr_23 [24] ;
unsigned int arr_11 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)100;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = -6665449142137273522LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 2941703105U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (unsigned short)27227;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 4617933126353268207LL : 7731716624755886957LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned short)50951;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? -883459798 : -798213956;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned short)42233;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (short)11208 : (short)26351;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = (short)16781;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 2359501204U : 957425610U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
