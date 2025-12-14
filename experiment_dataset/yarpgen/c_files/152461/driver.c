#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-10;
unsigned short var_1 = (unsigned short)6765;
unsigned int var_2 = 4050392208U;
long long int var_3 = 4563791814433470205LL;
signed char var_4 = (signed char)28;
short var_6 = (short)16277;
int var_9 = -391443977;
signed char var_11 = (signed char)-24;
short var_12 = (short)3315;
short var_14 = (short)-18066;
int zero = 0;
signed char var_15 = (signed char)36;
long long int var_16 = -3625845583200438044LL;
int var_17 = -492656853;
unsigned long long int var_18 = 6880801888627207173ULL;
long long int var_19 = -4387554042467612430LL;
int var_20 = -41773737;
int var_21 = 1478520424;
int var_22 = 1989338808;
signed char var_23 = (signed char)111;
short var_24 = (short)12300;
unsigned long long int var_25 = 3443623084314589681ULL;
unsigned long long int var_26 = 14285853592408665698ULL;
unsigned char var_27 = (unsigned char)149;
short var_28 = (short)21412;
unsigned int var_29 = 516133529U;
signed char var_30 = (signed char)-58;
unsigned short arr_0 [15] ;
unsigned char arr_4 [15] [15] [15] ;
signed char arr_5 [15] [15] [15] [15] ;
short arr_7 [15] [15] [15] ;
unsigned long long int arr_8 [15] [15] [15] [15] [15] ;
short arr_16 [23] ;
signed char arr_14 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)3365;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)188;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)19 : (signed char)2;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)8664;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = 814077961792846176ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = (short)2919;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)91 : (signed char)-58;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
