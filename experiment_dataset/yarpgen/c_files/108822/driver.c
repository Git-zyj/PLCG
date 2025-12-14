#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2355276569U;
unsigned char var_1 = (unsigned char)3;
int var_3 = -1291533730;
signed char var_4 = (signed char)66;
unsigned int var_5 = 3394180987U;
_Bool var_6 = (_Bool)0;
long long int var_7 = -2465529941915623526LL;
unsigned short var_8 = (unsigned short)37006;
unsigned short var_9 = (unsigned short)14028;
int var_10 = 248502507;
unsigned char var_12 = (unsigned char)47;
long long int var_13 = -7392834805990416471LL;
long long int var_14 = -5556641134070102075LL;
signed char var_15 = (signed char)120;
unsigned short var_16 = (unsigned short)12441;
signed char var_18 = (signed char)22;
int zero = 0;
signed char var_19 = (signed char)-117;
short var_20 = (short)3643;
unsigned char var_21 = (unsigned char)164;
unsigned short var_22 = (unsigned short)12611;
unsigned int var_23 = 4149924035U;
unsigned int var_24 = 327545110U;
unsigned char var_25 = (unsigned char)25;
short var_26 = (short)9824;
long long int var_27 = -1919460579402393153LL;
unsigned int var_28 = 1275222738U;
unsigned char var_29 = (unsigned char)238;
unsigned short var_30 = (unsigned short)60373;
int var_31 = -1921438377;
unsigned short var_32 = (unsigned short)54380;
unsigned short var_33 = (unsigned short)21443;
unsigned int var_34 = 2565612317U;
unsigned int arr_0 [16] ;
unsigned char arr_2 [16] [16] [16] ;
long long int arr_3 [16] ;
long long int arr_4 [16] [16] [16] ;
long long int arr_6 [16] [16] [16] [16] ;
signed char arr_9 [16] [16] ;
_Bool arr_11 [16] [16] ;
_Bool arr_12 [16] ;
unsigned char arr_17 [12] ;
long long int arr_18 [12] ;
_Bool arr_21 [12] ;
int arr_7 [16] [16] [16] ;
signed char arr_13 [16] ;
short arr_14 [16] ;
unsigned int arr_19 [12] [12] ;
long long int arr_22 [12] ;
unsigned long long int arr_26 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 3248369389U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -2771913938180981671LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 3902220437665712800LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 2333473664209941365LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)-48;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = (unsigned char)252;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_18 [i_0] = 576676941663349021LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 438621055;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (signed char)44;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (short)30718;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_19 [i_0] [i_1] = 545567243U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 7064052777854108594LL : 1712746945063195203LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_26 [i_0] = 2845043331796510375ULL;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
