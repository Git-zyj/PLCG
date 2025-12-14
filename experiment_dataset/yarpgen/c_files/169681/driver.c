#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)174;
int var_2 = -3397041;
short var_3 = (short)20;
short var_4 = (short)1582;
unsigned char var_5 = (unsigned char)117;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)31431;
unsigned char var_8 = (unsigned char)221;
int var_9 = 635461301;
unsigned char var_10 = (unsigned char)10;
int var_11 = 780102038;
int zero = 0;
unsigned char var_13 = (unsigned char)182;
unsigned long long int var_14 = 5264658043691445283ULL;
unsigned long long int var_15 = 11192333251332278749ULL;
unsigned long long int var_16 = 11957689523716009672ULL;
_Bool var_17 = (_Bool)0;
long long int var_18 = 7099707629759940163LL;
signed char var_19 = (signed char)86;
_Bool var_20 = (_Bool)0;
int var_21 = 1678763586;
unsigned long long int var_22 = 14704987777864035838ULL;
unsigned char var_23 = (unsigned char)44;
unsigned long long int var_24 = 14639967221336704863ULL;
unsigned char var_25 = (unsigned char)251;
int var_26 = -2064799526;
short var_27 = (short)-11797;
unsigned long long int var_28 = 12706114108910725992ULL;
unsigned long long int var_29 = 7888470449330050783ULL;
unsigned long long int var_30 = 4910490597468686667ULL;
short var_31 = (short)-15409;
int var_32 = -1941284396;
unsigned short arr_0 [10] ;
unsigned short arr_1 [10] [10] ;
int arr_2 [10] [10] ;
unsigned int arr_6 [10] [10] [10] ;
unsigned long long int arr_7 [10] [10] [10] ;
int arr_8 [10] [10] [10] [10] [10] [10] ;
int arr_10 [10] ;
unsigned char arr_11 [10] ;
unsigned char arr_15 [10] [10] [10] ;
unsigned long long int arr_17 [10] [10] [10] [10] ;
int arr_19 [10] [10] [10] ;
short arr_23 [10] ;
unsigned int arr_24 [10] ;
int arr_35 [17] ;
short arr_5 [10] ;
unsigned char arr_21 [10] [10] [10] ;
int arr_26 [10] ;
signed char arr_29 [10] [10] ;
unsigned char arr_32 [10] [10] [10] ;
unsigned long long int arr_42 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)49749;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)13408;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 1574269596;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 2993363987U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 4491921735044795199ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1387920375;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = -1472668963;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 12378142491097096305ULL : 8269807474214127932ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 350056953 : -1678077218;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_23 [i_0] = (short)12389;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_24 [i_0] = 222195137U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_35 [i_0] = -1173479187;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (short)22703;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (unsigned char)157;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_26 [i_0] = -1775852725;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_29 [i_0] [i_1] = (signed char)37;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)220 : (unsigned char)128;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_42 [i_0] [i_1] = (i_0 % 2 == 0) ? 6610154073917558563ULL : 13844442700902376232ULL;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_32 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_42 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
