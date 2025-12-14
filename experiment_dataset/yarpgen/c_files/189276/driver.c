#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-56;
unsigned char var_1 = (unsigned char)27;
unsigned int var_2 = 3818527796U;
unsigned int var_3 = 828268494U;
unsigned char var_4 = (unsigned char)193;
unsigned int var_5 = 3345930440U;
unsigned char var_6 = (unsigned char)230;
long long int var_7 = -6563188463923186464LL;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_10 = (signed char)-15;
int var_11 = -1596182183;
short var_12 = (short)-17370;
int var_13 = -212836279;
long long int var_14 = 6198173796922487639LL;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)52286;
signed char var_17 = (signed char)59;
int var_18 = 343108280;
int var_19 = -908347380;
short var_20 = (short)18547;
short var_21 = (short)7327;
long long int var_22 = 6689588095155935612LL;
unsigned short var_23 = (unsigned short)9448;
unsigned int var_24 = 1568325240U;
_Bool var_25 = (_Bool)0;
unsigned char var_26 = (unsigned char)86;
int var_27 = -1023080926;
signed char var_28 = (signed char)-115;
unsigned int var_29 = 899290980U;
int var_30 = 1931125026;
unsigned char var_31 = (unsigned char)106;
unsigned int var_32 = 4081651530U;
int var_33 = 1863255282;
long long int var_34 = 6666621421423153518LL;
unsigned char var_35 = (unsigned char)124;
unsigned int var_36 = 2791256925U;
_Bool var_37 = (_Bool)1;
short arr_3 [16] [16] [16] ;
int arr_5 [16] [16] [16] [16] ;
_Bool arr_8 [16] [16] [16] ;
unsigned long long int arr_10 [16] [16] [16] [16] ;
int arr_14 [17] ;
int arr_15 [17] ;
int arr_17 [23] ;
unsigned char arr_18 [23] [23] ;
long long int arr_20 [23] ;
unsigned char arr_25 [23] [23] [23] [23] ;
unsigned long long int arr_26 [23] ;
int arr_27 [23] ;
signed char arr_28 [23] [23] [23] ;
unsigned int arr_33 [23] [23] [23] [23] ;
unsigned char arr_37 [23] [23] [23] [23] [23] ;
unsigned short arr_39 [23] [23] ;
short arr_50 [12] [12] [12] [12] ;
unsigned short arr_13 [16] [16] [16] [16] [16] ;
unsigned char arr_16 [17] ;
long long int arr_40 [23] ;
long long int arr_54 [12] ;
_Bool arr_55 [12] [12] [12] [12] ;
int arr_56 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-30129 : (short)-4402;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 1525004892;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 1515815961196965909ULL : 8204103717119358075ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = 700345195;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = -432117646;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = -573239660;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned char)183;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_20 [i_0] = -1131332899380121905LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (unsigned char)94;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_26 [i_0] = 16416134953079890919ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_27 [i_0] = 1849313929;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = 2500161700U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_39 [i_0] [i_1] = (unsigned short)33589;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_50 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)-28963 : (short)20120;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned short)54975 : (unsigned short)57534;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_40 [i_0] = -5953181615357279725LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_54 [i_0] = (i_0 % 2 == 0) ? 4889103374669028960LL : -8005786764445015054LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_55 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_56 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -1901357578 : 1944116242;
}

void checksum() {
    hash(&seed, var_10);
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_40 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_54 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_55 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_56 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
