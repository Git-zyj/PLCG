#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24672;
unsigned long long int var_1 = 8587862231789531379ULL;
unsigned short var_2 = (unsigned short)34414;
short var_3 = (short)15997;
long long int var_4 = -2869276881915347260LL;
unsigned short var_5 = (unsigned short)9106;
unsigned short var_6 = (unsigned short)17406;
short var_7 = (short)-2375;
unsigned long long int var_8 = 16998344482613154686ULL;
unsigned short var_9 = (unsigned short)41644;
long long int var_10 = 4636598967601914163LL;
unsigned long long int var_11 = 452269518384795226ULL;
unsigned short var_12 = (unsigned short)64336;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1877870303U;
int zero = 0;
long long int var_15 = 5217134491965209617LL;
unsigned long long int var_16 = 3576543936977137419ULL;
unsigned long long int var_17 = 18354536561163057432ULL;
unsigned char var_18 = (unsigned char)189;
unsigned short var_19 = (unsigned short)30388;
int var_20 = -292635851;
unsigned short var_21 = (unsigned short)18437;
unsigned char var_22 = (unsigned char)244;
unsigned long long int var_23 = 194778232702539187ULL;
unsigned long long int var_24 = 245602511779913022ULL;
unsigned char var_25 = (unsigned char)87;
unsigned int var_26 = 205923543U;
long long int var_27 = -744828102672711698LL;
long long int var_28 = 4914748047081049701LL;
_Bool var_29 = (_Bool)1;
unsigned short var_30 = (unsigned short)46705;
int var_31 = 1202096460;
unsigned char var_32 = (unsigned char)187;
int var_33 = 1766767387;
signed char var_34 = (signed char)59;
unsigned int var_35 = 348505512U;
unsigned short var_36 = (unsigned short)23330;
unsigned long long int var_37 = 15890467834804005318ULL;
unsigned int var_38 = 4020392250U;
unsigned short var_39 = (unsigned short)19927;
_Bool var_40 = (_Bool)1;
_Bool var_41 = (_Bool)1;
_Bool var_42 = (_Bool)0;
unsigned char arr_0 [22] [22] ;
unsigned int arr_1 [22] ;
unsigned char arr_2 [22] ;
unsigned char arr_3 [22] ;
int arr_5 [22] ;
unsigned long long int arr_6 [22] [22] [22] ;
unsigned long long int arr_7 [22] [22] ;
short arr_10 [22] ;
_Bool arr_12 [22] [22] [22] [22] ;
unsigned long long int arr_14 [22] [22] [22] [22] ;
int arr_15 [22] [22] ;
signed char arr_20 [22] [22] [22] ;
_Bool arr_26 [22] ;
int arr_27 [25] ;
int arr_28 [25] [25] ;
unsigned long long int arr_30 [25] ;
unsigned int arr_31 [25] ;
_Bool arr_32 [25] ;
unsigned long long int arr_34 [25] [25] ;
unsigned long long int arr_35 [25] [25] ;
unsigned short arr_39 [25] [25] [25] ;
_Bool arr_43 [25] [25] [25] ;
long long int arr_4 [22] ;
unsigned char arr_8 [22] ;
_Bool arr_17 [22] [22] [22] [22] ;
unsigned short arr_22 [22] [22] ;
unsigned char arr_29 [25] ;
unsigned short arr_37 [25] ;
_Bool arr_38 [25] [25] ;
unsigned short arr_42 [25] [25] ;
unsigned long long int arr_48 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 1587803889U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned char)36;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -119215394 : -1855786443;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 13137460064293281960ULL : 3548827398754926762ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = 16278696082217889439ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (short)-8496 : (short)26370;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 256691998657920721ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? 897080891 : -669016331;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (signed char)-2;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_26 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? -1700835247 : -398522668;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_28 [i_0] [i_1] = (i_1 % 2 == 0) ? 1775647410 : 1823319761;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? 2225398184865890116ULL : 2883865952494498218ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? 3132229132U : 1746805916U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_32 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_34 [i_0] [i_1] = 10694786643740280733ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_35 [i_0] [i_1] = 564565834977155468ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)46812 : (unsigned short)26377;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 6365828396467829685LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)103 : (unsigned char)113;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_22 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)57639 : (unsigned short)36588;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? (unsigned char)47 : (unsigned char)62;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_37 [i_0] = (unsigned short)24122;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_38 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_42 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)38966 : (unsigned short)61143;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_48 [i_0] [i_1] = (i_0 % 2 == 0) ? 14845685237609289059ULL : 17430113852360940862ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_37 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_38 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_42 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_48 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
