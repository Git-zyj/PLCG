#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11831566367878784021ULL;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 3192164472994726978ULL;
unsigned long long int var_4 = 5123875462244662194ULL;
unsigned long long int var_5 = 5226900136717596371ULL;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 9371141143228638689ULL;
unsigned long long int var_9 = 15827666905057568900ULL;
unsigned long long int var_10 = 4367408084644059285ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 12268518572964608301ULL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 5209027002382324925ULL;
unsigned long long int var_15 = 15340196048748711987ULL;
unsigned long long int var_16 = 426170144014300363ULL;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 1261055219521913192ULL;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 9517143912493867551ULL;
unsigned long long int var_23 = 11991531797618537378ULL;
unsigned long long int var_24 = 6537357559697175434ULL;
_Bool var_25 = (_Bool)0;
_Bool var_26 = (_Bool)1;
unsigned long long int var_27 = 9394696689334312351ULL;
unsigned long long int var_28 = 15172314696088088759ULL;
unsigned long long int var_29 = 1314832312675431180ULL;
unsigned long long int var_30 = 13299756553829227143ULL;
_Bool var_31 = (_Bool)0;
unsigned long long int var_32 = 11099118645142607768ULL;
unsigned long long int var_33 = 17659609563677826992ULL;
_Bool var_34 = (_Bool)1;
_Bool var_35 = (_Bool)1;
_Bool var_36 = (_Bool)1;
_Bool var_37 = (_Bool)1;
_Bool var_38 = (_Bool)1;
_Bool var_39 = (_Bool)1;
unsigned long long int var_40 = 11555196642656940762ULL;
unsigned long long int var_41 = 15471497309416201937ULL;
unsigned long long int var_42 = 16912096031071722706ULL;
_Bool var_43 = (_Bool)1;
_Bool arr_0 [19] ;
_Bool arr_1 [19] ;
unsigned long long int arr_2 [14] [14] ;
unsigned long long int arr_3 [14] ;
unsigned long long int arr_4 [14] [14] ;
unsigned long long int arr_5 [11] ;
unsigned long long int arr_6 [11] ;
_Bool arr_8 [11] ;
_Bool arr_10 [11] [11] [11] ;
_Bool arr_11 [11] ;
_Bool arr_12 [11] [11] [11] ;
unsigned long long int arr_13 [11] [11] [11] [11] ;
_Bool arr_15 [11] ;
_Bool arr_17 [11] ;
unsigned long long int arr_18 [11] ;
_Bool arr_19 [11] [11] [11] ;
unsigned long long int arr_20 [11] [11] [11] [11] ;
unsigned long long int arr_21 [11] [11] [11] [11] ;
_Bool arr_22 [11] [11] [11] [11] [11] ;
unsigned long long int arr_24 [11] [11] [11] ;
_Bool arr_27 [11] ;
unsigned long long int arr_28 [11] ;
_Bool arr_29 [11] [11] ;
_Bool arr_32 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 7991124635248042264ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 5725977896672550791ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 1374478104992564137ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 11158830787945402522ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 13157695135981989315ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 3050808183654285444ULL : 2006782864033365829ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_17 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_18 [i_0] = 3956819262525558923ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 6609538966959948989ULL : 12917529470742818908ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = 8282742716534127859ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 8110410132115583799ULL : 14680493600614501940ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? 8807870033212784737ULL : 14195022520487996814ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_29 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
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
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
