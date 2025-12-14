#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1105694456U;
int var_2 = 652453089;
unsigned int var_3 = 146955199U;
_Bool var_4 = (_Bool)1;
int var_5 = -249347594;
short var_6 = (short)29922;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)14;
unsigned char var_9 = (unsigned char)40;
unsigned int var_10 = 2949901654U;
int zero = 0;
long long int var_11 = 8877266170813592049LL;
long long int var_12 = -8374229135999861982LL;
signed char var_13 = (signed char)-27;
short var_14 = (short)-26690;
int var_15 = -1526393225;
unsigned long long int var_16 = 2324484339192127277ULL;
unsigned short var_17 = (unsigned short)44967;
long long int var_18 = 6473779404721887104LL;
_Bool var_19 = (_Bool)1;
int var_20 = 1951148911;
int var_21 = 1479693130;
long long int var_22 = 8175327717721104968LL;
unsigned char var_23 = (unsigned char)125;
unsigned short var_24 = (unsigned short)2280;
unsigned long long int var_25 = 8411661091594656874ULL;
signed char var_26 = (signed char)-8;
_Bool var_27 = (_Bool)0;
int var_28 = -1166025344;
_Bool var_29 = (_Bool)0;
_Bool var_30 = (_Bool)0;
long long int var_31 = 1160369144106419543LL;
unsigned int var_32 = 967799201U;
int var_33 = 1532451251;
short var_34 = (short)-9242;
short var_35 = (short)-5955;
_Bool var_36 = (_Bool)1;
int var_37 = 1501164223;
long long int var_38 = -7036692370207603936LL;
_Bool var_39 = (_Bool)1;
int var_40 = -729388970;
int var_41 = -526946397;
unsigned short var_42 = (unsigned short)20019;
long long int var_43 = -4316377187650949333LL;
int var_44 = -1819667416;
long long int var_45 = 5858169161646774937LL;
int var_46 = -213714409;
unsigned long long int var_47 = 7968119876262626619ULL;
_Bool var_48 = (_Bool)0;
_Bool var_49 = (_Bool)0;
unsigned long long int var_50 = 6488129628532916355ULL;
unsigned char var_51 = (unsigned char)215;
_Bool var_52 = (_Bool)0;
signed char var_53 = (signed char)73;
signed char arr_0 [17] [17] ;
signed char arr_1 [17] ;
_Bool arr_4 [11] ;
unsigned int arr_7 [11] ;
signed char arr_8 [11] [11] ;
long long int arr_9 [11] [11] ;
_Bool arr_13 [11] [11] [11] [11] ;
unsigned long long int arr_14 [11] [11] [11] [11] ;
short arr_15 [11] [11] [11] [11] [11] ;
unsigned long long int arr_19 [11] [11] [11] ;
unsigned long long int arr_27 [11] [11] [11] ;
unsigned char arr_30 [11] ;
short arr_36 [11] [11] [11] [11] ;
signed char arr_40 [11] ;
short arr_44 [11] [11] [11] [11] ;
unsigned long long int arr_46 [11] ;
int arr_58 [18] ;
signed char arr_59 [18] ;
short arr_60 [18] ;
unsigned int arr_61 [18] ;
unsigned long long int arr_62 [18] [18] ;
long long int arr_73 [18] [18] ;
short arr_77 [18] [18] [18] ;
int arr_78 [18] [18] [18] ;
unsigned int arr_84 [18] [18] [18] [18] [18] [18] ;
long long int arr_91 [15] ;
long long int arr_94 [15] [15] [15] [15] ;
long long int arr_2 [17] ;
unsigned char arr_3 [17] ;
long long int arr_18 [11] [11] [11] [11] [11] [11] ;
unsigned int arr_23 [11] ;
_Bool arr_47 [11] [11] ;
_Bool arr_50 [11] [11] ;
unsigned short arr_53 [11] ;
long long int arr_67 [18] ;
unsigned long long int arr_86 [18] [18] [18] [18] [18] ;
unsigned short arr_87 [18] [18] ;
int arr_97 [15] [15] ;
int arr_105 [15] [15] ;
signed char arr_110 [15] [15] [15] ;
unsigned long long int arr_111 [15] [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)17;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 3185613992U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)1 : (signed char)-37;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = 4216938346649355130LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 16624210396240885122ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-21265;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 1763189707945826957ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 4958161442104504932ULL : 4524785025544348620ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? (unsigned char)107 : (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = (short)-11559;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_40 [i_0] = (signed char)63;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_44 [i_0] [i_1] [i_2] [i_3] = (short)-27556;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_46 [i_0] = 4472117127787967652ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_58 [i_0] = 1157215293;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_59 [i_0] = (signed char)-29;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_60 [i_0] = (i_0 % 2 == 0) ? (short)7262 : (short)-8320;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_61 [i_0] = (i_0 % 2 == 0) ? 1742082730U : 2765867939U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_62 [i_0] [i_1] = 3342081915175867925ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_73 [i_0] [i_1] = 4207588549246099348LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_77 [i_0] [i_1] [i_2] = (short)15765;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_78 [i_0] [i_1] [i_2] = 714977760;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_84 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3315847919U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_91 [i_0] = 1136316772776438955LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_94 [i_0] [i_1] [i_2] [i_3] = 3617073486431800586LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -7460598794850114340LL : -3540838399591351718LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)209 : (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? -9071079372195382881LL : -4183130003455719457LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? 4019788640U : 3294714423U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_47 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_50 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_53 [i_0] = (i_0 % 2 == 0) ? (unsigned short)22311 : (unsigned short)14914;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_67 [i_0] = (i_0 % 2 == 0) ? 8051217871127874272LL : -489058335947928439LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_86 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 11312387720794574635ULL : 7283660897080048309ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_87 [i_0] [i_1] = (unsigned short)4568;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_97 [i_0] [i_1] = (i_0 % 2 == 0) ? 1120912268 : -1237962508;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_105 [i_0] [i_1] = (i_0 % 2 == 0) ? -588570608 : 525313161;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_110 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)85 : (signed char)-105;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_111 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 1018869474238325389ULL : 787569632076215661ULL;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_47 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_50 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_53 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_67 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        hash(&seed, arr_86 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_87 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_97 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_105 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_110 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        hash(&seed, arr_111 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
