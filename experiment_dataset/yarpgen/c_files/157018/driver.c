#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
signed char var_10 = (signed char)65;
unsigned char var_11 = (unsigned char)30;
unsigned short var_12 = (unsigned short)57801;
signed char var_13 = (signed char)106;
unsigned long long int var_14 = 13420874984730421399ULL;
unsigned char var_15 = (unsigned char)120;
unsigned short var_16 = (unsigned short)32994;
long long int var_17 = -6304154891841936350LL;
int var_18 = -959662714;
signed char var_19 = (signed char)18;
signed char var_20 = (signed char)-62;
long long int var_21 = 8183060043403674438LL;
unsigned short var_22 = (unsigned short)50644;
unsigned char var_23 = (unsigned char)195;
unsigned char var_24 = (unsigned char)9;
unsigned char var_25 = (unsigned char)9;
long long int var_26 = -2780169067166748949LL;
signed char var_27 = (signed char)-96;
signed char var_28 = (signed char)-39;
unsigned char var_29 = (unsigned char)236;
unsigned char var_30 = (unsigned char)230;
signed char var_31 = (signed char)-19;
int var_32 = -1755464625;
signed char var_33 = (signed char)-98;
unsigned char var_34 = (unsigned char)35;
unsigned short var_35 = (unsigned short)50642;
unsigned char var_36 = (unsigned char)211;
unsigned short var_37 = (unsigned short)60103;
unsigned short var_38 = (unsigned short)40921;
unsigned long long int var_39 = 8913394503646276733ULL;
int var_40 = 1563021335;
unsigned char var_41 = (unsigned char)71;
unsigned char var_42 = (unsigned char)67;
long long int var_43 = -8876005218736337588LL;
signed char var_44 = (signed char)-26;
int var_45 = -297616583;
long long int var_46 = -3903713699040758152LL;
long long int var_47 = -8271052280799550445LL;
unsigned short var_48 = (unsigned short)30440;
unsigned char arr_9 [19] ;
unsigned long long int arr_17 [19] ;
signed char arr_18 [19] [19] ;
unsigned long long int arr_23 [19] [19] [19] ;
unsigned char arr_28 [19] ;
long long int arr_40 [18] ;
unsigned char arr_55 [19] ;
signed char arr_61 [19] [19] [19] [19] [19] [19] [19] ;
unsigned char arr_66 [19] [19] ;
long long int arr_72 [19] ;
unsigned long long int arr_73 [19] [19] ;
long long int arr_74 [19] [19] [19] [19] [19] ;
unsigned char arr_81 [11] ;
unsigned char arr_82 [11] ;
unsigned short arr_92 [22] [22] [22] ;
unsigned short arr_93 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = 13512978194965652899ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_18 [i_0] [i_1] = (signed char)27;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 15802709168703231557ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_28 [i_0] = (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_40 [i_0] = (i_0 % 2 == 0) ? -6532414178950027903LL : -4503493855718135882LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_55 [i_0] = (i_0 % 2 == 0) ? (unsigned char)114 : (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                arr_61 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_6 % 2 == 0) ? (signed char)106 : (signed char)-7;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_66 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)198 : (unsigned char)249;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_72 [i_0] = (i_0 % 2 == 0) ? -1579182223646679424LL : -985694034585434056LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_73 [i_0] [i_1] = (i_0 % 2 == 0) ? 12778131001572939465ULL : 11590267183439700433ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_74 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? -5566809565953855585LL : -7021916842719247176LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_81 [i_0] = (unsigned char)142;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_82 [i_0] = (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_92 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)19305 : (unsigned short)36085;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_93 [i_0] = (i_0 % 2 == 0) ? (unsigned short)24219 : (unsigned short)24029;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_40 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_55 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                hash(&seed, arr_61 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_66 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_72 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_73 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        hash(&seed, arr_74 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_81 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_82 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_92 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_93 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
