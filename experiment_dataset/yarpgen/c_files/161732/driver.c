#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 944147095U;
short var_8 = (short)6825;
short var_9 = (short)14001;
short var_10 = (short)25692;
int var_11 = -1215157787;
int var_13 = -1041308097;
long long int var_15 = 7512014556495565806LL;
short var_17 = (short)9966;
unsigned int var_18 = 2473510727U;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)65;
unsigned int var_21 = 578288546U;
short var_22 = (short)-7947;
signed char var_23 = (signed char)94;
unsigned char var_24 = (unsigned char)94;
unsigned short var_25 = (unsigned short)31467;
signed char var_26 = (signed char)111;
long long int var_27 = 2613354661296677925LL;
short var_28 = (short)19610;
unsigned int var_29 = 782895292U;
unsigned char var_30 = (unsigned char)84;
int var_31 = -1117792521;
short var_32 = (short)19688;
unsigned long long int var_33 = 8324285171525455034ULL;
_Bool var_34 = (_Bool)1;
long long int var_35 = 7804148376435936333LL;
unsigned long long int var_36 = 14572109378143261701ULL;
unsigned char var_37 = (unsigned char)185;
unsigned char var_38 = (unsigned char)146;
long long int var_39 = -6831682452994704782LL;
long long int var_40 = 4177675211411140953LL;
signed char var_41 = (signed char)112;
long long int var_42 = 3539489372729621551LL;
unsigned char var_43 = (unsigned char)117;
unsigned char var_44 = (unsigned char)58;
unsigned long long int var_45 = 14590610125510435077ULL;
_Bool var_46 = (_Bool)0;
_Bool var_47 = (_Bool)0;
unsigned int arr_0 [25] ;
int arr_1 [25] [25] ;
unsigned short arr_2 [18] ;
int arr_3 [18] ;
long long int arr_4 [18] [18] [18] ;
unsigned long long int arr_6 [18] [18] [18] ;
long long int arr_8 [18] [18] ;
unsigned int arr_9 [18] ;
unsigned long long int arr_10 [18] ;
unsigned char arr_12 [18] [18] ;
unsigned long long int arr_18 [15] [15] [15] [15] ;
int arr_19 [15] ;
short arr_20 [15] [15] ;
long long int arr_23 [15] [15] [15] [15] [15] [15] ;
unsigned long long int arr_29 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2891502906U : 1900035607U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 229612466;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)40971;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 320704400;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 6096280958282697937LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 11588614274610042416ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = -1065777064278082000LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 169823126U : 3530466558U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 12939671269792603743ULL : 6980635618384105319ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)232 : (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 11563646023497943657ULL : 11726424679246476608ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_19 [i_0] = 464947605;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-31015 : (short)-514;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -3103913619725584530LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_29 [i_0] = 15936327475605426158ULL;
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
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
