#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)31320;
signed char var_2 = (signed char)-117;
signed char var_3 = (signed char)-76;
_Bool var_4 = (_Bool)1;
int var_5 = -1496287959;
_Bool var_6 = (_Bool)1;
long long int var_7 = 3102976507966229259LL;
long long int var_8 = -8387853382117925461LL;
unsigned int var_9 = 1863263897U;
unsigned short var_10 = (unsigned short)29412;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)-2;
short var_14 = (short)-1990;
unsigned long long int var_15 = 10387134413188608523ULL;
int zero = 0;
unsigned int var_16 = 1684046920U;
short var_17 = (short)7413;
short var_18 = (short)21349;
unsigned long long int var_19 = 13317150577371484925ULL;
long long int var_20 = -1384206522293344027LL;
unsigned int var_21 = 4151351668U;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)136;
unsigned int var_24 = 3282449241U;
signed char var_25 = (signed char)-94;
int var_26 = 472045816;
unsigned short var_27 = (unsigned short)28526;
long long int var_28 = -8184367667038588383LL;
int var_29 = 917139217;
unsigned long long int var_30 = 2930870258681383729ULL;
unsigned int var_31 = 88984454U;
long long int var_32 = 4876643180774973224LL;
unsigned int var_33 = 3230762498U;
unsigned int var_34 = 1657443640U;
_Bool var_35 = (_Bool)1;
_Bool var_36 = (_Bool)1;
signed char var_37 = (signed char)32;
unsigned long long int var_38 = 4499790518246109752ULL;
unsigned int var_39 = 192988681U;
unsigned int var_40 = 3120564191U;
unsigned int var_41 = 914984018U;
signed char var_42 = (signed char)117;
unsigned long long int var_43 = 3884367505428083714ULL;
unsigned int var_44 = 767484285U;
unsigned long long int var_45 = 9511281811963699795ULL;
unsigned short var_46 = (unsigned short)11397;
unsigned int var_47 = 2267994230U;
unsigned int var_48 = 670449264U;
unsigned char var_49 = (unsigned char)222;
long long int var_50 = -6334821135335345104LL;
signed char var_51 = (signed char)-7;
unsigned int var_52 = 3240796958U;
_Bool var_53 = (_Bool)0;
long long int arr_0 [12] ;
unsigned char arr_7 [12] [12] [12] [12] ;
long long int arr_14 [12] [12] [12] [12] [12] ;
unsigned long long int arr_19 [13] [13] ;
unsigned short arr_20 [13] ;
signed char arr_28 [13] [13] [13] [13] [13] ;
long long int arr_29 [13] [13] [13] [13] [13] ;
unsigned long long int arr_32 [13] ;
unsigned long long int arr_33 [13] ;
long long int arr_34 [14] [14] ;
short arr_37 [25] ;
unsigned char arr_39 [25] ;
unsigned int arr_43 [25] [25] [25] ;
unsigned long long int arr_53 [25] [25] [25] [25] [25] ;
unsigned int arr_61 [25] [25] [25] ;
signed char arr_2 [12] ;
unsigned int arr_3 [12] ;
_Bool arr_15 [12] [12] [12] [12] ;
unsigned int arr_16 [12] [12] [12] [12] [12] [12] ;
short arr_17 [12] ;
long long int arr_18 [12] [12] ;
long long int arr_30 [13] [13] ;
unsigned long long int arr_42 [25] [25] ;
unsigned char arr_47 [25] ;
long long int arr_56 [25] [25] [25] [25] [25] ;
unsigned short arr_57 [25] [25] [25] [25] [25] ;
long long int arr_58 [25] ;
short arr_59 [25] [25] ;
signed char arr_63 [25] ;
short arr_67 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -4061425506820765373LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = -5021354380056881829LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_19 [i_0] [i_1] = 3202984037008716476ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_20 [i_0] = (unsigned short)54209;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)24;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = 8661336886646354473LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_32 [i_0] = 11630455209909924242ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_33 [i_0] = 6259561658716009602ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_34 [i_0] [i_1] = 3861676620403411192LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_37 [i_0] = (short)19425;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_39 [i_0] = (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = 1195188616U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_53 [i_0] [i_1] [i_2] [i_3] [i_4] = 12771140273162421351ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_61 [i_0] [i_1] [i_2] = 1137783944U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (signed char)-60;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 1602794645U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 3049540435U : 977221440U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = (short)-18538;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_18 [i_0] [i_1] = 7819139876932570040LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_30 [i_0] [i_1] = 755112376449666141LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_42 [i_0] [i_1] = 17312662653539697338ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_47 [i_0] = (unsigned char)110;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_56 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 7467225590862879688LL : -5606572372243645827LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_57 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (unsigned short)1525 : (unsigned short)30558;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_58 [i_0] = (i_0 % 2 == 0) ? 6069161695901301381LL : -8082704655891348981LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_59 [i_0] [i_1] = (short)-866;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_63 [i_0] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_67 [i_0] = (short)-29420;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_42 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_47 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        hash(&seed, arr_56 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        hash(&seed, arr_57 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_58 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_59 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_63 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_67 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
