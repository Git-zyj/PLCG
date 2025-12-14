#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2495990537U;
unsigned char var_1 = (unsigned char)84;
long long int var_2 = 5960292588224116484LL;
short var_3 = (short)13393;
long long int var_4 = 8022266815424443005LL;
long long int var_5 = 7311899312005984212LL;
unsigned short var_6 = (unsigned short)18459;
_Bool var_7 = (_Bool)1;
long long int var_8 = -3358212989142285865LL;
int var_9 = -851577428;
unsigned short var_10 = (unsigned short)61820;
unsigned short var_11 = (unsigned short)4146;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)7494;
int zero = 0;
unsigned short var_14 = (unsigned short)18018;
int var_15 = 220732210;
long long int var_16 = 5511414262402575706LL;
unsigned short var_17 = (unsigned short)65274;
unsigned int var_18 = 2846037567U;
unsigned long long int var_19 = 17073886232699623596ULL;
unsigned char var_20 = (unsigned char)245;
int var_21 = -2041901641;
long long int var_22 = 7020432669060839662LL;
unsigned int var_23 = 1800423214U;
signed char var_24 = (signed char)16;
int var_25 = 1711596761;
unsigned short var_26 = (unsigned short)51929;
unsigned short var_27 = (unsigned short)11502;
unsigned long long int var_28 = 1019343498062508255ULL;
unsigned char var_29 = (unsigned char)169;
long long int var_30 = 1819993704197187428LL;
unsigned int var_31 = 3214221384U;
short var_32 = (short)27837;
signed char var_33 = (signed char)-117;
unsigned long long int var_34 = 5920385263937049499ULL;
signed char var_35 = (signed char)59;
unsigned short var_36 = (unsigned short)46963;
long long int var_37 = 7392485596105529056LL;
int var_38 = 1155441144;
unsigned short var_39 = (unsigned short)43094;
short var_40 = (short)30136;
signed char var_41 = (signed char)-74;
int var_42 = -1024462818;
_Bool var_43 = (_Bool)1;
signed char var_44 = (signed char)-61;
int var_45 = 1610617426;
int var_46 = 1305674179;
long long int var_47 = 1142992172891175860LL;
long long int var_48 = 8916326366157479056LL;
long long int var_49 = 7845968723476043658LL;
_Bool var_50 = (_Bool)0;
unsigned short var_51 = (unsigned short)45380;
unsigned short var_52 = (unsigned short)53068;
short var_53 = (short)24852;
short var_54 = (short)16768;
long long int var_55 = -7975036995100963179LL;
short var_56 = (short)-16916;
signed char var_57 = (signed char)119;
int var_58 = 899889822;
int var_59 = -1772722330;
unsigned short var_60 = (unsigned short)59488;
unsigned short var_61 = (unsigned short)51364;
signed char var_62 = (signed char)102;
unsigned short var_63 = (unsigned short)9609;
short var_64 = (short)-17785;
unsigned char var_65 = (unsigned char)240;
signed char var_66 = (signed char)76;
unsigned short var_67 = (unsigned short)44267;
unsigned short var_68 = (unsigned short)64054;
int var_69 = 230619764;
int var_70 = -376993440;
int var_71 = -1327923447;
unsigned short var_72 = (unsigned short)11798;
signed char var_73 = (signed char)-46;
unsigned int arr_0 [24] [24] ;
int arr_1 [24] [24] ;
short arr_2 [13] ;
unsigned char arr_3 [13] ;
unsigned long long int arr_9 [13] [13] [13] [13] ;
unsigned short arr_11 [22] [22] ;
short arr_16 [22] [22] [22] ;
int arr_17 [22] ;
_Bool arr_18 [22] [22] ;
unsigned short arr_19 [22] [22] ;
unsigned int arr_27 [13] ;
long long int arr_30 [14] ;
unsigned short arr_31 [14] ;
unsigned long long int arr_32 [14] [14] ;
long long int arr_34 [14] [14] [14] ;
signed char arr_35 [14] [14] ;
unsigned int arr_37 [14] [14] [14] [14] ;
unsigned short arr_38 [14] [14] [14] ;
unsigned char arr_39 [14] [14] [14] [14] [14] [14] ;
long long int arr_44 [14] [14] [14] [14] ;
long long int arr_45 [14] ;
unsigned int arr_48 [14] [14] [14] [14] [14] [14] ;
short arr_55 [14] [14] [14] [14] [14] [14] ;
unsigned short arr_57 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_62 [14] [14] [14] [14] [14] [14] [14] ;
unsigned int arr_66 [14] [14] [14] [14] [14] ;
int arr_72 [14] [14] [14] [14] [14] ;
unsigned short arr_26 [11] ;
long long int arr_50 [14] [14] [14] [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 149589189U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 1528165310;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)26593;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned char)202;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 2699749783109104637ULL : 8720698887731145695ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)20641;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (short)1182;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? -248261950 : -638869101;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)50209 : (unsigned short)18295;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_27 [i_0] = 455774835U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? -8828922141529672378LL : 1572034842404133945LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_31 [i_0] = (unsigned short)3789;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_32 [i_0] [i_1] = (i_0 % 2 == 0) ? 15246475510699340412ULL : 325423170906048871ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = 1011671409540466861LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_35 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-82 : (signed char)123;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 3513995212U : 1006901393U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (unsigned short)16862;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_44 [i_0] [i_1] [i_2] [i_3] = -4487955467766715376LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_45 [i_0] = -6244733454093444235LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_48 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 186639520U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_55 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (short)-31310 : (short)18278;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_57 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)57269;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_62 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 6949982276925646780ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_66 [i_0] [i_1] [i_2] [i_3] [i_4] = 1397917480U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_72 [i_0] [i_1] [i_2] [i_3] [i_4] = -1637325366;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_26 [i_0] = (unsigned short)32063;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_1 % 2 == 0) ? 3689016111762272587LL : -5120461676898504407LL;
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
    hash(&seed, var_69);
    hash(&seed, var_70);
    hash(&seed, var_71);
    hash(&seed, var_72);
    hash(&seed, var_73);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                hash(&seed, arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
