#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4480;
unsigned short var_1 = (unsigned short)118;
unsigned short var_2 = (unsigned short)57243;
unsigned long long int var_3 = 13144254071588352287ULL;
unsigned char var_4 = (unsigned char)148;
unsigned long long int var_6 = 4147451302882035658ULL;
int var_7 = -200388139;
unsigned char var_8 = (unsigned char)23;
unsigned short var_9 = (unsigned short)53248;
unsigned short var_10 = (unsigned short)36772;
unsigned short var_11 = (unsigned short)29001;
unsigned short var_12 = (unsigned short)20389;
int var_14 = -1353629545;
unsigned short var_15 = (unsigned short)31018;
unsigned short var_16 = (unsigned short)4717;
unsigned char var_17 = (unsigned char)76;
int var_18 = 892995929;
int zero = 0;
int var_19 = 927395220;
int var_20 = 1386827351;
unsigned long long int var_21 = 4811229887172140814ULL;
unsigned char var_22 = (unsigned char)170;
unsigned short var_23 = (unsigned short)29442;
unsigned short var_24 = (unsigned short)30374;
unsigned short var_25 = (unsigned short)13057;
unsigned long long int var_26 = 16510019623643419033ULL;
int var_27 = 154784028;
unsigned char var_28 = (unsigned char)123;
unsigned short var_29 = (unsigned short)36185;
unsigned short var_30 = (unsigned short)55652;
unsigned short var_31 = (unsigned short)14108;
unsigned long long int var_32 = 15730028615344800538ULL;
int var_33 = 1592842244;
unsigned long long int var_34 = 12005042174390007904ULL;
unsigned short var_35 = (unsigned short)55961;
unsigned short var_36 = (unsigned short)36101;
unsigned short var_37 = (unsigned short)16763;
unsigned long long int var_38 = 13404174160181538117ULL;
int var_39 = 1096002635;
unsigned short var_40 = (unsigned short)17859;
unsigned long long int var_41 = 15815917732340740914ULL;
unsigned long long int var_42 = 1237168516119654147ULL;
unsigned char var_43 = (unsigned char)173;
int var_44 = -1425562483;
unsigned short arr_0 [19] ;
unsigned short arr_1 [19] [19] ;
unsigned char arr_2 [19] ;
unsigned short arr_4 [13] ;
unsigned short arr_7 [13] ;
unsigned long long int arr_8 [13] [13] [13] ;
int arr_9 [13] [13] [13] [13] ;
unsigned long long int arr_12 [12] [12] ;
int arr_13 [12] ;
unsigned short arr_15 [12] ;
unsigned short arr_16 [12] [12] ;
int arr_17 [12] [12] ;
unsigned short arr_33 [12] [12] [12] ;
unsigned char arr_34 [12] [12] [12] ;
unsigned long long int arr_3 [19] ;
unsigned char arr_6 [13] [13] ;
int arr_11 [13] [13] [13] ;
unsigned short arr_23 [12] [12] [12] ;
unsigned short arr_28 [12] [12] [12] [12] ;
unsigned short arr_32 [12] [12] ;
unsigned short arr_35 [12] ;
unsigned short arr_36 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)10008;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)22148;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)183;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned short)53569;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (unsigned short)28587;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 18143335897948271776ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = -254934629;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? 10403498920361923532ULL : 14407046584997958127ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = -1054313729;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned short)14674 : (unsigned short)893;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned short)35528;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_17 [i_0] [i_1] = 1714056288;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (unsigned short)50370;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)15 : (unsigned char)149;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 4672416307552804176ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)195;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 1289503393;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)6072 : (unsigned short)7752;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)51310 : (unsigned short)48006;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_32 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)7870 : (unsigned short)17476;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_35 [i_0] = (i_0 % 2 == 0) ? (unsigned short)61461 : (unsigned short)41454;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_36 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)53839 : (unsigned short)10942;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_32 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_36 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
