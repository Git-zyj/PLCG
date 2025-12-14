#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)83;
signed char var_1 = (signed char)-41;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)237;
unsigned short var_6 = (unsigned short)27602;
signed char var_7 = (signed char)-37;
unsigned char var_8 = (unsigned char)138;
short var_9 = (short)-10115;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = -6618174924166748903LL;
unsigned long long int var_13 = 14695314405105481425ULL;
unsigned int var_14 = 1927481830U;
unsigned char var_15 = (unsigned char)227;
short var_16 = (short)2906;
unsigned long long int var_17 = 6205390825928133191ULL;
unsigned char var_18 = (unsigned char)162;
unsigned short var_19 = (unsigned short)15826;
_Bool var_20 = (_Bool)0;
short var_21 = (short)24320;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 1070913901U;
unsigned char arr_0 [10] ;
unsigned short arr_1 [10] ;
unsigned char arr_5 [10] [10] [10] ;
signed char arr_7 [10] [10] [10] [10] [10] ;
short arr_8 [10] ;
unsigned int arr_14 [10] [10] [10] [10] ;
unsigned char arr_16 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned char)231;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)49732;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)102;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (short)-2546;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 2490184907U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)186 : (unsigned char)125;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
