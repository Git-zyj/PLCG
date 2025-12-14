#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2511390246442868399LL;
unsigned int var_1 = 2904923780U;
unsigned int var_2 = 1356525238U;
int var_3 = 1172723553;
int var_4 = -1629598073;
unsigned int var_5 = 2371189976U;
unsigned short var_6 = (unsigned short)27045;
long long int var_7 = 5567410791268246461LL;
long long int var_8 = 323957001504118464LL;
long long int var_9 = -7790908734351497807LL;
unsigned short var_11 = (unsigned short)40565;
unsigned short var_12 = (unsigned short)44019;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)57105;
int zero = 0;
unsigned int var_15 = 2068766828U;
unsigned char var_16 = (unsigned char)47;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-14723;
long long int var_19 = -382166147891880289LL;
unsigned short var_20 = (unsigned short)52470;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)23;
_Bool var_23 = (_Bool)0;
unsigned int var_24 = 347997608U;
unsigned char var_25 = (unsigned char)191;
unsigned int var_26 = 4078852010U;
unsigned short var_27 = (unsigned short)54019;
int var_28 = 272191703;
unsigned long long int var_29 = 8894444451461546520ULL;
unsigned char var_30 = (unsigned char)20;
unsigned short var_31 = (unsigned short)25213;
unsigned char var_32 = (unsigned char)27;
short var_33 = (short)-11440;
short var_34 = (short)26655;
_Bool var_35 = (_Bool)1;
unsigned char var_36 = (unsigned char)178;
long long int var_37 = -1605535938601548005LL;
long long int var_38 = 8992230082656054833LL;
_Bool var_39 = (_Bool)0;
unsigned int var_40 = 4218763116U;
long long int var_41 = 3892650205660623332LL;
short var_42 = (short)-32616;
signed char var_43 = (signed char)93;
unsigned long long int var_44 = 16527700988364723663ULL;
short var_45 = (short)1824;
int var_46 = -133607365;
_Bool arr_0 [25] ;
unsigned char arr_1 [25] ;
int arr_2 [25] ;
_Bool arr_3 [25] ;
_Bool arr_9 [19] ;
int arr_10 [19] ;
unsigned short arr_21 [19] [19] [19] ;
_Bool arr_23 [19] [19] [19] ;
_Bool arr_24 [19] [19] ;
unsigned short arr_25 [19] [19] ;
unsigned int arr_27 [19] [19] [19] [19] [19] [19] ;
unsigned long long int arr_28 [19] [19] [19] [19] [19] ;
short arr_30 [19] ;
unsigned short arr_33 [19] [19] ;
int arr_34 [19] [19] ;
int arr_59 [22] [22] ;
unsigned long long int arr_60 [22] ;
unsigned char arr_4 [25] [25] ;
unsigned short arr_12 [19] ;
unsigned int arr_15 [19] [19] [19] ;
signed char arr_16 [19] [19] ;
short arr_42 [19] [19] [19] [19] ;
int arr_45 [19] [19] [19] [19] ;
long long int arr_46 [19] [19] ;
unsigned long long int arr_51 [19] [19] ;
int arr_52 [19] ;
unsigned long long int arr_55 [19] [19] [19] ;
unsigned int arr_56 [19] ;
long long int arr_57 [19] ;
int arr_61 [22] ;
long long int arr_62 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)61 : (unsigned char)138;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 797132209;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = -1268229907;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (unsigned short)30420;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_24 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_25 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)27673 : (unsigned short)822;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2321696705U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 3228087789390091724ULL : 14416778420114107552ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? (short)-11750 : (short)-19187;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_33 [i_0] [i_1] = (unsigned short)50642;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_34 [i_0] [i_1] = (i_1 % 2 == 0) ? -333449446 : -378386372;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_59 [i_0] [i_1] = -1163910386;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_60 [i_0] = 17520994286971682353ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)150 : (unsigned char)17;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = (unsigned short)44273;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 526199189U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_16 [i_0] [i_1] = (signed char)-15;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = (short)-16633;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = -1937399584;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_46 [i_0] [i_1] = -3563410119212508721LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_51 [i_0] [i_1] = 6449621743486154378ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_52 [i_0] = -1069581697;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_55 [i_0] [i_1] [i_2] = 6413062835228960339ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_56 [i_0] = 2740482739U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_57 [i_0] = 9086900818329012138LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_61 [i_0] = -1061916498;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_62 [i_0] [i_1] = 2739257681266875387LL;
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
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_42 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_45 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_46 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_51 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_52 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_55 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_56 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_57 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_61 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_62 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
