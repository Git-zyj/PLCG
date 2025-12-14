#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58464;
unsigned short var_1 = (unsigned short)56536;
unsigned short var_2 = (unsigned short)7709;
signed char var_3 = (signed char)-84;
int var_4 = -95379434;
int var_5 = 593320418;
int var_6 = 276163183;
unsigned char var_7 = (unsigned char)121;
signed char var_9 = (signed char)-106;
long long int var_11 = -7069900661219457152LL;
long long int var_12 = 844529213933466047LL;
long long int var_13 = -8362689691084597273LL;
long long int var_14 = 6512415381893840144LL;
int zero = 0;
unsigned long long int var_15 = 7217980514241467392ULL;
short var_16 = (short)30834;
unsigned char var_17 = (unsigned char)136;
unsigned char var_18 = (unsigned char)219;
_Bool var_19 = (_Bool)1;
long long int var_20 = -6045818786030143602LL;
unsigned long long int var_21 = 18214267239254979779ULL;
unsigned short var_22 = (unsigned short)27538;
long long int var_23 = -437394958909428592LL;
int var_24 = 53928050;
_Bool var_25 = (_Bool)0;
unsigned int var_26 = 3611605077U;
unsigned short var_27 = (unsigned short)51038;
unsigned int var_28 = 2238783392U;
int var_29 = 2142085281;
int var_30 = 289032110;
long long int var_31 = -2586451822725477622LL;
unsigned long long int var_32 = 13708764924445886450ULL;
signed char var_33 = (signed char)-6;
unsigned int var_34 = 4161640733U;
unsigned char var_35 = (unsigned char)92;
short var_36 = (short)14169;
_Bool var_37 = (_Bool)1;
int arr_0 [24] [24] ;
unsigned long long int arr_1 [24] ;
short arr_2 [24] [24] ;
signed char arr_4 [23] ;
short arr_5 [23] [23] ;
unsigned long long int arr_6 [23] [23] ;
_Bool arr_13 [23] [23] [23] [23] ;
unsigned long long int arr_24 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = -144524194;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 10561870379795909021ULL : 924078810396437460ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)11279 : (short)4585;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (signed char)100;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (short)19242;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 16745749208230027343ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_24 [i_0] [i_1] = 14605766532614880071ULL;
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
