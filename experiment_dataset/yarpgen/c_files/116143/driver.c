#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-63;
unsigned int var_1 = 254389010U;
unsigned short var_2 = (unsigned short)3253;
short var_3 = (short)-23389;
int var_4 = 1994627133;
unsigned int var_5 = 3003519821U;
signed char var_6 = (signed char)120;
unsigned char var_7 = (unsigned char)221;
unsigned int var_8 = 1249465557U;
short var_9 = (short)-4934;
unsigned int var_10 = 989817045U;
unsigned short var_11 = (unsigned short)47187;
unsigned long long int var_12 = 3501865424047921632ULL;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 552564855238685744ULL;
int var_16 = 1412222243;
long long int var_17 = 5216454663089635374LL;
int zero = 0;
int var_18 = -972134713;
unsigned long long int var_19 = 17192779707313129452ULL;
short var_20 = (short)-5156;
short var_21 = (short)-21093;
short var_22 = (short)-20859;
int var_23 = 709940361;
long long int var_24 = -5723781420745762286LL;
unsigned char var_25 = (unsigned char)9;
unsigned int var_26 = 2282385220U;
_Bool var_27 = (_Bool)1;
unsigned short var_28 = (unsigned short)29903;
unsigned short var_29 = (unsigned short)12878;
unsigned char var_30 = (unsigned char)91;
int var_31 = -690452274;
long long int var_32 = 5514859666573364739LL;
int var_33 = -202039124;
unsigned short var_34 = (unsigned short)64027;
int var_35 = -342306026;
_Bool var_36 = (_Bool)0;
unsigned int var_37 = 545480474U;
unsigned char var_38 = (unsigned char)18;
int var_39 = 1957214829;
short var_40 = (short)2750;
unsigned int var_41 = 3364778118U;
unsigned short var_42 = (unsigned short)1726;
unsigned long long int var_43 = 17459814273916731177ULL;
unsigned char var_44 = (unsigned char)167;
int var_45 = -617436093;
int var_46 = 1702104314;
short var_47 = (short)22208;
long long int var_48 = -4998275935859754955LL;
unsigned char var_49 = (unsigned char)129;
short var_50 = (short)-31069;
_Bool var_51 = (_Bool)0;
unsigned char var_52 = (unsigned char)28;
_Bool var_53 = (_Bool)1;
long long int var_54 = -822351522954784177LL;
_Bool var_55 = (_Bool)1;
unsigned int var_56 = 4170206172U;
int var_57 = 1462387086;
unsigned short var_58 = (unsigned short)29056;
short var_59 = (short)-3628;
long long int var_60 = 5900709203602807157LL;
unsigned int var_61 = 2219376164U;
_Bool var_62 = (_Bool)1;
_Bool var_63 = (_Bool)1;
long long int var_64 = 6242580544767783727LL;
unsigned char var_65 = (unsigned char)142;
unsigned char var_66 = (unsigned char)57;
long long int var_67 = -2455773924728134776LL;
long long int var_68 = -263112474621937326LL;
unsigned short var_69 = (unsigned short)59426;
_Bool var_70 = (_Bool)1;
unsigned char var_71 = (unsigned char)92;
unsigned short var_72 = (unsigned short)10858;
unsigned long long int var_73 = 7515106885196392859ULL;
signed char var_74 = (signed char)-97;
unsigned int arr_0 [10] [10] ;
unsigned short arr_1 [10] ;
int arr_3 [10] ;
short arr_5 [10] ;
unsigned short arr_6 [10] ;
short arr_11 [10] [10] [10] [10] ;
unsigned int arr_20 [10] [10] [10] [10] [10] [10] ;
_Bool arr_23 [10] [10] [10] ;
unsigned short arr_31 [10] [10] ;
short arr_35 [10] [10] [10] ;
long long int arr_39 [10] ;
unsigned int arr_40 [10] [10] [10] ;
long long int arr_44 [11] ;
short arr_45 [11] [11] ;
long long int arr_46 [23] ;
short arr_47 [23] ;
unsigned long long int arr_48 [23] ;
short arr_51 [23] ;
_Bool arr_52 [23] ;
long long int arr_62 [23] [23] [23] ;
unsigned long long int arr_66 [23] [23] [23] [23] [23] ;
short arr_67 [23] [23] [23] [23] [23] [23] ;
int arr_68 [23] [23] [23] [23] [23] ;
short arr_71 [23] ;
long long int arr_75 [23] [23] [23] [23] [23] ;
unsigned long long int arr_76 [23] [23] [23] [23] [23] ;
short arr_83 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 702974678U : 2354787452U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)58789 : (unsigned short)18031;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 1648018475;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-13376 : (short)-21111;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned short)10958;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)-17993 : (short)-7342;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2502597907U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_31 [i_0] [i_1] = (unsigned short)30553;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (short)11499;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_39 [i_0] = (i_0 % 2 == 0) ? 4138512228127655225LL : 4755748603552722043LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = 488579705U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_44 [i_0] = -7133186751789836071LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_45 [i_0] [i_1] = (short)-1270;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_46 [i_0] = -1960798165057265886LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_47 [i_0] = (i_0 % 2 == 0) ? (short)-25128 : (short)-32636;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_48 [i_0] = 890426102129847349ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_51 [i_0] = (short)-5497;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_52 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_62 [i_0] [i_1] [i_2] = 6072644860971508943LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_66 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 5506181418977102811ULL : 14893656148625812418ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_67 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (short)26473 : (short)-27906;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_68 [i_0] [i_1] [i_2] [i_3] [i_4] = 399991691;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_71 [i_0] = (short)13492;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_75 [i_0] [i_1] [i_2] [i_3] [i_4] = 452728749829119733LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_76 [i_0] [i_1] [i_2] [i_3] [i_4] = 13167053590815775429ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_83 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-26972 : (short)5290;
}

void checksum() {
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
    hash(&seed, var_69);
    hash(&seed, var_70);
    hash(&seed, var_71);
    hash(&seed, var_72);
    hash(&seed, var_73);
    hash(&seed, var_74);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
