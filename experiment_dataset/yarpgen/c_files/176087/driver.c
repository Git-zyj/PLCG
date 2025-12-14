#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -153826242850851570LL;
unsigned int var_1 = 2803021940U;
int var_2 = -1168012200;
signed char var_3 = (signed char)-120;
short var_4 = (short)23463;
unsigned int var_5 = 1842957646U;
int var_6 = 1577742329;
unsigned short var_7 = (unsigned short)2116;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 13693553225487894009ULL;
unsigned char var_10 = (unsigned char)225;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)32;
int var_13 = 1414112197;
unsigned int var_14 = 1294047294U;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-3210;
unsigned int var_17 = 482050840U;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 142241607U;
int var_20 = -1228194533;
unsigned long long int var_21 = 16056725387295320281ULL;
_Bool var_22 = (_Bool)0;
long long int var_23 = -2505660314955564099LL;
unsigned int var_24 = 3331278169U;
signed char var_25 = (signed char)73;
unsigned long long int var_26 = 7871457051230091556ULL;
unsigned int var_27 = 3712604713U;
unsigned int var_28 = 748261492U;
unsigned int var_29 = 3094988430U;
unsigned int var_30 = 1160802325U;
unsigned short var_31 = (unsigned short)31199;
long long int var_32 = -8269120019156930210LL;
signed char var_33 = (signed char)-19;
signed char var_34 = (signed char)107;
unsigned long long int var_35 = 1561800478011496136ULL;
unsigned long long int var_36 = 5789560416842456989ULL;
short var_37 = (short)-22933;
int var_38 = 590061646;
short var_39 = (short)-24277;
long long int var_40 = 3616381856973895136LL;
_Bool var_41 = (_Bool)0;
unsigned int var_42 = 2494087869U;
long long int var_43 = -4296385987825113692LL;
int var_44 = -1492521390;
signed char var_45 = (signed char)-87;
unsigned int var_46 = 1439631406U;
unsigned short var_47 = (unsigned short)5799;
long long int var_48 = 2871724958170445433LL;
_Bool var_49 = (_Bool)0;
signed char var_50 = (signed char)67;
int var_51 = 65039369;
unsigned long long int var_52 = 8495638292733017778ULL;
signed char var_53 = (signed char)95;
_Bool var_54 = (_Bool)1;
signed char var_55 = (signed char)-93;
short var_56 = (short)27549;
unsigned short var_57 = (unsigned short)45162;
unsigned char var_58 = (unsigned char)241;
unsigned short var_59 = (unsigned short)53871;
int var_60 = 248522387;
int var_61 = -847845975;
unsigned int var_62 = 29706850U;
signed char var_63 = (signed char)105;
int var_64 = -1922191097;
short var_65 = (short)-23420;
unsigned int var_66 = 4008724259U;
signed char var_67 = (signed char)-99;
_Bool var_68 = (_Bool)0;
short var_69 = (short)698;
_Bool var_70 = (_Bool)1;
unsigned int var_71 = 667829300U;
unsigned int var_72 = 3958174381U;
unsigned long long int var_73 = 16174961455921487994ULL;
int var_74 = -86101700;
int var_75 = -695418102;
int var_76 = -2006131534;
int var_77 = -558845055;
unsigned int var_78 = 4277089547U;
int var_79 = -1101839968;
unsigned long long int var_80 = 6221049489043983556ULL;
unsigned int arr_0 [21] [21] ;
unsigned int arr_1 [21] ;
short arr_2 [21] ;
short arr_3 [18] ;
unsigned short arr_4 [18] ;
unsigned char arr_5 [18] ;
_Bool arr_6 [18] [18] ;
unsigned int arr_8 [18] ;
long long int arr_9 [18] [18] ;
signed char arr_11 [14] [14] ;
signed char arr_12 [14] [14] ;
long long int arr_13 [14] [14] ;
int arr_14 [14] ;
unsigned int arr_15 [14] ;
signed char arr_16 [14] [14] [14] ;
short arr_17 [14] [14] ;
unsigned int arr_18 [14] [14] ;
unsigned long long int arr_20 [14] [14] ;
short arr_21 [14] [14] [14] ;
int arr_22 [14] ;
_Bool arr_24 [14] [14] [14] [14] ;
unsigned int arr_25 [14] [14] ;
long long int arr_27 [14] [14] [14] [14] [14] ;
unsigned int arr_28 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_33 [14] [14] [14] [14] [14] ;
signed char arr_34 [14] [14] [14] [14] [14] ;
unsigned short arr_36 [14] [14] [14] ;
_Bool arr_38 [14] [14] [14] [14] [14] [14] [14] ;
signed char arr_39 [14] [14] [14] [14] [14] ;
int arr_44 [14] [14] [14] [14] ;
unsigned char arr_47 [14] [14] [14] [14] ;
_Bool arr_50 [14] [14] [14] ;
signed char arr_56 [14] [14] [14] [14] ;
unsigned int arr_63 [14] [14] [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 2677456680U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 3279774439U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-16563 : (short)-14350;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)11066 : (short)-4595;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned short)42005;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (unsigned char)75;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 1107090526U : 3821107891U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = 3296662737608105506LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)4 : (signed char)-37;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)27;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_13 [i_0] [i_1] = 6497807498818011279LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = 551590848;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 1802246321U : 3447104822U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (signed char)22;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-238 : (short)3356;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_18 [i_0] [i_1] = 94635796U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_20 [i_0] [i_1] = 4272524341249183153ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-24619 : (short)-15778;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 1417239810 : -1237966912;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_25 [i_0] [i_1] = 4009772758U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 3480148084483579128LL : 3150618696363566111LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 1265098315U : 1945872701U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] = 8801223189872168058ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (signed char)-55 : (signed char)105;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (unsigned short)10538;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-69;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_44 [i_0] [i_1] [i_2] [i_3] = -1416733108;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_47 [i_0] [i_1] [i_2] [i_3] = (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_50 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_56 [i_0] [i_1] [i_2] [i_3] = (signed char)-56;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_63 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2501010812U;
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
    hash(&seed, var_75);
    hash(&seed, var_76);
    hash(&seed, var_77);
    hash(&seed, var_78);
    hash(&seed, var_79);
    hash(&seed, var_80);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
