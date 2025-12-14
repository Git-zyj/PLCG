#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-45;
unsigned long long int var_1 = 5738048595974951044ULL;
short var_2 = (short)-21006;
short var_3 = (short)7670;
long long int var_4 = -9051175924015243998LL;
long long int var_5 = 2660413097267447293LL;
int var_6 = -2127180560;
short var_8 = (short)13198;
int var_9 = 1984081423;
unsigned int var_10 = 1994787442U;
unsigned long long int var_11 = 10601185005015943733ULL;
short var_12 = (short)-22687;
short var_13 = (short)21672;
unsigned int var_14 = 1891663729U;
short var_15 = (short)-31953;
_Bool var_16 = (_Bool)0;
int var_18 = 1028226002;
short var_19 = (short)24142;
int zero = 0;
int var_20 = 1826335162;
short var_21 = (short)1468;
int var_22 = -2090702677;
unsigned int var_23 = 2491187604U;
unsigned char var_24 = (unsigned char)13;
signed char var_25 = (signed char)69;
_Bool var_26 = (_Bool)0;
signed char var_27 = (signed char)74;
short var_28 = (short)-928;
signed char var_29 = (signed char)50;
short var_30 = (short)-25374;
int var_31 = 457006176;
unsigned long long int var_32 = 17940242864218688630ULL;
unsigned int var_33 = 2838973287U;
unsigned int var_34 = 2623662049U;
short var_35 = (short)27249;
unsigned int var_36 = 1837526911U;
unsigned int var_37 = 4176407696U;
unsigned long long int var_38 = 1175894078040272133ULL;
int var_39 = 259706456;
unsigned long long int var_40 = 11948747876724002440ULL;
short var_41 = (short)-21944;
unsigned long long int var_42 = 8474637711034491926ULL;
unsigned long long int var_43 = 403109047175471952ULL;
signed char var_44 = (signed char)-59;
unsigned char var_45 = (unsigned char)187;
unsigned long long int var_46 = 3581117297828298260ULL;
int var_47 = 1796965878;
unsigned long long int var_48 = 5555605726447256019ULL;
short var_49 = (short)5968;
signed char var_50 = (signed char)12;
unsigned int var_51 = 447769425U;
int var_52 = -37459867;
unsigned long long int var_53 = 6014943524425651178ULL;
short var_54 = (short)-11662;
signed char var_55 = (signed char)34;
long long int var_56 = 3139901674436672497LL;
unsigned long long int var_57 = 16754619102339430064ULL;
long long int var_58 = -5919349209814763044LL;
unsigned int var_59 = 3308494246U;
short var_60 = (short)-14175;
int var_61 = 1060370368;
signed char var_62 = (signed char)-60;
unsigned int var_63 = 1297540225U;
signed char var_64 = (signed char)-29;
int var_65 = -1021439993;
short var_66 = (short)-6220;
unsigned int var_67 = 3655765642U;
unsigned long long int var_68 = 7130356306481688096ULL;
unsigned int var_69 = 2227894304U;
unsigned int arr_0 [16] [16] ;
short arr_1 [16] ;
unsigned short arr_2 [16] ;
long long int arr_3 [16] ;
unsigned long long int arr_4 [13] ;
unsigned short arr_5 [13] ;
long long int arr_6 [13] [13] ;
short arr_8 [13] ;
signed char arr_9 [13] ;
int arr_10 [13] ;
signed char arr_11 [13] [13] ;
unsigned int arr_12 [13] [13] [13] [13] [13] [13] ;
short arr_16 [13] [13] [13] [13] [13] [13] ;
signed char arr_18 [13] [13] [13] ;
short arr_22 [13] [13] [13] [13] [13] [13] ;
unsigned long long int arr_24 [13] [13] [13] [13] [13] [13] ;
unsigned short arr_28 [13] [13] [13] [13] ;
unsigned int arr_29 [13] [13] [13] [13] [13] ;
_Bool arr_31 [13] [13] [13] [13] [13] ;
unsigned short arr_33 [13] [13] [13] [13] [13] ;
unsigned int arr_34 [13] [13] [13] [13] ;
unsigned long long int arr_36 [13] ;
short arr_37 [13] [13] [13] [13] [13] [13] ;
unsigned char arr_38 [13] [13] [13] [13] [13] [13] ;
_Bool arr_49 [13] [13] [13] [13] [13] [13] [13] ;
unsigned char arr_52 [24] ;
long long int arr_53 [24] [24] [24] ;
long long int arr_54 [24] [24] [24] ;
short arr_55 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 3362012118U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)6453;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)33805;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -2209509351416227048LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 2591904322719192361ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned short)65090;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? -3885693092942114640LL : -18443345037084172LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (short)-6395;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (signed char)52;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 1459933607 : -260495942;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)44;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2705153818U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (short)16807 : (short)-31693;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (signed char)98;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-16296;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 16387951442284877341ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (unsigned short)2112;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = 1381674360U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)21015;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = 2775885448U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_36 [i_0] = 6058936357922782601ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-306;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)134;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_49 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_52 [i_0] = (unsigned char)134;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_53 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1730497489196719082LL : -2799814316993825655LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_54 [i_0] [i_1] [i_2] = 7414619789042570625LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_55 [i_0] [i_1] [i_2] = (short)2320;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
