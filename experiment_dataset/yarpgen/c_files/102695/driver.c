#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-23;
_Bool var_2 = (_Bool)0;
long long int var_3 = -8993528143937703483LL;
unsigned char var_10 = (unsigned char)227;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 2212863688653091641ULL;
unsigned long long int var_13 = 8658279492195414528ULL;
signed char var_15 = (signed char)59;
_Bool var_16 = (_Bool)1;
long long int var_17 = -7980962883639851790LL;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)147;
long long int var_21 = -3041822160226090298LL;
unsigned int var_22 = 1670899546U;
unsigned long long int var_23 = 3380994211330930390ULL;
unsigned short var_24 = (unsigned short)26493;
int var_25 = 1182297116;
unsigned long long int var_26 = 5694350779363129302ULL;
long long int var_27 = -252859065635700523LL;
unsigned long long int var_28 = 17403732898551974297ULL;
unsigned long long int var_29 = 12592566184003573082ULL;
signed char var_30 = (signed char)83;
_Bool var_31 = (_Bool)0;
unsigned long long int var_32 = 17637258752311300712ULL;
unsigned long long int var_33 = 7990820304609435508ULL;
unsigned short var_34 = (unsigned short)57162;
unsigned long long int var_35 = 10379757786120272330ULL;
_Bool var_36 = (_Bool)1;
_Bool var_37 = (_Bool)0;
unsigned long long int var_38 = 9891931896840579613ULL;
signed char var_39 = (signed char)-95;
_Bool var_40 = (_Bool)1;
unsigned long long int var_41 = 2995057788612332155ULL;
unsigned char var_42 = (unsigned char)210;
unsigned long long int var_43 = 2490151991778396724ULL;
signed char var_44 = (signed char)-6;
unsigned short var_45 = (unsigned short)52275;
_Bool var_46 = (_Bool)1;
unsigned long long int var_47 = 12261517174854914025ULL;
int var_48 = 104540210;
signed char var_49 = (signed char)127;
unsigned char var_50 = (unsigned char)122;
long long int var_51 = -1779022675436342225LL;
unsigned int var_52 = 704464735U;
signed char var_53 = (signed char)-101;
int var_54 = 1647182554;
long long int var_55 = 782247140007423306LL;
int arr_1 [25] ;
long long int arr_2 [25] ;
_Bool arr_3 [25] [25] ;
unsigned short arr_4 [25] [25] ;
unsigned short arr_5 [25] [25] ;
long long int arr_7 [25] [25] [25] ;
long long int arr_8 [25] [25] [25] ;
long long int arr_10 [25] ;
unsigned long long int arr_13 [25] [25] ;
unsigned int arr_15 [25] [25] [25] ;
int arr_16 [25] [25] ;
_Bool arr_18 [25] [25] ;
unsigned long long int arr_19 [25] [25] [25] [25] ;
unsigned long long int arr_21 [25] [25] [25] ;
unsigned short arr_22 [25] [25] [25] [25] [25] ;
unsigned char arr_27 [20] [20] [20] ;
unsigned long long int arr_28 [20] [20] [20] [20] ;
long long int arr_29 [20] [20] [20] [20] ;
unsigned long long int arr_35 [20] [20] [20] [20] ;
unsigned char arr_36 [20] [20] [20] [20] [20] [20] ;
int arr_37 [20] [20] [20] [20] ;
long long int arr_39 [20] [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -1749960395;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -1538759729930929909LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)29052;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)62595;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -4848048561645578902LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -5644544585991540328LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = 6605860192949139310LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = 14147419063391529410ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 1475240132U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_16 [i_0] [i_1] = 278484728;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_18 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 8815703236892242414ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 9808147658617572236ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)17511;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = 485361939256846735ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = 8905755522532734963LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = 12060027755974366493ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (unsigned char)194 : (unsigned char)82;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = 514606918;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] = 183199820316217584LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
