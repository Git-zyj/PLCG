#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)16;
short var_5 = (short)-4906;
int var_9 = -1679034909;
unsigned short var_12 = (unsigned short)21833;
signed char var_13 = (signed char)-99;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)68;
int var_20 = 310411889;
unsigned char var_21 = (unsigned char)80;
unsigned long long int var_22 = 14369882141196898939ULL;
int var_23 = -95276461;
int var_24 = 1191504421;
unsigned short var_25 = (unsigned short)6367;
int var_26 = 937684002;
short var_27 = (short)21572;
unsigned char var_28 = (unsigned char)217;
unsigned long long int var_29 = 15962368781514956326ULL;
unsigned long long int var_30 = 13321921571005610850ULL;
unsigned long long int var_31 = 10085318705071838582ULL;
int var_32 = -1101306675;
_Bool arr_0 [23] ;
_Bool arr_1 [23] ;
_Bool arr_6 [23] ;
int arr_7 [23] [23] [23] ;
_Bool arr_10 [23] [23] ;
int arr_13 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 527418135 : -1966600345;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = -2088237845;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
