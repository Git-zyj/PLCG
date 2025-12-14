#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1178263025759108066ULL;
long long int var_1 = 534884723115399758LL;
unsigned char var_2 = (unsigned char)103;
long long int var_3 = -2195973763589061215LL;
signed char var_4 = (signed char)5;
unsigned long long int var_5 = 5411539513196685543ULL;
unsigned int var_7 = 2347904520U;
unsigned int var_8 = 3406439482U;
unsigned long long int var_9 = 11655115722017259811ULL;
int zero = 0;
unsigned long long int var_11 = 17622457797080411893ULL;
unsigned int var_12 = 1392490467U;
unsigned long long int var_13 = 18268625058493346438ULL;
int var_14 = -1570356213;
unsigned long long int var_15 = 15301526197608336236ULL;
signed char var_16 = (signed char)1;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)80;
long long int var_19 = -5781116493354562813LL;
unsigned long long int var_20 = 11992236866571888061ULL;
long long int var_21 = 9074138573222609607LL;
long long int var_22 = -4408337924294409266LL;
unsigned long long int var_23 = 8110936035755746679ULL;
unsigned long long int var_24 = 10225582532042647703ULL;
signed char var_25 = (signed char)-70;
signed char var_26 = (signed char)-78;
unsigned long long int var_27 = 15061396175810237775ULL;
unsigned int var_28 = 3469871300U;
_Bool var_29 = (_Bool)1;
unsigned char var_30 = (unsigned char)50;
long long int var_31 = 2877591537389481129LL;
unsigned char var_32 = (unsigned char)223;
long long int var_33 = -3813261792511550908LL;
long long int var_34 = 5644761695307973410LL;
int var_35 = -1236859405;
unsigned long long int var_36 = 9524557857549764008ULL;
unsigned int var_37 = 2932039616U;
unsigned char var_38 = (unsigned char)189;
_Bool var_39 = (_Bool)1;
unsigned long long int arr_2 [15] ;
unsigned long long int arr_3 [15] [15] ;
long long int arr_5 [15] ;
long long int arr_8 [15] [15] ;
long long int arr_10 [15] ;
long long int arr_12 [15] [15] [15] [15] ;
unsigned char arr_21 [15] ;
unsigned long long int arr_23 [15] [15] ;
signed char arr_27 [15] [15] [15] [15] ;
signed char arr_29 [15] [15] [15] [15] ;
signed char arr_30 [15] [15] [15] [15] [15] ;
unsigned long long int arr_33 [15] [15] [15] [15] [15] [15] ;
unsigned int arr_35 [15] ;
signed char arr_39 [15] [15] [15] ;
unsigned char arr_42 [15] [15] [15] [15] [15] [15] ;
long long int arr_48 [15] [15] ;
unsigned long long int arr_61 [15] ;
unsigned char arr_65 [16] [16] ;
unsigned long long int arr_68 [16] [16] [16] ;
signed char arr_72 [16] [16] ;
unsigned long long int arr_13 [15] [15] ;
long long int arr_14 [15] [15] ;
unsigned long long int arr_24 [15] [15] [15] [15] [15] ;
_Bool arr_25 [15] [15] [15] [15] [15] [15] [15] ;
unsigned long long int arr_26 [15] [15] [15] [15] ;
unsigned long long int arr_31 [15] [15] [15] [15] ;
unsigned char arr_32 [15] [15] [15] [15] ;
signed char arr_43 [15] [15] [15] ;
unsigned long long int arr_44 [15] [15] [15] ;
signed char arr_45 [15] [15] [15] ;
unsigned long long int arr_50 [15] ;
unsigned long long int arr_51 [15] [15] [15] [15] ;
unsigned long long int arr_63 [15] ;
long long int arr_64 [15] ;
long long int arr_79 [16] [16] [16] [16] [16] ;
unsigned long long int arr_80 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 13554301625302170989ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 14444430876804087720ULL : 16735226689688949848ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -5894370808574846124LL : -154945487085333121LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? -1990667735509240551LL : -2273369938699542790LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = -3990372433023567528LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 8137712507761252020LL : 3236473988160022926LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (unsigned char)141 : (unsigned char)157;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_23 [i_0] [i_1] = 16256352897713646043ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)-47 : (signed char)-25;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)-15 : (signed char)-90;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-122;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1536764795464067893ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_35 [i_0] = 3713378103U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = (signed char)36;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_48 [i_0] [i_1] = 7952761081458307413LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_61 [i_0] = 11308898118759417561ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_65 [i_0] [i_1] = (unsigned char)53;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_68 [i_0] [i_1] [i_2] = 10602022194800383499ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_72 [i_0] [i_1] = (signed char)-71;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? 1919693119696973008ULL : 2161982267617672467ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? -3927659744768704147LL : -6871258045189350966LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 15970700875415723074ULL : 14438545970156617710ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 17063802240619293751ULL : 4799963184368630373ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 16120472934489822ULL : 16546578930919980566ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)91 : (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-110 : (signed char)95;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 9318511271929922892ULL : 2964460641169825154ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_45 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-100 : (signed char)57;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_50 [i_0] = (i_0 % 2 == 0) ? 4743836557536639472ULL : 13530465059023376616ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_51 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 9228011069663071780ULL : 13453130992663255148ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_63 [i_0] = (i_0 % 2 == 0) ? 10087899684142988539ULL : 3306869860281245813ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_64 [i_0] = (i_0 % 2 == 0) ? -1448591141780513259LL : -5302645648495144958LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_79 [i_0] [i_1] [i_2] [i_3] [i_4] = -4369474450511583441LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_80 [i_0] [i_1] [i_2] = 4344315738193385808ULL;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_31 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_32 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_43 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_44 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_45 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_50 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_51 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_63 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_64 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        hash(&seed, arr_79 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_80 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
