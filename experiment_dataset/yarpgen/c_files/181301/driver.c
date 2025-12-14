#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3583170450U;
unsigned int var_7 = 2632851270U;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned int var_11 = 1151126426U;
unsigned int var_12 = 3995856493U;
long long int var_13 = -8613151062441316361LL;
unsigned char var_14 = (unsigned char)225;
unsigned int var_15 = 1913894688U;
unsigned long long int var_16 = 1438144019022371011ULL;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)62045;
signed char var_19 = (signed char)81;
unsigned short var_20 = (unsigned short)25216;
int var_21 = 1449377247;
int var_22 = 534799741;
signed char var_23 = (signed char)64;
short var_24 = (short)-24306;
unsigned short var_25 = (unsigned short)5698;
unsigned int var_26 = 1435456066U;
int var_27 = 171437443;
long long int var_28 = 5642109050581729226LL;
long long int var_29 = 2430057891613783620LL;
unsigned int var_30 = 448078366U;
unsigned long long int var_31 = 5412094523869206301ULL;
unsigned long long int var_32 = 12119456418610131195ULL;
unsigned short var_33 = (unsigned short)56253;
unsigned short var_34 = (unsigned short)22590;
long long int var_35 = 6526596535587526179LL;
unsigned long long int var_36 = 14462759075663111538ULL;
int var_37 = 615509243;
long long int var_38 = -7349784092180783670LL;
unsigned int arr_0 [18] ;
unsigned int arr_1 [18] ;
signed char arr_2 [18] ;
int arr_3 [18] [18] [18] ;
unsigned short arr_4 [18] ;
signed char arr_5 [15] ;
unsigned short arr_6 [15] [15] ;
unsigned short arr_9 [15] ;
signed char arr_10 [15] [15] [15] ;
signed char arr_11 [15] ;
unsigned short arr_15 [15] [15] [15] [15] ;
unsigned char arr_17 [15] [15] [15] [15] [15] [15] ;
_Bool arr_20 [15] [15] [15] [15] [15] [15] [15] ;
unsigned long long int arr_21 [15] [15] ;
_Bool arr_26 [15] [15] [15] [15] [15] ;
unsigned int arr_36 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 3943914720U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 3536451868U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (signed char)80;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -1523861788;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned short)49772;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (signed char)100;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)27809;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (unsigned short)63540;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)-15;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (signed char)-118 : (signed char)20;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (unsigned short)3108;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (unsigned char)210 : (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_21 [i_0] [i_1] = 14511129304443501339ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_36 [i_0] = 3125597822U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
