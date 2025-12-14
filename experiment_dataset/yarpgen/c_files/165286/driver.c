#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -235097706;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-23933;
int var_5 = 1964136611;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 3857992363U;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
int var_10 = 166091382;
short var_11 = (short)27786;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)248;
unsigned char var_16 = (unsigned char)200;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)13;
int zero = 0;
unsigned long long int var_20 = 11998797975959003401ULL;
unsigned int var_21 = 541909553U;
_Bool var_22 = (_Bool)1;
short var_23 = (short)10720;
_Bool var_24 = (_Bool)1;
unsigned int var_25 = 3748381124U;
short var_26 = (short)24351;
signed char var_27 = (signed char)101;
_Bool var_28 = (_Bool)0;
int var_29 = 903423381;
unsigned int var_30 = 1236250780U;
unsigned long long int var_31 = 2094815338790616253ULL;
unsigned char var_32 = (unsigned char)213;
unsigned long long int var_33 = 379730032714981481ULL;
unsigned char var_34 = (unsigned char)14;
int var_35 = 1168618864;
unsigned char var_36 = (unsigned char)244;
unsigned long long int var_37 = 11154160132471053595ULL;
unsigned char var_38 = (unsigned char)18;
_Bool var_39 = (_Bool)1;
unsigned int var_40 = 1513982400U;
int var_41 = -84718485;
unsigned int var_42 = 2218409929U;
_Bool var_43 = (_Bool)1;
unsigned int var_44 = 32499551U;
unsigned char var_45 = (unsigned char)138;
unsigned long long int var_46 = 16877174813727187110ULL;
short var_47 = (short)17163;
int var_48 = 1034697536;
_Bool var_49 = (_Bool)0;
_Bool var_50 = (_Bool)1;
unsigned long long int var_51 = 15659211763959049870ULL;
unsigned int var_52 = 3567097295U;
short var_53 = (short)1196;
short var_54 = (short)-4030;
unsigned int var_55 = 2907237210U;
_Bool var_56 = (_Bool)0;
unsigned long long int var_57 = 16818589049199183913ULL;
unsigned int var_58 = 3464896884U;
signed char var_59 = (signed char)-58;
_Bool var_60 = (_Bool)1;
_Bool var_61 = (_Bool)0;
int var_62 = 952206296;
unsigned char var_63 = (unsigned char)245;
unsigned long long int var_64 = 12635265182989753475ULL;
_Bool var_65 = (_Bool)1;
_Bool var_66 = (_Bool)1;
int var_67 = -668370232;
unsigned long long int var_68 = 7579751873379713504ULL;
unsigned int var_69 = 3586403264U;
_Bool var_70 = (_Bool)0;
_Bool var_71 = (_Bool)1;
unsigned long long int var_72 = 15803559079386861425ULL;
int var_73 = -1340860598;
unsigned char arr_0 [11] [11] ;
unsigned long long int arr_1 [11] ;
unsigned long long int arr_2 [11] ;
short arr_4 [11] [11] [11] ;
unsigned long long int arr_7 [11] [11] ;
unsigned char arr_9 [11] [11] [11] [11] [11] [11] ;
_Bool arr_14 [11] [11] [11] ;
unsigned long long int arr_15 [11] [11] ;
unsigned long long int arr_18 [11] ;
unsigned char arr_20 [11] ;
signed char arr_30 [11] [11] [11] ;
_Bool arr_32 [11] [11] [11] [11] [11] [11] ;
int arr_34 [11] [11] [11] [11] [11] [11] ;
unsigned int arr_40 [11] [11] [11] [11] ;
unsigned int arr_41 [11] [11] [11] ;
signed char arr_56 [11] [11] [11] [11] [11] [11] ;
_Bool arr_68 [16] [16] ;
_Bool arr_70 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)159;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 4902569001289317121ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 2566322987037690592ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)25317;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = 17466902491918637716ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_15 [i_0] [i_1] = 7796750845930718636ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_18 [i_0] = 13462148853945082733ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_20 [i_0] = (unsigned char)85;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-62 : (signed char)97;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 1946471255 : -146878605;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 806562621U : 734470029U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = 1425502646U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_56 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)117;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_68 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_70 [i_0] = (_Bool)0;
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
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
    hash(&seed, var_64);
    hash(&seed, var_65);
    hash(&seed, var_66);
    hash(&seed, var_67);
    hash(&seed, var_68);
    hash(&seed, var_69);
    hash(&seed, var_70);
    hash(&seed, var_71);
    hash(&seed, var_72);
    hash(&seed, var_73);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
