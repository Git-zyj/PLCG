#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11446432789269060996ULL;
unsigned short var_2 = (unsigned short)50310;
unsigned long long int var_4 = 1088476473459512051ULL;
signed char var_7 = (signed char)-90;
unsigned char var_8 = (unsigned char)250;
unsigned short var_9 = (unsigned short)26038;
signed char var_10 = (signed char)45;
int zero = 0;
signed char var_12 = (signed char)89;
unsigned short var_13 = (unsigned short)51841;
long long int var_14 = -6973703372971008014LL;
unsigned long long int var_15 = 16000211832232088863ULL;
unsigned short var_16 = (unsigned short)54460;
unsigned char var_17 = (unsigned char)30;
unsigned char var_18 = (unsigned char)37;
unsigned long long int var_19 = 8900651667633321300ULL;
unsigned long long int var_20 = 4956376894613788308ULL;
signed char var_21 = (signed char)-12;
long long int var_22 = 8215484486218716855LL;
unsigned char var_23 = (unsigned char)126;
unsigned short var_24 = (unsigned short)26931;
unsigned long long int var_25 = 12465508843800755080ULL;
unsigned short var_26 = (unsigned short)61968;
unsigned short var_27 = (unsigned short)22213;
unsigned long long int var_28 = 17157986390853023334ULL;
unsigned char var_29 = (unsigned char)109;
unsigned short var_30 = (unsigned short)46925;
unsigned short var_31 = (unsigned short)27592;
signed char var_32 = (signed char)51;
unsigned char var_33 = (unsigned char)162;
unsigned long long int var_34 = 11757633474621313285ULL;
unsigned short var_35 = (unsigned short)17181;
unsigned long long int var_36 = 6375681214616904036ULL;
long long int var_37 = 4363852577582763915LL;
unsigned short var_38 = (unsigned short)45947;
signed char var_39 = (signed char)-47;
long long int var_40 = -34220326947329303LL;
signed char var_41 = (signed char)71;
long long int var_42 = -3651543883698182572LL;
unsigned char var_43 = (unsigned char)237;
unsigned short var_44 = (unsigned short)18165;
unsigned short var_45 = (unsigned short)35851;
unsigned char var_46 = (unsigned char)189;
unsigned long long int arr_2 [19] [19] ;
unsigned short arr_3 [19] ;
unsigned long long int arr_4 [19] ;
long long int arr_5 [19] [19] ;
unsigned char arr_6 [19] ;
unsigned long long int arr_7 [19] ;
long long int arr_8 [19] [19] ;
unsigned long long int arr_10 [19] [19] ;
unsigned char arr_14 [19] [19] [19] [19] [19] ;
unsigned long long int arr_19 [19] [19] [19] [19] ;
unsigned short arr_22 [19] [19] [19] [19] ;
unsigned short arr_23 [19] ;
unsigned long long int arr_25 [19] [19] [19] ;
unsigned short arr_26 [19] [19] [19] ;
unsigned short arr_29 [19] [19] [19] [19] ;
unsigned char arr_30 [19] [19] [19] ;
signed char arr_16 [19] [19] [19] [19] ;
signed char arr_17 [19] [19] [19] [19] [19] [19] ;
long long int arr_24 [19] [19] [19] [19] ;
long long int arr_31 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 9572687893770542176ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)28864;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 15371670420049499936ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = -6586217178118457358LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 6715222690545096266ULL : 4179448084827153660ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = -5930513770814726336LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = 774154700468728381ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 2770024514735291703ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (unsigned short)10437;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_23 [i_0] = (unsigned short)58774;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = 9197534786579178709ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (unsigned short)13749;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (unsigned short)62128;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)97 : (unsigned char)100;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (signed char)46;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-28;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = -8325926366671481960LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_31 [i_0] [i_1] = 4388774112036968613LL;
}

void checksum() {
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
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
