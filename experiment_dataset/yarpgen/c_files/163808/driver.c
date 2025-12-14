#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2012645498U;
int var_3 = 355729481;
unsigned int var_4 = 762223897U;
unsigned int var_5 = 616012945U;
unsigned long long int var_6 = 11648350360534715107ULL;
short var_7 = (short)7282;
long long int var_8 = -7084644980150617792LL;
int var_9 = -892974164;
unsigned int var_10 = 1820415515U;
signed char var_11 = (signed char)-126;
long long int var_12 = -672772878316784907LL;
short var_13 = (short)-9525;
int zero = 0;
unsigned short var_14 = (unsigned short)49867;
unsigned int var_15 = 723984585U;
long long int var_16 = -2493883213218949759LL;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)38847;
long long int var_19 = 8024591657144008353LL;
unsigned int var_20 = 640933195U;
int var_21 = 937545191;
unsigned int var_22 = 2732402573U;
unsigned short var_23 = (unsigned short)7162;
int var_24 = -53972926;
int var_25 = 1628946080;
int var_26 = -471126646;
unsigned char var_27 = (unsigned char)87;
unsigned char var_28 = (unsigned char)74;
unsigned int var_29 = 3322725633U;
long long int var_30 = -5099741870729375708LL;
unsigned int var_31 = 2575111164U;
unsigned int var_32 = 2505321386U;
int var_33 = -504892260;
unsigned char var_34 = (unsigned char)252;
signed char var_35 = (signed char)59;
unsigned int var_36 = 3226994981U;
unsigned int var_37 = 248855844U;
unsigned long long int var_38 = 11477206192624267979ULL;
unsigned int var_39 = 4193892471U;
long long int var_40 = -5875666031103090439LL;
long long int var_41 = -5690455380812850969LL;
unsigned long long int var_42 = 2898316671637745574ULL;
int var_43 = 265666965;
unsigned short var_44 = (unsigned short)51625;
unsigned long long int arr_3 [15] ;
long long int arr_4 [25] ;
unsigned short arr_5 [25] ;
unsigned char arr_6 [25] [25] ;
signed char arr_7 [16] [16] ;
unsigned int arr_8 [16] ;
_Bool arr_10 [16] [16] ;
unsigned long long int arr_14 [16] [16] ;
long long int arr_15 [16] [16] ;
int arr_18 [16] ;
unsigned long long int arr_19 [16] [16] [16] [16] ;
unsigned short arr_20 [16] [16] [16] [16] ;
signed char arr_24 [16] [16] [16] ;
int arr_25 [16] [16] ;
unsigned short arr_26 [16] [16] [16] ;
unsigned int arr_34 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 18294323180261590445ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 6116218753409896557LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned short)64754;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)100;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-32;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 1677517192U : 3119918104U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? 8806261813764372116ULL : 16635401772515220776ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? -7088224489404464793LL : 6599168914464246929LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_18 [i_0] = -1219032877;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 14913871297983246155ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)52489 : (unsigned short)34110;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (signed char)10;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_25 [i_0] [i_1] = -2093318061;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (unsigned short)55239;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = 3915816016U;
}

void checksum() {
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
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
