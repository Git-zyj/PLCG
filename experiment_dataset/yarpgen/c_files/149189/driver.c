#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3234345896U;
int var_2 = -1565933212;
unsigned int var_4 = 2341845474U;
unsigned int var_6 = 1929385522U;
unsigned short var_7 = (unsigned short)49605;
unsigned short var_8 = (unsigned short)37361;
unsigned short var_9 = (unsigned short)55092;
signed char var_10 = (signed char)-121;
int var_15 = -1988061413;
unsigned int var_17 = 2058667911U;
unsigned int var_18 = 1295508615U;
int zero = 0;
signed char var_19 = (signed char)-40;
signed char var_20 = (signed char)117;
signed char var_21 = (signed char)-122;
unsigned short var_22 = (unsigned short)23858;
int var_23 = -1968418378;
int var_24 = -2107399375;
signed char var_25 = (signed char)52;
int var_26 = 414248857;
unsigned short var_27 = (unsigned short)39483;
unsigned int var_28 = 2980907961U;
unsigned short var_29 = (unsigned short)47399;
unsigned short var_30 = (unsigned short)5208;
int var_31 = 560724138;
unsigned int var_32 = 3730940379U;
unsigned int var_33 = 586804963U;
unsigned int var_34 = 2649069710U;
unsigned int var_35 = 2712654838U;
signed char var_36 = (signed char)-124;
unsigned int var_37 = 725456347U;
unsigned short var_38 = (unsigned short)25228;
unsigned int var_39 = 2601457426U;
int var_40 = -2039500141;
unsigned int var_41 = 3069100652U;
unsigned int var_42 = 3118735443U;
unsigned int var_43 = 4015221399U;
unsigned int var_44 = 3617927318U;
unsigned short var_45 = (unsigned short)22513;
unsigned int var_46 = 3635491937U;
unsigned int var_47 = 2198560502U;
int var_48 = -777106602;
unsigned int var_49 = 661512675U;
int var_50 = 122347071;
int var_51 = 532551754;
signed char var_52 = (signed char)42;
unsigned short var_53 = (unsigned short)37889;
unsigned int var_54 = 3021794622U;
unsigned int var_55 = 2900039619U;
signed char var_56 = (signed char)-19;
unsigned int var_57 = 1491064600U;
signed char var_58 = (signed char)-103;
unsigned int var_59 = 2433219456U;
unsigned short var_60 = (unsigned short)3897;
unsigned int var_61 = 121478380U;
unsigned short arr_1 [18] [18] ;
int arr_2 [18] [18] [18] ;
int arr_3 [18] [18] [18] ;
unsigned int arr_5 [18] [18] [18] [18] ;
unsigned int arr_6 [18] [18] ;
int arr_7 [18] [18] ;
unsigned short arr_9 [18] ;
unsigned int arr_10 [18] [18] [18] ;
unsigned int arr_15 [18] ;
unsigned int arr_16 [18] ;
unsigned int arr_19 [18] [18] [18] [18] ;
unsigned int arr_20 [18] ;
unsigned int arr_21 [18] ;
int arr_23 [18] [18] [18] [18] ;
unsigned int arr_28 [18] [18] [18] [18] [18] ;
unsigned short arr_30 [18] [18] [18] [18] [18] [18] ;
int arr_8 [18] [18] ;
int arr_36 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)6281;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -2101160240 : -934630420;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -883386613;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 3274174220U : 3485113945U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = 2172476875U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? -1332005441 : 1709539763;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (unsigned short)1994;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1454762922U : 725837187U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = 1138473755U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = 1016305536U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 1035228101U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = 1044637937U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_21 [i_0] = 2414215998U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = 238109712;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = 1281996774U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (unsigned short)9440 : (unsigned short)46085;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 69076033 : 520914503;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 95036956 : 935637974;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_36 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
