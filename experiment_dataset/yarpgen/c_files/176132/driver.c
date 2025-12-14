#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-113;
unsigned long long int var_1 = 13595507251483647717ULL;
unsigned int var_2 = 2115553687U;
short var_3 = (short)7226;
short var_4 = (short)-5315;
unsigned short var_5 = (unsigned short)33425;
unsigned long long int var_6 = 8957058892897438277ULL;
signed char var_7 = (signed char)-73;
short var_8 = (short)26740;
signed char var_9 = (signed char)-35;
unsigned long long int var_10 = 3918744703349780223ULL;
int zero = 0;
short var_11 = (short)-4061;
int var_12 = -1313797772;
unsigned short var_13 = (unsigned short)2452;
unsigned long long int var_14 = 13578523577816771436ULL;
unsigned long long int var_15 = 9811237014825936564ULL;
unsigned short var_16 = (unsigned short)18167;
unsigned int var_17 = 3099518124U;
long long int var_18 = -2512492969085619026LL;
short var_19 = (short)22604;
unsigned short var_20 = (unsigned short)34552;
int var_21 = -2089384336;
long long int var_22 = 4948243725146098956LL;
short var_23 = (short)-17217;
unsigned short var_24 = (unsigned short)5337;
unsigned int var_25 = 2525658495U;
signed char var_26 = (signed char)-80;
unsigned long long int var_27 = 6741463907080425344ULL;
long long int var_28 = -1739003086786098666LL;
unsigned int var_29 = 352390872U;
long long int var_30 = 5980045778465504090LL;
unsigned long long int var_31 = 8608359381653039916ULL;
unsigned short var_32 = (unsigned short)47844;
short var_33 = (short)-7970;
unsigned int var_34 = 2569888157U;
short var_35 = (short)-30711;
int var_36 = 247296853;
short var_37 = (short)9972;
unsigned short var_38 = (unsigned short)43623;
long long int var_39 = 5628237228683943564LL;
signed char var_40 = (signed char)-115;
short var_41 = (short)-5559;
signed char var_42 = (signed char)67;
long long int var_43 = 121539374385064809LL;
unsigned int var_44 = 3123909445U;
short var_45 = (short)24624;
short var_46 = (short)9264;
unsigned short var_47 = (unsigned short)54865;
long long int var_48 = 5615257525507407763LL;
unsigned short var_49 = (unsigned short)31106;
short var_50 = (short)-32008;
long long int var_51 = 8114042174831968373LL;
signed char var_52 = (signed char)-40;
short arr_0 [24] ;
short arr_1 [24] ;
signed char arr_3 [19] ;
long long int arr_4 [19] ;
unsigned long long int arr_5 [19] ;
signed char arr_6 [19] [19] ;
unsigned int arr_7 [19] ;
unsigned long long int arr_10 [19] [19] [19] [19] ;
unsigned int arr_11 [19] [19] [19] [19] ;
signed char arr_14 [19] ;
unsigned int arr_16 [19] [19] [19] [19] [19] [19] [19] ;
int arr_18 [19] [19] [19] [19] [19] ;
unsigned int arr_19 [19] [19] [19] [19] [19] [19] [19] ;
unsigned short arr_20 [19] [19] [19] [19] [19] [19] [19] ;
short arr_22 [19] [19] [19] [19] [19] [19] [19] ;
long long int arr_29 [10] ;
long long int arr_31 [10] ;
int arr_33 [10] [10] [10] ;
signed char arr_34 [10] ;
unsigned long long int arr_40 [10] ;
short arr_43 [10] ;
signed char arr_52 [10] [10] [10] ;
unsigned short arr_58 [10] [10] [10] ;
unsigned short arr_63 [10] [10] [10] [10] ;
unsigned int arr_65 [10] [10] [10] [10] ;
long long int arr_66 [10] ;
int arr_2 [24] ;
unsigned long long int arr_21 [19] [19] [19] [19] ;
long long int arr_24 [19] [19] [19] [19] [19] ;
unsigned long long int arr_25 [19] [19] [19] [19] [19] [19] ;
signed char arr_26 [19] ;
unsigned int arr_27 [19] ;
unsigned long long int arr_28 [19] [19] ;
int arr_35 [10] [10] ;
unsigned int arr_38 [10] [10] ;
signed char arr_44 [10] [10] ;
int arr_55 [10] ;
short arr_56 [10] ;
signed char arr_68 [10] ;
short arr_69 [10] [10] ;
signed char arr_72 [10] ;
long long int arr_79 [10] ;
unsigned int arr_87 [10] ;
short arr_88 [10] [10] ;
unsigned long long int arr_89 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)-19057;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)-9692;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (signed char)-35;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 5612171289555478057LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 7426160886337124005ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-57;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 1312948672U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 9640522758683550505ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 2029025968U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = (signed char)5;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_5 % 2 == 0) ? 525504751U : 323999284U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 1387593596 : -1929986244;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 2137636760U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)30139;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)-3616;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? -6590526875715721580LL : -8845455072445059820LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? 7795667860731069978LL : -8233501367160151994LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = -542384889;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_34 [i_0] = (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_40 [i_0] = 12665157237326950199ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_43 [i_0] = (short)-10766;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_52 [i_0] [i_1] [i_2] = (signed char)-121;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_58 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)25118 : (unsigned short)22274;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_63 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)57927 : (unsigned short)2406;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_65 [i_0] [i_1] [i_2] [i_3] = 94858543U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_66 [i_0] = (i_0 % 2 == 0) ? -4690347822262102394LL : -705206691090358016LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = -1698657854;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = 16831289328595217005ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = 2808628694656178436LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 14183702425841214494ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_26 [i_0] = (signed char)-115;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_27 [i_0] = 2815234380U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_28 [i_0] [i_1] = 3053231848413854770ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_35 [i_0] [i_1] = (i_0 % 2 == 0) ? -1739666350 : -1946512155;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_38 [i_0] [i_1] = (i_0 % 2 == 0) ? 3887071411U : 3475605212U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_44 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)57 : (signed char)-124;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_55 [i_0] = (i_0 % 2 == 0) ? -89707985 : -1522505834;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_56 [i_0] = (i_0 % 2 == 0) ? (short)7644 : (short)15918;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_68 [i_0] = (i_0 % 2 == 0) ? (signed char)103 : (signed char)19;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_69 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)23264 : (short)-16239;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_72 [i_0] = (i_0 % 2 == 0) ? (signed char)14 : (signed char)95;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_79 [i_0] = (i_0 % 2 == 0) ? 8467776864094109307LL : -7243596071273287754LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_87 [i_0] = (i_0 % 2 == 0) ? 3730937782U : 1170163762U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_88 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-9804 : (short)10315;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_89 [i_0] = (i_0 % 2 == 0) ? 146400326742069737ULL : 4226501707164317010ULL;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_35 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_38 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_44 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_55 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_56 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_68 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_69 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_72 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_79 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_87 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_88 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_89 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
