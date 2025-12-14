#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5562648598879992481LL;
long long int var_1 = -1661603149738044353LL;
long long int var_2 = 7665384545005531732LL;
short var_3 = (short)17098;
unsigned long long int var_4 = 16766957860456361272ULL;
int var_6 = -273272310;
short var_7 = (short)12825;
int var_8 = 826254208;
long long int var_9 = 587671932481430777LL;
unsigned long long int var_10 = 12294655586608948672ULL;
short var_11 = (short)-26738;
int var_12 = -1022265440;
int zero = 0;
short var_13 = (short)31041;
unsigned int var_14 = 1900030947U;
short var_15 = (short)23012;
unsigned long long int var_16 = 2443029546789367072ULL;
short var_17 = (short)17663;
unsigned short var_18 = (unsigned short)46195;
short var_19 = (short)-21293;
short var_20 = (short)28296;
unsigned long long int var_21 = 13918587974384934052ULL;
unsigned char var_22 = (unsigned char)246;
unsigned char var_23 = (unsigned char)76;
short var_24 = (short)-20745;
int var_25 = 759174850;
int var_26 = 1548679241;
int var_27 = -2120202784;
unsigned char var_28 = (unsigned char)80;
unsigned int var_29 = 1416674280U;
unsigned short var_30 = (unsigned short)1034;
int var_31 = 1280505578;
int var_32 = 2131624068;
signed char var_33 = (signed char)53;
short var_34 = (short)4808;
signed char var_35 = (signed char)26;
unsigned long long int var_36 = 12363820588494230546ULL;
short var_37 = (short)-12798;
unsigned short var_38 = (unsigned short)58165;
long long int var_39 = -9053245157144988651LL;
int var_40 = 450771211;
int var_41 = -92193407;
int var_42 = 299713877;
unsigned int var_43 = 3436566868U;
signed char var_44 = (signed char)116;
int var_45 = -1802646609;
unsigned short var_46 = (unsigned short)21977;
short var_47 = (short)-11638;
long long int var_48 = 5175992115930077423LL;
int var_49 = 1089544434;
int var_50 = 1281802417;
int var_51 = 1429356593;
unsigned short var_52 = (unsigned short)53740;
unsigned long long int var_53 = 17267777440376459893ULL;
unsigned long long int var_54 = 8503140955456311313ULL;
int var_55 = 1394324728;
int var_56 = -1055637070;
int var_57 = -2098835306;
short var_58 = (short)29358;
unsigned int var_59 = 108224172U;
int var_60 = 1608045057;
unsigned char var_61 = (unsigned char)156;
unsigned char var_62 = (unsigned char)244;
unsigned int var_63 = 1436679985U;
unsigned int var_64 = 291156794U;
int var_65 = -2068357509;
unsigned long long int var_66 = 9594413416903295324ULL;
int arr_0 [13] ;
_Bool arr_1 [13] [13] ;
short arr_3 [17] ;
int arr_4 [17] ;
int arr_5 [17] [17] ;
short arr_6 [17] ;
long long int arr_7 [17] ;
int arr_8 [17] ;
int arr_9 [17] ;
unsigned short arr_10 [17] [17] [17] [17] ;
unsigned long long int arr_11 [17] [17] ;
unsigned char arr_12 [17] [17] [17] [17] [17] ;
signed char arr_13 [17] [17] [17] [17] [17] ;
long long int arr_14 [17] [17] [17] [17] [17] ;
_Bool arr_15 [17] [17] [17] [17] [17] ;
unsigned long long int arr_16 [15] ;
unsigned char arr_17 [15] [15] ;
signed char arr_18 [15] [15] ;
short arr_19 [15] ;
int arr_20 [15] ;
unsigned int arr_21 [15] ;
int arr_23 [15] ;
unsigned long long int arr_24 [15] ;
long long int arr_26 [15] ;
short arr_27 [15] [15] [15] [15] [15] [15] ;
short arr_30 [15] [15] [15] ;
int arr_34 [15] [15] [15] [15] [15] ;
short arr_36 [15] [15] [15] [15] [15] [15] [15] ;
unsigned short arr_37 [15] [15] [15] [15] [15] ;
short arr_38 [15] [15] [15] [15] [15] [15] [15] ;
unsigned short arr_39 [15] [15] [15] [15] [15] [15] ;
signed char arr_43 [15] [15] [15] [15] ;
int arr_44 [15] [15] [15] [15] [15] [15] ;
signed char arr_45 [15] [15] [15] [15] ;
int arr_47 [15] [15] [15] ;
unsigned int arr_67 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 699314978;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (short)5326;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = -1726298322;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = -1048156666;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (short)681;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = -8241971891552626676LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = -1757267851;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = -2029561533;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned short)42060;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 11375789818108031740ULL : 9970673313882092174ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)94;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)68;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = 7197768585167839923LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = 17783916154625983575ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-7 : (signed char)62;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (short)10558 : (short)-10098;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_20 [i_0] = -1116842466;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_21 [i_0] = 443601481U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_23 [i_0] = 954290536;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_24 [i_0] = 1393860929108980255ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_26 [i_0] = 6569537832356656834LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-6277;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (short)-15093;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] = 1049914411;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)28939;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)27680;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)-5770;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (unsigned short)6113 : (unsigned short)1430;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -324454629;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = (signed char)94;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = 81294761;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_67 [i_0] [i_1] [i_2] [i_3] = 1904414934U;
}

void checksum() {
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
