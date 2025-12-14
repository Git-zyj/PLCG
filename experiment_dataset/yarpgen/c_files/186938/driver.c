#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2036669466;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 367515230682202120ULL;
unsigned char var_3 = (unsigned char)31;
int var_4 = -2136985872;
short var_5 = (short)26522;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)-124;
int var_8 = -93378127;
unsigned long long int var_9 = 3077407900960825208ULL;
int var_10 = 1294260591;
int zero = 0;
short var_11 = (short)11174;
signed char var_12 = (signed char)52;
short var_13 = (short)7908;
unsigned short var_14 = (unsigned short)36314;
unsigned long long int var_15 = 18345980485479240615ULL;
_Bool var_16 = (_Bool)0;
long long int var_17 = -1542945803693875334LL;
signed char var_18 = (signed char)121;
unsigned int var_19 = 2481729377U;
int var_20 = 549568551;
unsigned long long int var_21 = 3411906906365931056ULL;
short var_22 = (short)19247;
int var_23 = -1644730429;
signed char var_24 = (signed char)-76;
signed char var_25 = (signed char)26;
signed char var_26 = (signed char)-36;
unsigned long long int var_27 = 1692806705287136987ULL;
short var_28 = (short)-7774;
int var_29 = 1554690938;
short var_30 = (short)-29634;
short var_31 = (short)23518;
long long int var_32 = -3184811500237668012LL;
long long int var_33 = -5628151868523347983LL;
int var_34 = -47754793;
int var_35 = -163979899;
unsigned long long int var_36 = 3005674214484558285ULL;
long long int var_37 = 827232540433205217LL;
unsigned long long int var_38 = 1805251692419595105ULL;
_Bool var_39 = (_Bool)1;
unsigned long long int var_40 = 6140569936849492676ULL;
unsigned long long int var_41 = 2201248196025285529ULL;
_Bool var_42 = (_Bool)0;
unsigned long long int var_43 = 16663138605118767242ULL;
int var_44 = -1222721098;
unsigned long long int var_45 = 6532562208971378726ULL;
short var_46 = (short)-25581;
unsigned int var_47 = 534720952U;
long long int var_48 = -8588544803937439208LL;
long long int var_49 = -1781418398911501898LL;
unsigned char var_50 = (unsigned char)43;
long long int var_51 = -2713035461256784381LL;
long long int var_52 = -1296543323632708915LL;
long long int var_53 = 5193565498039207984LL;
unsigned int var_54 = 4117636983U;
short var_55 = (short)-15304;
_Bool var_56 = (_Bool)1;
short var_57 = (short)18934;
unsigned long long int var_58 = 9771704503954774567ULL;
int var_59 = 79633205;
unsigned long long int var_60 = 15177229989217795888ULL;
short var_61 = (short)-11119;
int var_62 = 1738668044;
unsigned long long int var_63 = 7465572982644690465ULL;
unsigned int var_64 = 1837593419U;
unsigned char var_65 = (unsigned char)42;
signed char var_66 = (signed char)-122;
unsigned char arr_4 [14] [14] ;
unsigned long long int arr_5 [14] ;
unsigned char arr_6 [14] ;
unsigned int arr_7 [14] [14] ;
_Bool arr_8 [14] [14] ;
short arr_9 [14] [14] [14] [14] ;
_Bool arr_10 [14] [14] [14] [14] ;
int arr_11 [14] [14] [14] [14] ;
short arr_12 [14] [14] [14] [14] [14] [14] ;
unsigned int arr_13 [14] [14] [14] [14] ;
long long int arr_14 [14] [14] ;
short arr_17 [14] [14] [14] [14] ;
signed char arr_19 [17] ;
unsigned long long int arr_20 [17] ;
unsigned int arr_21 [23] ;
unsigned int arr_23 [11] ;
int arr_27 [11] ;
_Bool arr_30 [11] [11] [11] ;
unsigned int arr_32 [11] [11] [11] [11] [11] [11] ;
signed char arr_33 [11] ;
short arr_34 [11] [11] [11] [11] [11] ;
unsigned int arr_35 [11] ;
short arr_36 [11] [11] [11] [11] [11] ;
int arr_40 [11] [11] [11] ;
short arr_43 [11] ;
unsigned long long int arr_44 [11] ;
signed char arr_46 [11] [11] [11] [11] [11] ;
unsigned long long int arr_47 [11] [11] [11] [11] ;
short arr_48 [11] [11] [11] [11] [11] [11] [11] ;
long long int arr_52 [11] [11] [11] [11] [11] ;
int arr_63 [11] [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 11598512475537429568ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)174 : (unsigned char)180;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 1388516531U : 96230343U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)-11479;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = -548383908;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-6444;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 1396062358U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_14 [i_0] [i_1] = 1084844777893980771LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (short)1802;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = (signed char)59;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_20 [i_0] = 2414177500402291870ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_21 [i_0] = 3422945416U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? 509323423U : 1866780137U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_27 [i_0] = -886180937;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 2549817954U : 4167922597U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_33 [i_0] = (i_0 % 2 == 0) ? (signed char)114 : (signed char)-102;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (short)-29807 : (short)-9147;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_35 [i_0] = (i_0 % 2 == 0) ? 1013655440U : 407795109U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)14197;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = 667145811;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_43 [i_0] = (i_0 % 2 == 0) ? (short)30623 : (short)7207;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_44 [i_0] = (i_0 % 2 == 0) ? 9890082605422334621ULL : 8393941527090269150ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_46 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)42;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_47 [i_0] [i_1] [i_2] [i_3] = 9667294835476792414ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                arr_48 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)-8426;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_52 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 6308519777898678738LL : -4331585997567601728LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_63 [i_0] [i_1] [i_2] [i_3] [i_4] = 596587560;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
