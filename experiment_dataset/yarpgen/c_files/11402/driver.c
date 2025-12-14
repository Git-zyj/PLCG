#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-49;
int var_3 = 1079782537;
unsigned int var_4 = 3013420705U;
signed char var_5 = (signed char)89;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)-98;
int var_8 = -1405004021;
unsigned int var_9 = 434963662U;
int var_10 = -1565676054;
long long int var_11 = -6889706489344061013LL;
unsigned int var_12 = 2640967994U;
int var_15 = -61769373;
int var_16 = -145263671;
signed char var_18 = (signed char)-112;
int zero = 0;
int var_20 = -1557428900;
unsigned short var_21 = (unsigned short)12711;
signed char var_22 = (signed char)17;
long long int var_23 = 6250225235913873984LL;
signed char var_24 = (signed char)54;
short var_25 = (short)-6422;
int var_26 = 1798746375;
int var_27 = 817315820;
unsigned long long int var_28 = 15657388865212254918ULL;
unsigned int var_29 = 3177711796U;
unsigned short var_30 = (unsigned short)53025;
_Bool var_31 = (_Bool)0;
int var_32 = 257204424;
unsigned long long int var_33 = 12545803310567430789ULL;
int var_34 = -527781752;
int var_35 = -776528185;
int var_36 = 511276940;
int var_37 = -1344755664;
_Bool var_38 = (_Bool)1;
int var_39 = 915900252;
long long int var_40 = 3153771387113335759LL;
signed char var_41 = (signed char)-106;
signed char var_42 = (signed char)81;
unsigned int var_43 = 3282384884U;
unsigned long long int var_44 = 15612430306269940370ULL;
signed char var_45 = (signed char)51;
signed char var_46 = (signed char)49;
unsigned int var_47 = 63417960U;
int var_48 = -133601965;
signed char var_49 = (signed char)-9;
short var_50 = (short)-24539;
long long int var_51 = 8692145894835465810LL;
short var_52 = (short)-25143;
signed char var_53 = (signed char)-67;
unsigned int var_54 = 1387780446U;
unsigned int var_55 = 2638950083U;
short var_56 = (short)-17557;
int var_57 = -1652109970;
unsigned short var_58 = (unsigned short)5542;
signed char var_59 = (signed char)101;
unsigned int var_60 = 2806140746U;
unsigned int var_61 = 3483390369U;
unsigned int var_62 = 3770175515U;
int var_63 = -1442863775;
short var_64 = (short)-8719;
_Bool var_65 = (_Bool)0;
_Bool var_66 = (_Bool)1;
unsigned int var_67 = 362959972U;
signed char var_68 = (signed char)-70;
unsigned int var_69 = 686386292U;
signed char var_70 = (signed char)-77;
int var_71 = 862105660;
signed char var_72 = (signed char)70;
int arr_0 [23] ;
unsigned long long int arr_2 [23] [23] ;
unsigned int arr_3 [23] [23] ;
int arr_4 [23] [23] ;
signed char arr_5 [23] [23] ;
unsigned int arr_6 [23] [23] [23] [23] ;
_Bool arr_8 [23] [23] [23] [23] ;
signed char arr_9 [23] [23] [23] ;
_Bool arr_10 [23] [23] [23] [23] ;
long long int arr_11 [23] [23] [23] [23] [23] [23] ;
_Bool arr_12 [23] [23] [23] [23] [23] [23] ;
_Bool arr_15 [10] ;
signed char arr_16 [10] ;
signed char arr_17 [16] ;
unsigned long long int arr_18 [16] ;
int arr_19 [16] [16] ;
unsigned int arr_20 [16] ;
long long int arr_21 [16] ;
signed char arr_22 [16] [16] ;
_Bool arr_23 [16] [16] ;
int arr_24 [16] [16] [16] ;
_Bool arr_28 [16] [16] [16] ;
unsigned long long int arr_29 [16] [16] [16] ;
int arr_30 [16] [16] ;
_Bool arr_31 [16] [16] [16] [16] ;
unsigned int arr_35 [16] [16] ;
long long int arr_41 [16] [16] [16] [16] ;
int arr_48 [16] [16] ;
signed char arr_52 [16] [16] [16] ;
short arr_53 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 537202205 : -1438447935;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 16684292528926338901ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 3577432089U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? -81438016 : 385565933;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2119659339U : 4081482848U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-68 : (signed char)57;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1985888226168192066LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_16 [i_0] = (signed char)107;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = (signed char)113;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 11510291626713625509ULL : 5336656547201904038ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_19 [i_0] [i_1] = -980587144;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = 3720132724U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_21 [i_0] = -4607807771843009682LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_22 [i_0] [i_1] = (signed char)10;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_23 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1126388048 : -333385592;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = 4746217413696423026ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_30 [i_0] [i_1] = 589970135;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_35 [i_0] [i_1] = 2402299278U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_41 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -1639987404950236578LL : 2910971404786020036LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_48 [i_0] [i_1] = -1099169676;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_52 [i_0] [i_1] [i_2] = (signed char)63;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_53 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-27777 : (short)11056;
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
    hash(&seed, var_65);
    hash(&seed, var_66);
    hash(&seed, var_67);
    hash(&seed, var_68);
    hash(&seed, var_69);
    hash(&seed, var_70);
    hash(&seed, var_71);
    hash(&seed, var_72);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
