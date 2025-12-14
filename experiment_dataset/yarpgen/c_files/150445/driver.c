#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27768;
int var_1 = 739577026;
int var_2 = 793739242;
_Bool var_4 = (_Bool)0;
long long int var_5 = -4280278806485758950LL;
unsigned char var_6 = (unsigned char)86;
unsigned long long int var_7 = 4536970298758483231ULL;
unsigned char var_8 = (unsigned char)75;
unsigned long long int var_10 = 18105883986971732541ULL;
long long int var_13 = 8349405438062885325LL;
unsigned int var_14 = 2611321329U;
signed char var_15 = (signed char)100;
int zero = 0;
signed char var_16 = (signed char)59;
unsigned long long int var_17 = 4005230916153488679ULL;
long long int var_18 = -3804396353057527380LL;
unsigned short var_19 = (unsigned short)47056;
unsigned int var_20 = 2875597109U;
int var_21 = 880249791;
unsigned int var_22 = 3413190181U;
signed char var_23 = (signed char)23;
unsigned char var_24 = (unsigned char)189;
signed char var_25 = (signed char)-120;
_Bool var_26 = (_Bool)1;
int var_27 = -1957264874;
short var_28 = (short)27583;
_Bool arr_0 [22] ;
int arr_1 [22] [22] ;
long long int arr_2 [22] [22] ;
long long int arr_3 [22] ;
unsigned short arr_4 [22] ;
signed char arr_7 [14] ;
long long int arr_8 [14] ;
unsigned short arr_12 [18] ;
long long int arr_13 [18] [18] ;
unsigned char arr_14 [18] ;
long long int arr_15 [18] [18] [18] ;
int arr_18 [18] [18] [18] ;
unsigned long long int arr_19 [18] [18] ;
long long int arr_21 [12] ;
signed char arr_22 [12] ;
int arr_25 [12] [12] ;
unsigned long long int arr_27 [12] ;
long long int arr_33 [12] ;
unsigned short arr_6 [22] ;
short arr_9 [14] ;
int arr_10 [14] ;
long long int arr_11 [14] ;
unsigned long long int arr_16 [18] [18] ;
int arr_17 [18] [18] [18] ;
signed char arr_20 [18] ;
unsigned long long int arr_23 [12] [12] ;
long long int arr_26 [12] [12] ;
short arr_29 [12] [12] ;
unsigned short arr_30 [12] ;
unsigned short arr_31 [12] [12] ;
_Bool arr_34 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = -1438886790;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = -846381311233269669LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 4905727263363144281LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned short)24166;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (signed char)-85;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 7902861365005495692LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned short)16798 : (unsigned short)17065;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? -8345792145830996026LL : 2249657063919046103LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -3919692233581020339LL : 6275152211469970782LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 674768705 : -549073992;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_19 [i_0] [i_1] = 1640143138646691484ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? -767448814169206757LL : 7971670267152698985LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (signed char)15 : (signed char)17;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_25 [i_0] [i_1] = (i_1 % 2 == 0) ? 767678603 : -248864429;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_27 [i_0] = 11253708478705248590ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_33 [i_0] = (i_0 % 2 == 0) ? 2048454649549664337LL : 8731408644401073914LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (unsigned short)38490;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (short)-13281;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = 415841433;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = -6812815658375559317LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? 4674739076219360595ULL : 9657404494975094730ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -461115854 : 1063158923;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (signed char)0 : (signed char)-53;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_23 [i_0] [i_1] = (i_1 % 2 == 0) ? 8089966910602779720ULL : 18374483321036363431ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_26 [i_0] [i_1] = (i_0 % 2 == 0) ? 9149865272185309554LL : -397217655676525276LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_29 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-13326 : (short)20937;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? (unsigned short)57608 : (unsigned short)56998;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_31 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)47629 : (unsigned short)8034;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_34 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_34 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
