#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 302333351U;
unsigned int var_1 = 2122018557U;
unsigned char var_2 = (unsigned char)95;
unsigned short var_3 = (unsigned short)65449;
int var_4 = -661819054;
long long int var_5 = 8744510399448525151LL;
unsigned long long int var_6 = 8934108822409766007ULL;
unsigned long long int var_7 = 5094534298710099090ULL;
unsigned int var_8 = 812166334U;
signed char var_9 = (signed char)109;
signed char var_10 = (signed char)-63;
unsigned long long int var_11 = 12712146999846980116ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)135;
signed char var_13 = (signed char)44;
unsigned char var_14 = (unsigned char)161;
long long int var_15 = -2399002172157623436LL;
signed char var_16 = (signed char)-73;
unsigned int var_17 = 1934996754U;
int var_18 = -1976048326;
long long int var_19 = 4648676271867790117LL;
signed char var_20 = (signed char)-83;
signed char var_21 = (signed char)-20;
signed char var_22 = (signed char)36;
_Bool var_23 = (_Bool)1;
long long int var_24 = -7645219455335096298LL;
unsigned short var_25 = (unsigned short)21211;
short var_26 = (short)-10559;
unsigned short var_27 = (unsigned short)13540;
unsigned char var_28 = (unsigned char)227;
short var_29 = (short)-30832;
long long int var_30 = -3222334477524383712LL;
unsigned long long int var_31 = 14715242321559223995ULL;
long long int var_32 = 4843724723267243710LL;
long long int var_33 = -8248932483890521441LL;
int var_34 = -490148645;
int var_35 = 414132991;
unsigned short var_36 = (unsigned short)13819;
unsigned short arr_0 [21] ;
unsigned char arr_1 [21] [21] ;
long long int arr_2 [21] [21] [21] ;
unsigned long long int arr_3 [21] [21] [21] ;
signed char arr_4 [21] [21] [21] ;
unsigned short arr_5 [13] ;
short arr_6 [13] ;
unsigned int arr_9 [13] ;
int arr_10 [13] ;
int arr_15 [13] ;
unsigned long long int arr_16 [13] [13] [13] [13] ;
signed char arr_27 [13] [13] [13] ;
long long int arr_29 [13] [13] [13] ;
unsigned int arr_32 [11] ;
short arr_33 [11] ;
unsigned char arr_45 [11] [11] [11] [11] [11] [11] ;
unsigned long long int arr_47 [11] [11] [11] [11] [11] [11] ;
unsigned int arr_55 [11] [11] [11] [11] ;
unsigned long long int arr_8 [13] ;
signed char arr_18 [13] [13] [13] [13] [13] [13] ;
_Bool arr_22 [13] [13] [13] [13] ;
unsigned long long int arr_23 [13] [13] [13] [13] ;
short arr_24 [13] [13] [13] ;
unsigned long long int arr_25 [13] [13] [13] [13] ;
long long int arr_30 [13] [13] [13] ;
signed char arr_34 [11] ;
unsigned short arr_43 [11] [11] [11] [11] ;
long long int arr_46 [11] [11] [11] [11] ;
unsigned long long int arr_51 [11] [11] ;
_Bool arr_52 [11] ;
signed char arr_56 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)54536;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)205;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 621864406314444530LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1104562791451536331ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-81;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned short)13543;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (short)19592;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = 2104006641U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = -1353989690;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = 296626843;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 3850840336925102665ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (signed char)24;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = -7832758024367452849LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_32 [i_0] = 2463046223U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_33 [i_0] = (short)-19742;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)73;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 11064525161386688245ULL : 514513775915706996ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_55 [i_0] [i_1] [i_2] [i_3] = 1484970383U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = 523685097211209992ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)103;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = 7859973131484776893ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (short)-22;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = 6250455482153578648ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = 5147538178448276647LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_34 [i_0] = (i_0 % 2 == 0) ? (signed char)-75 : (signed char)-44;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)1487 : (unsigned short)2977;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_46 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 6227461938751087561LL : -7560370757564259044LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_51 [i_0] [i_1] = (i_1 % 2 == 0) ? 5768143153218887447ULL : 15457524339917627528ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_52 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_56 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-104 : (signed char)96;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_30 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_34 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_43 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_46 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_51 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_52 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_56 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
