#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)4713;
unsigned char var_3 = (unsigned char)225;
signed char var_4 = (signed char)93;
long long int var_5 = 1592572946952801023LL;
int var_6 = 1988248695;
unsigned char var_7 = (unsigned char)169;
unsigned int var_8 = 1798663186U;
unsigned short var_9 = (unsigned short)17249;
int var_10 = 362237465;
int var_11 = -1650296;
unsigned long long int var_12 = 6447203711446369636ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)71;
signed char var_14 = (signed char)107;
int var_15 = 365928429;
unsigned long long int var_16 = 11301284124282237698ULL;
unsigned int var_17 = 4161441083U;
unsigned long long int var_18 = 8882782741717905824ULL;
signed char var_19 = (signed char)120;
long long int var_20 = -3719535541226742224LL;
unsigned int var_21 = 3537366134U;
short var_22 = (short)21785;
_Bool var_23 = (_Bool)0;
short var_24 = (short)23618;
_Bool var_25 = (_Bool)1;
unsigned long long int var_26 = 16398536157925853025ULL;
short var_27 = (short)30887;
long long int arr_0 [21] ;
unsigned char arr_3 [21] [21] ;
int arr_5 [21] [21] ;
int arr_7 [21] ;
long long int arr_11 [21] [21] [21] ;
signed char arr_16 [21] [21] [21] [21] ;
unsigned long long int arr_37 [16] [16] ;
unsigned short arr_39 [16] [16] [16] ;
unsigned long long int arr_12 [21] ;
unsigned long long int arr_34 [15] [15] ;
unsigned short arr_35 [15] ;
short arr_38 [16] [16] ;
unsigned int arr_46 [16] [16] [16] ;
signed char arr_50 [16] [16] [16] ;
signed char arr_51 [16] ;
_Bool arr_52 [16] [16] ;
int arr_58 [15] [15] [15] ;
unsigned long long int arr_59 [15] ;
short arr_64 [15] [15] ;
long long int arr_65 [15] [15] ;
long long int arr_66 [15] [15] [15] ;
_Bool arr_71 [15] [15] ;
unsigned char arr_72 [15] ;
signed char arr_73 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 5733564893226180213LL : -5098831932719404692LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)176 : (unsigned char)170;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 607128234 : 727744695;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = -515119402;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 8687925055311141625LL : -5597427998081992269LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (signed char)100;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_37 [i_0] [i_1] = 17232687223098858100ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)54354 : (unsigned short)24635;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 9535245454695607514ULL : 11969860040712015806ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_34 [i_0] [i_1] = (i_1 % 2 == 0) ? 16455947515690765479ULL : 12042673941143016745ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_35 [i_0] = (unsigned short)12385;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_38 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-15037 : (short)-23062;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_46 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 55876983U : 121761851U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_50 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)61 : (signed char)-105;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_51 [i_0] = (i_0 % 2 == 0) ? (signed char)-126 : (signed char)-118;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_52 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_58 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1014581391 : -1460976392;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_59 [i_0] = (i_0 % 2 == 0) ? 3919790448332976887ULL : 7678910114953769877ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_64 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-8756 : (short)11691;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_65 [i_0] [i_1] = (i_1 % 2 == 0) ? -2937242265083948926LL : -4545299728162352741LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_66 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3600346592951073330LL : -2428760042662808968LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_71 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_72 [i_0] = (i_0 % 2 == 0) ? (unsigned char)202 : (unsigned char)17;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_73 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-53 : (signed char)-110;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_34 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_38 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_46 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_50 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_51 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_52 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_58 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_59 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_64 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_65 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_66 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_71 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_72 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_73 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
