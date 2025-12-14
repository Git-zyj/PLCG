#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2002155112;
unsigned char var_3 = (unsigned char)65;
unsigned char var_4 = (unsigned char)24;
unsigned char var_5 = (unsigned char)142;
unsigned short var_6 = (unsigned short)33325;
unsigned char var_10 = (unsigned char)232;
unsigned char var_12 = (unsigned char)100;
unsigned short var_13 = (unsigned short)33513;
signed char var_14 = (signed char)-117;
int var_15 = -604134469;
unsigned short var_16 = (unsigned short)24861;
unsigned long long int var_18 = 16057392725198270980ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)238;
short var_20 = (short)13001;
signed char var_21 = (signed char)-1;
short var_22 = (short)15711;
signed char var_23 = (signed char)-68;
signed char var_24 = (signed char)116;
long long int var_25 = 5102546964998429985LL;
unsigned long long int var_26 = 18152643309768325746ULL;
unsigned char var_27 = (unsigned char)220;
unsigned long long int arr_0 [25] [25] ;
unsigned short arr_2 [25] ;
signed char arr_6 [25] [25] ;
unsigned int arr_12 [25] [25] [25] [25] ;
short arr_16 [25] ;
int arr_4 [25] ;
unsigned char arr_14 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 6854702359793699375ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)18866;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)16;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 1247951039U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = (short)32552;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = -878294455;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)10 : (unsigned char)59;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
