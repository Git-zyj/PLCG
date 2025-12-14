#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-39;
short var_1 = (short)16428;
unsigned short var_2 = (unsigned short)4883;
unsigned int var_3 = 2938074077U;
int var_5 = -1381035389;
unsigned char var_6 = (unsigned char)219;
short var_7 = (short)-25375;
unsigned short var_8 = (unsigned short)10484;
long long int var_10 = -3223656791142059780LL;
unsigned long long int var_12 = 12403666758743423796ULL;
signed char var_13 = (signed char)-48;
short var_15 = (short)-6565;
int zero = 0;
long long int var_17 = -4302358490713829722LL;
unsigned long long int var_18 = 16819913119467342466ULL;
long long int var_19 = 8750250654173213360LL;
short var_20 = (short)-14481;
unsigned char var_21 = (unsigned char)202;
unsigned short var_22 = (unsigned short)10517;
short var_23 = (short)-17404;
short var_24 = (short)-17698;
int var_25 = 1757971248;
unsigned short var_26 = (unsigned short)47966;
short var_27 = (short)15096;
short var_28 = (short)-12380;
signed char var_29 = (signed char)49;
short var_30 = (short)-28763;
short var_31 = (short)-20973;
unsigned int var_32 = 3687872291U;
short var_33 = (short)10027;
long long int var_34 = -7221817994050769361LL;
unsigned short var_35 = (unsigned short)8762;
short var_36 = (short)24202;
signed char var_37 = (signed char)-30;
signed char arr_2 [20] ;
int arr_3 [20] [20] ;
unsigned long long int arr_6 [20] [20] ;
unsigned char arr_7 [20] ;
unsigned long long int arr_11 [20] [20] [20] [20] ;
unsigned long long int arr_13 [20] [20] [20] [20] [20] ;
unsigned short arr_15 [20] [20] [20] ;
unsigned short arr_16 [20] [20] [20] [20] [20] [20] [20] ;
signed char arr_22 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)73;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 1392422225;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = 11533261914390695169ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (unsigned char)50;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 13856491219565912918ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = 4256901100984325267ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (unsigned short)56161;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 20; ++i_6) 
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)12499;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_22 [i_0] [i_1] = (signed char)112;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
