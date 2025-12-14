#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8944543798981629958LL;
long long int var_1 = 4063171172744380230LL;
unsigned short var_2 = (unsigned short)40291;
long long int var_3 = -3180971509522847130LL;
int var_4 = -1873487044;
short var_5 = (short)31962;
short var_6 = (short)1576;
short var_7 = (short)-28315;
long long int var_8 = -9091340811933395385LL;
signed char var_9 = (signed char)111;
int zero = 0;
signed char var_10 = (signed char)76;
int var_11 = 2008192678;
long long int var_12 = 8422217050654330305LL;
int var_13 = -962850096;
long long int var_14 = -846005707824183631LL;
short var_15 = (short)-24561;
unsigned long long int var_16 = 18005657693181903662ULL;
long long int var_17 = -2780831856816838033LL;
unsigned long long int var_18 = 11912514010972224292ULL;
long long int var_19 = -5680683490542844827LL;
unsigned short var_20 = (unsigned short)62824;
_Bool var_21 = (_Bool)0;
long long int var_22 = 7061088768627831474LL;
unsigned long long int var_23 = 17707867115742883073ULL;
long long int var_24 = -4418766845913366730LL;
unsigned short var_25 = (unsigned short)38395;
signed char var_26 = (signed char)22;
short var_27 = (short)8072;
unsigned short var_28 = (unsigned short)17169;
unsigned short var_29 = (unsigned short)10770;
long long int var_30 = 4277898034808093538LL;
unsigned long long int var_31 = 8387984125485652880ULL;
long long int var_32 = 8853209902872461113LL;
unsigned short var_33 = (unsigned short)3206;
signed char arr_1 [18] ;
long long int arr_2 [18] ;
signed char arr_3 [18] ;
unsigned short arr_5 [18] [18] [18] ;
short arr_6 [18] [18] [18] [18] ;
unsigned short arr_7 [18] [18] ;
long long int arr_8 [18] [18] [18] [18] [18] [18] ;
short arr_12 [18] [18] [18] [18] ;
unsigned short arr_15 [18] [18] [18] [18] [18] [18] ;
unsigned short arr_17 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (signed char)-100;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = -3917233145842489932LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)111 : (signed char)101;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)34279 : (unsigned short)37798;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (short)32158;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)63605;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? -8619361830909961860LL : 6980782605831203462LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)2491 : (short)19523;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (unsigned short)9880 : (unsigned short)31071;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned short)7532;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
