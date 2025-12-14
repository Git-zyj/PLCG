#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-59;
unsigned long long int var_1 = 12139058049023180301ULL;
unsigned int var_2 = 1508320354U;
unsigned long long int var_3 = 6677809889470731011ULL;
int var_4 = -2042388223;
short var_5 = (short)27263;
short var_6 = (short)-7404;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)48;
unsigned long long int var_10 = 9897542974569187603ULL;
int zero = 0;
unsigned int var_11 = 3866739711U;
unsigned char var_12 = (unsigned char)123;
short var_13 = (short)-28494;
unsigned long long int var_14 = 10366607986338817754ULL;
unsigned long long int var_15 = 12395299739516273978ULL;
long long int var_16 = 3161551443439723470LL;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 1864863702U;
int var_19 = 1556413581;
unsigned long long int var_20 = 7892754203672575170ULL;
int var_21 = 1883822330;
unsigned short var_22 = (unsigned short)9413;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)1;
signed char var_25 = (signed char)7;
unsigned char var_26 = (unsigned char)188;
long long int var_27 = -7142788668173475932LL;
unsigned long long int var_28 = 7184197290473914685ULL;
signed char var_29 = (signed char)19;
unsigned long long int var_30 = 5017244546145181069ULL;
_Bool var_31 = (_Bool)0;
unsigned short var_32 = (unsigned short)36750;
long long int var_33 = 7480016918912058784LL;
_Bool var_34 = (_Bool)0;
unsigned short var_35 = (unsigned short)28066;
int var_36 = -732555705;
short var_37 = (short)-5939;
signed char var_38 = (signed char)-4;
signed char var_39 = (signed char)-49;
short var_40 = (short)28484;
unsigned int var_41 = 2323717190U;
_Bool var_42 = (_Bool)1;
unsigned char var_43 = (unsigned char)58;
unsigned int var_44 = 3105790378U;
unsigned short var_45 = (unsigned short)15701;
signed char var_46 = (signed char)-12;
unsigned char var_47 = (unsigned char)40;
int var_48 = -1262874638;
signed char var_49 = (signed char)-36;
_Bool var_50 = (_Bool)1;
signed char var_51 = (signed char)-105;
_Bool var_52 = (_Bool)1;
unsigned long long int var_53 = 2839123015762694337ULL;
_Bool var_54 = (_Bool)1;
unsigned long long int var_55 = 14908611651373284483ULL;
unsigned short var_56 = (unsigned short)45725;
unsigned char var_57 = (unsigned char)222;
short var_58 = (short)-19822;
unsigned char var_59 = (unsigned char)181;
unsigned char var_60 = (unsigned char)84;
signed char var_61 = (signed char)97;
signed char var_62 = (signed char)-115;
_Bool var_63 = (_Bool)0;
signed char var_64 = (signed char)100;
int var_65 = 1777968115;
unsigned int var_66 = 3030320482U;
short var_67 = (short)-20584;
long long int var_68 = 755705063126913303LL;
unsigned char var_69 = (unsigned char)228;
long long int var_70 = -5545332834819984740LL;
short var_71 = (short)9956;
_Bool var_72 = (_Bool)0;
signed char var_73 = (signed char)11;
signed char var_74 = (signed char)-36;
int var_75 = -710838278;
int var_76 = 1557988495;
long long int var_77 = -87356140769101137LL;
unsigned short var_78 = (unsigned short)40998;
short var_79 = (short)29476;
unsigned short var_80 = (unsigned short)52757;
_Bool var_81 = (_Bool)0;
short arr_1 [25] [25] ;
_Bool arr_3 [25] [25] ;
unsigned char arr_6 [25] [25] [25] ;
signed char arr_7 [25] [25] [25] [25] ;
_Bool arr_10 [25] [25] ;
unsigned short arr_12 [25] ;
_Bool arr_13 [25] [25] ;
long long int arr_14 [25] [25] [25] [25] [25] [25] ;
signed char arr_15 [25] [25] ;
unsigned char arr_18 [25] ;
_Bool arr_20 [25] [25] [25] [25] ;
long long int arr_21 [25] [25] [25] [25] [25] ;
signed char arr_22 [25] [25] [25] [25] [25] ;
short arr_24 [25] [25] [25] [25] [25] ;
int arr_25 [25] [25] [25] ;
unsigned char arr_26 [25] [25] [25] ;
long long int arr_27 [25] [25] [25] ;
_Bool arr_29 [25] ;
signed char arr_30 [25] [25] [25] [25] ;
int arr_31 [25] ;
unsigned short arr_34 [25] ;
unsigned int arr_35 [25] ;
long long int arr_36 [25] [25] [25] ;
unsigned char arr_40 [25] [25] [25] ;
unsigned char arr_41 [25] [25] [25] [25] [25] ;
unsigned long long int arr_42 [25] [25] [25] [25] [25] ;
short arr_43 [25] [25] [25] [25] [25] [25] ;
long long int arr_45 [25] [25] ;
unsigned int arr_49 [25] [25] ;
_Bool arr_50 [25] ;
signed char arr_51 [25] [25] ;
long long int arr_52 [25] [25] [25] [25] ;
int arr_53 [25] [25] [25] [25] ;
unsigned short arr_57 [25] [25] [25] [25] [25] ;
int arr_61 [25] [25] [25] [25] ;
signed char arr_65 [25] [25] [25] [25] [25] ;
unsigned char arr_71 [25] [25] [25] [25] [25] ;
unsigned char arr_73 [25] [25] [25] [25] ;
signed char arr_74 [25] [25] [25] [25] [25] [25] ;
int arr_80 [25] [25] ;
unsigned int arr_90 [25] [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-18690;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)100;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (unsigned short)7602;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 7372798897655048112LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_15 [i_0] [i_1] = (signed char)-59;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_18 [i_0] = (unsigned char)104;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = 5586721806106064300LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-82;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)2331;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = 23387915;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (unsigned char)113;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = 3416036520811214281LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? 730096915 : -2046001810;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_34 [i_0] = (unsigned short)25117;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_35 [i_0] = 232144352U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -4062586845124736575LL : 7071983570894406143LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)156 : (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 17074544859027719734ULL : 5399186226556611173ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)15606;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_45 [i_0] [i_1] = -3052699370313784528LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_49 [i_0] [i_1] = 2933469380U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_50 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_51 [i_0] [i_1] = (signed char)116;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_52 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -8943375958839162169LL : 8783549483368397393LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_53 [i_0] [i_1] [i_2] [i_3] = 1596142820;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_57 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (unsigned short)53193 : (unsigned short)19777;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_61 [i_0] [i_1] [i_2] [i_3] = 433995546;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_65 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_71 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_73 [i_0] [i_1] [i_2] [i_3] = (unsigned char)49;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_74 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_80 [i_0] [i_1] = -1949686888;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_90 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 2876971509U : 1729319831U;
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
    hash(&seed, var_81);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
