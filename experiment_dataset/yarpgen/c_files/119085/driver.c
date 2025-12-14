#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -1701685443;
signed char var_3 = (signed char)70;
int var_4 = 1380987129;
unsigned short var_5 = (unsigned short)36620;
unsigned long long int var_6 = 12284403133204524538ULL;
long long int var_7 = -1071776515422704833LL;
long long int var_8 = 3370726743903617105LL;
unsigned short var_9 = (unsigned short)63979;
int var_10 = -1008073830;
signed char var_11 = (signed char)-25;
int var_12 = -207724514;
short var_13 = (short)32062;
long long int var_14 = -1859313665531093384LL;
int zero = 0;
unsigned short var_16 = (unsigned short)22301;
unsigned short var_17 = (unsigned short)56724;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-4789;
signed char var_20 = (signed char)100;
long long int var_21 = -7061533976199087955LL;
short var_22 = (short)9510;
short var_23 = (short)5906;
unsigned short var_24 = (unsigned short)5178;
int var_25 = 397731865;
unsigned char var_26 = (unsigned char)206;
unsigned char var_27 = (unsigned char)237;
short var_28 = (short)6595;
int var_29 = 1924119016;
short var_30 = (short)14050;
unsigned int var_31 = 515393207U;
unsigned char var_32 = (unsigned char)40;
long long int var_33 = -6327089111701364963LL;
int var_34 = -1073704777;
unsigned int var_35 = 3414160194U;
unsigned short var_36 = (unsigned short)11403;
unsigned char var_37 = (unsigned char)39;
unsigned int var_38 = 1472287410U;
unsigned long long int var_39 = 17867085507751469135ULL;
signed char var_40 = (signed char)-73;
long long int var_41 = 8358957272268166024LL;
unsigned int var_42 = 1320738622U;
signed char var_43 = (signed char)103;
unsigned int arr_0 [17] [17] ;
long long int arr_1 [17] ;
long long int arr_4 [17] [17] ;
unsigned short arr_5 [17] ;
unsigned char arr_7 [17] [17] [17] [17] ;
signed char arr_11 [20] ;
unsigned char arr_12 [20] ;
signed char arr_13 [20] [20] ;
short arr_14 [20] [20] ;
_Bool arr_15 [20] ;
unsigned long long int arr_16 [20] [20] [20] ;
long long int arr_17 [20] [20] [20] [20] [20] ;
long long int arr_19 [14] ;
long long int arr_26 [14] [14] [14] [14] ;
unsigned long long int arr_27 [14] [14] [14] [14] [14] ;
long long int arr_30 [14] [14] [14] [14] [14] [14] [14] ;
unsigned short arr_37 [14] [14] [14] ;
long long int arr_8 [17] [17] ;
unsigned int arr_9 [17] ;
short arr_31 [14] [14] ;
signed char arr_40 [14] ;
_Bool arr_41 [14] [14] ;
_Bool arr_42 [14] ;
unsigned short arr_43 [14] ;
unsigned short arr_48 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 1036495638U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 440448455360928307LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = -2788533720391135472LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (unsigned short)43119;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (signed char)61;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (unsigned char)105;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)-48;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_14 [i_0] [i_1] = (short)-9338;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 8439940228272041318ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = 4755588669394493399LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_19 [i_0] = 7874358866050573441LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 5973021992428621816LL : 5554214550918983418LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = 13289280533152669175ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -7619646838095042668LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (unsigned short)48491;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = -4422380026485879366LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = 1140156220U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_31 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-11154 : (short)15321;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_40 [i_0] = (signed char)68;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_41 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_42 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_43 [i_0] = (unsigned short)8336;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_48 [i_0] [i_1] = (unsigned short)6277;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_40 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_41 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_42 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_43 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_48 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
