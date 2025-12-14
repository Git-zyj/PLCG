#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 5926380U;
short var_3 = (short)-24876;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)25231;
unsigned short var_7 = (unsigned short)12942;
int var_8 = 704924546;
_Bool var_13 = (_Bool)1;
long long int var_14 = 8303003956586892861LL;
int zero = 0;
long long int var_18 = 4582435803451345976LL;
int var_19 = 1960242745;
unsigned short var_20 = (unsigned short)16572;
int var_21 = 1153913220;
unsigned long long int var_22 = 6789365539028909169ULL;
unsigned long long int var_23 = 12258313850644787212ULL;
unsigned char var_24 = (unsigned char)140;
unsigned long long int var_25 = 6267966028703897475ULL;
unsigned long long int var_26 = 3829389013607324947ULL;
signed char var_27 = (signed char)-125;
int var_28 = 1633322191;
unsigned int var_29 = 448855253U;
short var_30 = (short)6416;
unsigned long long int var_31 = 13511394189320437835ULL;
int var_32 = -91675707;
int var_33 = -1178668159;
unsigned short var_34 = (unsigned short)31962;
int var_35 = -1660834267;
int var_36 = 1614034305;
int var_37 = -154449379;
unsigned short var_38 = (unsigned short)21721;
unsigned char var_39 = (unsigned char)40;
unsigned char var_40 = (unsigned char)24;
long long int var_41 = -5023948223493664737LL;
unsigned char var_42 = (unsigned char)148;
unsigned int var_43 = 2318420487U;
unsigned char var_44 = (unsigned char)18;
unsigned int var_45 = 4028015209U;
signed char var_46 = (signed char)-108;
unsigned short var_47 = (unsigned short)49150;
unsigned char var_48 = (unsigned char)34;
unsigned int var_49 = 3631602981U;
long long int var_50 = 5481962934937774801LL;
unsigned char var_51 = (unsigned char)8;
long long int var_52 = -589838192353039598LL;
unsigned char arr_0 [15] ;
unsigned char arr_5 [15] [15] [15] ;
unsigned char arr_6 [15] ;
unsigned char arr_10 [15] [15] [15] [15] [15] ;
unsigned char arr_13 [15] [15] [15] ;
unsigned char arr_15 [18] ;
unsigned char arr_16 [18] ;
signed char arr_18 [18] ;
signed char arr_19 [18] ;
unsigned long long int arr_20 [18] [18] ;
unsigned short arr_21 [18] [18] [18] [18] ;
_Bool arr_22 [18] [18] [18] [18] ;
unsigned short arr_23 [18] [18] ;
unsigned short arr_24 [18] [18] [18] [18] ;
unsigned long long int arr_25 [18] [18] [18] [18] [18] ;
unsigned short arr_32 [18] [18] [18] [18] [18] ;
unsigned short arr_33 [18] [18] [18] [18] [18] ;
unsigned long long int arr_41 [18] [18] [18] ;
unsigned long long int arr_42 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (unsigned char)139 : (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned char)84;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (signed char)23 : (signed char)42;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = (signed char)26;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? 17235226048089778017ULL : 10297306154473796342ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (unsigned short)25294;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_23 [i_0] [i_1] = (unsigned short)32891;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)16177 : (unsigned short)27323;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = 12896017130387378810ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)21894;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)27730;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 8844657368960829169ULL : 5014340783389411997ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 7727925148948533828ULL : 13384225009241947319ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
