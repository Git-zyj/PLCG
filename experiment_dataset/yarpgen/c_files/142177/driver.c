#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13726355421590337333ULL;
signed char var_1 = (signed char)-123;
signed char var_2 = (signed char)91;
long long int var_3 = 3698824604260952806LL;
signed char var_5 = (signed char)54;
long long int var_6 = -6053843746187630840LL;
signed char var_7 = (signed char)24;
signed char var_8 = (signed char)105;
unsigned char var_9 = (unsigned char)204;
signed char var_10 = (signed char)-10;
signed char var_11 = (signed char)104;
_Bool var_12 = (_Bool)1;
signed char var_14 = (signed char)8;
short var_16 = (short)29814;
int zero = 0;
unsigned long long int var_18 = 14284636668108418082ULL;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)58;
short var_21 = (short)-7606;
short var_22 = (short)24655;
_Bool var_23 = (_Bool)0;
unsigned int var_24 = 1096537840U;
unsigned long long int var_25 = 16957036121040558729ULL;
short var_26 = (short)31211;
unsigned char var_27 = (unsigned char)135;
unsigned short arr_1 [25] ;
short arr_2 [25] ;
unsigned char arr_4 [25] ;
long long int arr_5 [25] [25] [25] ;
_Bool arr_9 [25] [25] [25] [25] ;
short arr_13 [25] [25] [25] [25] [25] ;
int arr_16 [25] [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned short)32077;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)-20764;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -5843217200909528089LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)13071;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? -741166854 : 40169774;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
