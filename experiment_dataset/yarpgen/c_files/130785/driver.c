#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)86;
unsigned char var_3 = (unsigned char)106;
unsigned short var_4 = (unsigned short)5051;
unsigned int var_5 = 2839443887U;
unsigned char var_6 = (unsigned char)37;
int var_8 = -1269996437;
unsigned long long int var_9 = 2832797411283939862ULL;
unsigned int var_10 = 4275467355U;
unsigned long long int var_14 = 7500946213644814509ULL;
int zero = 0;
int var_16 = 240553073;
short var_17 = (short)-29802;
int var_18 = -980445066;
unsigned int var_19 = 3392526762U;
unsigned short var_20 = (unsigned short)53908;
signed char var_21 = (signed char)-11;
int var_22 = -2063372723;
unsigned long long int var_23 = 6940023603343717748ULL;
unsigned char var_24 = (unsigned char)238;
unsigned char var_25 = (unsigned char)2;
unsigned long long int var_26 = 15082018539098150604ULL;
long long int arr_0 [20] ;
signed char arr_1 [20] [20] ;
unsigned short arr_2 [20] ;
unsigned char arr_3 [20] [20] ;
short arr_4 [20] ;
signed char arr_5 [20] [20] ;
unsigned char arr_6 [20] [20] [20] ;
int arr_7 [20] [20] [20] [20] ;
unsigned short arr_10 [20] ;
unsigned long long int arr_11 [20] [20] [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 4898286306853751117LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-38;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned short)21106;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (short)19442;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-51;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = -295157278;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (unsigned short)13066;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 4268987530227812549ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
