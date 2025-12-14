#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-15;
long long int var_1 = -3276959245489067076LL;
unsigned long long int var_2 = 4168800098320677169ULL;
unsigned long long int var_3 = 13882168509990442732ULL;
long long int var_4 = -6775916423821141052LL;
signed char var_5 = (signed char)99;
long long int var_6 = 4278973262233248226LL;
signed char var_7 = (signed char)-40;
unsigned char var_8 = (unsigned char)125;
unsigned long long int var_9 = 7203637723098048214ULL;
unsigned char var_10 = (unsigned char)129;
unsigned long long int var_11 = 6163905786540544259ULL;
long long int var_12 = 3631097340106243910LL;
unsigned long long int var_13 = 16695105804424634103ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)237;
int var_15 = 1890904091;
long long int var_16 = 4676331772949287874LL;
long long int var_17 = 7998287795342369063LL;
short var_18 = (short)17858;
long long int var_19 = 7773618888906408175LL;
long long int var_20 = -9053539678035044121LL;
long long int var_21 = 2492843741393741904LL;
long long int var_22 = 3303564194385463048LL;
long long int var_23 = -2771057941110461569LL;
unsigned long long int var_24 = 10215443413995892834ULL;
unsigned short var_25 = (unsigned short)7617;
long long int var_26 = -5579518848064499822LL;
unsigned short var_27 = (unsigned short)35540;
signed char var_28 = (signed char)-31;
signed char var_29 = (signed char)-88;
long long int var_30 = 8816476133587909038LL;
short var_31 = (short)2942;
long long int var_32 = 3184310445246247430LL;
unsigned short var_33 = (unsigned short)56616;
long long int var_34 = -5803522599530552348LL;
unsigned char var_35 = (unsigned char)228;
long long int var_36 = 8046793762564140668LL;
short var_37 = (short)-15408;
int var_38 = 1191076696;
unsigned short var_39 = (unsigned short)18952;
_Bool var_40 = (_Bool)0;
_Bool var_41 = (_Bool)1;
unsigned long long int var_42 = 15755041920592832005ULL;
short var_43 = (short)9106;
short var_44 = (short)-24191;
unsigned char var_45 = (unsigned char)53;
signed char var_46 = (signed char)35;
unsigned long long int var_47 = 17000259587764005598ULL;
long long int var_48 = -3186804401967901868LL;
long long int var_49 = -25672492103662267LL;
long long int var_50 = 2746822085247962434LL;
signed char var_51 = (signed char)93;
signed char var_52 = (signed char)122;
_Bool var_53 = (_Bool)0;
long long int var_54 = 3467966599090891456LL;
unsigned long long int var_55 = 18243141772325113623ULL;
long long int var_56 = -5790933494511212045LL;
unsigned long long int var_57 = 918749370808873931ULL;
_Bool var_58 = (_Bool)1;
long long int var_59 = -4364944433263500637LL;
long long int var_60 = 6470863576646464974LL;
_Bool var_61 = (_Bool)0;
long long int var_62 = 5551881933508234693LL;
long long int var_63 = -2432603121364888659LL;
_Bool var_64 = (_Bool)1;
long long int var_65 = 9049156438709189613LL;
unsigned long long int var_66 = 14256414422936226232ULL;
long long int var_67 = 8831246589369001720LL;
unsigned short var_68 = (unsigned short)37761;
unsigned short arr_0 [23] ;
_Bool arr_1 [23] ;
unsigned long long int arr_2 [23] [23] [23] ;
signed char arr_3 [23] [23] [23] ;
unsigned char arr_4 [23] [23] [23] ;
unsigned long long int arr_6 [23] [23] [23] ;
unsigned char arr_7 [23] ;
_Bool arr_8 [23] ;
short arr_10 [23] [23] [23] ;
signed char arr_11 [23] ;
unsigned char arr_13 [23] [23] [23] ;
unsigned short arr_16 [23] [23] ;
long long int arr_17 [23] [23] [23] [23] [23] [23] ;
unsigned long long int arr_18 [23] [23] [23] ;
long long int arr_19 [23] [23] [23] [23] [23] ;
int arr_23 [23] [23] [23] [23] [23] [23] ;
long long int arr_24 [23] [23] [23] [23] [23] [23] ;
short arr_25 [23] [23] [23] [23] [23] ;
long long int arr_28 [23] [23] [23] [23] [23] [23] ;
unsigned char arr_29 [23] [23] [23] [23] [23] ;
long long int arr_32 [23] [23] [23] [23] [23] ;
unsigned short arr_47 [23] ;
long long int arr_55 [23] [23] [23] ;
_Bool arr_20 [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)65110;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 11851347314172269460ULL : 8873951521064196267ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)42;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)239 : (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 11537159318157484781ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (unsigned char)123;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (short)-20395;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (signed char)-66;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)192 : (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned short)39314;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -6818562904664116526LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 18340381381172026884ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = 2034522052757648163LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 324479616;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1211386110214255590LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (short)-20258 : (short)-11934;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 8573459737756961522LL : -394308717713914348LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)165;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = 8991139801567894476LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_47 [i_0] = (unsigned short)60357;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_55 [i_0] [i_1] [i_2] = -8323799981625244451LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
}

void checksum() {
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
    hash(&seed, var_65);
    hash(&seed, var_66);
    hash(&seed, var_67);
    hash(&seed, var_68);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
