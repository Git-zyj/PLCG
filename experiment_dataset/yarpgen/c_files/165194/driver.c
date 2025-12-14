#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16523;
unsigned int var_1 = 1099190371U;
long long int var_2 = 4697249627527097363LL;
long long int var_3 = -4989829793086051648LL;
short var_4 = (short)8389;
unsigned char var_5 = (unsigned char)221;
int var_6 = -603171521;
unsigned char var_7 = (unsigned char)27;
_Bool var_8 = (_Bool)0;
long long int var_9 = -1885517887801614445LL;
int var_10 = 1241582233;
unsigned long long int var_11 = 6482485119116444455ULL;
unsigned int var_12 = 4197944017U;
short var_13 = (short)-17436;
unsigned char var_14 = (unsigned char)3;
unsigned char var_15 = (unsigned char)83;
long long int var_16 = 2449464945917405222LL;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)165;
unsigned long long int var_19 = 8791408057421332846ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)208;
short var_21 = (short)4558;
unsigned long long int var_22 = 5834942861811105584ULL;
int var_23 = -1893749726;
short var_24 = (short)19068;
unsigned int var_25 = 3008982092U;
int var_26 = 225765675;
unsigned int var_27 = 4294016285U;
unsigned long long int var_28 = 8489155819843588521ULL;
int var_29 = -24579137;
short var_30 = (short)-9877;
short var_31 = (short)13396;
short var_32 = (short)-2836;
long long int var_33 = -2536404267822059725LL;
signed char var_34 = (signed char)110;
unsigned long long int var_35 = 12047222378033549464ULL;
_Bool var_36 = (_Bool)0;
_Bool var_37 = (_Bool)0;
long long int var_38 = -6837619615763605635LL;
signed char var_39 = (signed char)88;
_Bool var_40 = (_Bool)0;
signed char var_41 = (signed char)-44;
int var_42 = 1015582193;
_Bool var_43 = (_Bool)1;
unsigned long long int var_44 = 14473693579056325564ULL;
unsigned long long int var_45 = 1894212081086537564ULL;
long long int var_46 = -6551202206411893203LL;
unsigned short var_47 = (unsigned short)23599;
unsigned char var_48 = (unsigned char)220;
long long int var_49 = -6362593397618837690LL;
unsigned int var_50 = 948395845U;
unsigned char var_51 = (unsigned char)132;
unsigned long long int var_52 = 2198728773427005122ULL;
long long int var_53 = -1145169517783434790LL;
signed char var_54 = (signed char)64;
_Bool var_55 = (_Bool)1;
unsigned int var_56 = 344249891U;
unsigned int var_57 = 1595089023U;
short var_58 = (short)-1083;
unsigned char var_59 = (unsigned char)30;
_Bool var_60 = (_Bool)1;
long long int var_61 = -5337498814306200844LL;
short var_62 = (short)12061;
_Bool var_63 = (_Bool)0;
unsigned int var_64 = 237242534U;
unsigned char arr_0 [18] ;
long long int arr_1 [18] ;
unsigned long long int arr_2 [18] ;
_Bool arr_3 [18] [18] [18] ;
unsigned char arr_4 [18] [18] ;
int arr_5 [18] [18] [18] ;
_Bool arr_6 [18] [18] ;
unsigned int arr_7 [18] ;
signed char arr_8 [18] ;
unsigned char arr_10 [18] [18] [18] ;
short arr_11 [18] [18] [18] ;
unsigned char arr_13 [18] [18] [18] [18] ;
unsigned long long int arr_15 [18] [18] [18] [18] ;
unsigned int arr_16 [18] [18] [18] [18] ;
short arr_17 [18] [18] [18] [18] ;
long long int arr_22 [18] [18] [18] [18] [18] ;
short arr_23 [18] ;
unsigned char arr_24 [18] [18] [18] [18] [18] ;
int arr_26 [18] [18] [18] [18] ;
short arr_27 [18] [18] [18] [18] [18] ;
unsigned char arr_31 [18] ;
short arr_34 [18] [18] [18] [18] [18] [18] ;
long long int arr_35 [18] ;
_Bool arr_38 [18] [18] [18] [18] [18] ;
unsigned char arr_39 [18] [18] [18] [18] [18] ;
unsigned char arr_42 [18] ;
_Bool arr_43 [18] [18] [18] [18] [18] ;
unsigned int arr_62 [22] ;
unsigned int arr_63 [22] [22] ;
short arr_9 [18] [18] ;
unsigned char arr_29 [18] [18] ;
unsigned int arr_36 [18] ;
long long int arr_46 [18] ;
_Bool arr_54 [18] [18] [18] [18] ;
short arr_58 [18] [18] [18] ;
int arr_64 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)157;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -7149693083134622215LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 17800170597493425424ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1040732839 : 1351287140;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 1952198129U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (signed char)-61;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (short)5935;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 15813607618629841863ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 841514740U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (short)4813;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = -176001988296334230LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_23 [i_0] = (short)15186;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -2093537112 : 1756634885;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-28434;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_31 [i_0] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-3743;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_35 [i_0] = 6781704023913955722LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_42 [i_0] = (unsigned char)110;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_62 [i_0] = 303018021U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_63 [i_0] [i_1] = 1112720304U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)7364 : (short)22070;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_29 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)86 : (unsigned char)156;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_36 [i_0] = (i_0 % 2 == 0) ? 4134789691U : 1208862127U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_46 [i_0] = (i_0 % 2 == 0) ? 67144280984518466LL : -1364361021513315226LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_54 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_58 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)289 : (short)18442;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_64 [i_0] = 279894780;
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
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
    hash(&seed, var_64);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_46 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_54 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_58 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_64 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
