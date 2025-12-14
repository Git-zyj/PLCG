#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
short var_3 = (short)-29848;
long long int var_6 = 7880609799261704702LL;
unsigned short var_10 = (unsigned short)22645;
signed char var_11 = (signed char)-61;
unsigned long long int var_14 = 4440183443963633787ULL;
unsigned char var_15 = (unsigned char)106;
unsigned long long int var_17 = 7683227829562439868ULL;
int zero = 0;
unsigned long long int var_20 = 260646621364827255ULL;
_Bool var_21 = (_Bool)0;
int var_22 = -698584332;
unsigned char var_23 = (unsigned char)83;
unsigned char var_24 = (unsigned char)38;
long long int var_25 = 3975043773589281800LL;
unsigned int var_26 = 425280190U;
int var_27 = -1160678165;
short var_28 = (short)7064;
_Bool arr_2 [25] ;
unsigned long long int arr_3 [25] [25] [25] ;
unsigned char arr_4 [25] ;
unsigned long long int arr_7 [25] ;
unsigned int arr_8 [25] [25] [25] [25] ;
unsigned int arr_9 [25] [25] [25] [25] [25] ;
int arr_11 [13] ;
_Bool arr_18 [13] [13] [13] [13] ;
int arr_19 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 5604490990094131583ULL : 325106246751587721ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)57 : (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 8454445513493057221ULL : 12985351757569073695ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 968691119U : 3601738362U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = 2396012554U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = -662995660;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 1835151003 : 612727497;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
