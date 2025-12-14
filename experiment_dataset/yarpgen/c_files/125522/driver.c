#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)55;
signed char var_3 = (signed char)-124;
signed char var_4 = (signed char)64;
unsigned long long int var_5 = 3960683914093961199ULL;
unsigned char var_6 = (unsigned char)223;
unsigned short var_7 = (unsigned short)13828;
signed char var_8 = (signed char)-74;
unsigned char var_10 = (unsigned char)79;
unsigned long long int var_11 = 2353519105347317289ULL;
signed char var_12 = (signed char)-127;
unsigned long long int var_13 = 273971001277224854ULL;
unsigned long long int var_14 = 5338822134606265388ULL;
unsigned short var_15 = (unsigned short)32158;
signed char var_16 = (signed char)-101;
unsigned short var_17 = (unsigned short)19534;
int zero = 0;
unsigned char var_19 = (unsigned char)186;
unsigned short var_20 = (unsigned short)56765;
signed char var_21 = (signed char)85;
unsigned char var_22 = (unsigned char)144;
signed char var_23 = (signed char)40;
unsigned long long int var_24 = 759138180188657832ULL;
signed char var_25 = (signed char)1;
unsigned char var_26 = (unsigned char)223;
signed char var_27 = (signed char)102;
unsigned long long int var_28 = 2491909710558430855ULL;
unsigned char var_29 = (unsigned char)192;
unsigned long long int var_30 = 3143520507650391118ULL;
signed char var_31 = (signed char)2;
signed char var_32 = (signed char)-98;
signed char var_33 = (signed char)75;
signed char var_34 = (signed char)35;
unsigned short var_35 = (unsigned short)53892;
unsigned long long int var_36 = 11807798166552201932ULL;
unsigned long long int var_37 = 1572007207595388386ULL;
unsigned long long int var_38 = 16043340566595943964ULL;
unsigned char var_39 = (unsigned char)119;
unsigned long long int var_40 = 8795950210046998954ULL;
signed char var_41 = (signed char)-92;
unsigned short arr_0 [12] ;
unsigned short arr_1 [12] ;
unsigned short arr_2 [12] ;
unsigned short arr_3 [12] ;
unsigned long long int arr_4 [12] [12] ;
unsigned char arr_5 [12] ;
unsigned short arr_6 [12] [12] ;
unsigned short arr_9 [12] [12] [12] ;
unsigned long long int arr_10 [12] ;
unsigned long long int arr_15 [12] [12] ;
unsigned short arr_17 [12] ;
signed char arr_19 [12] [12] [12] ;
unsigned long long int arr_20 [12] [12] [12] ;
unsigned long long int arr_21 [12] [12] [12] [12] ;
unsigned char arr_25 [12] [12] [12] [12] ;
unsigned short arr_27 [12] [12] [12] ;
unsigned short arr_28 [12] [12] [12] [12] ;
unsigned long long int arr_35 [12] [12] [12] [12] ;
unsigned long long int arr_36 [12] [12] [12] ;
unsigned char arr_38 [12] [12] [12] [12] ;
unsigned char arr_7 [12] ;
unsigned char arr_8 [12] [12] [12] ;
unsigned short arr_11 [12] [12] ;
unsigned char arr_14 [12] ;
unsigned long long int arr_18 [12] [12] [12] ;
unsigned short arr_23 [12] [12] [12] ;
unsigned long long int arr_24 [12] [12] [12] [12] ;
unsigned short arr_32 [12] [12] ;
unsigned char arr_33 [12] [12] [12] [12] [12] ;
signed char arr_39 [12] [12] [12] ;
unsigned short arr_40 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned short)24250;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)36077;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)29706;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)11713;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 16815818822118785673ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)33296 : (unsigned short)6535;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned short)14944;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = 13392918753300719791ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_15 [i_0] [i_1] = 17539323252338211219ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = (unsigned short)55896;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)8 : (signed char)-6;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 9051310819263268924ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = 13189365655227920865ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)112 : (unsigned char)239;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (unsigned short)30640;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)11326 : (unsigned short)51405;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 14726900973492605578ULL : 18256612385778227060ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = 16428081461263156369ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)27 : (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)58 : (unsigned char)26;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)92 : (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)22417 : (unsigned short)59184;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned char)250 : (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 7258689914405511571ULL : 10360703148706188990ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)60325 : (unsigned short)44134;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 2924813729295396992ULL : 10440770127677583612ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_32 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)38219 : (unsigned short)7538;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (unsigned char)26 : (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)107 : (signed char)96;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)48121 : (unsigned short)16946;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_32 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_39 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_40 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
