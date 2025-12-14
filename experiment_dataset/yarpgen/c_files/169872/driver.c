#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_3 = 782974979;
signed char var_4 = (signed char)121;
unsigned long long int var_5 = 4420772052046422867ULL;
long long int var_6 = -8993515126800895500LL;
long long int var_7 = -8174325318434513145LL;
unsigned short var_8 = (unsigned short)10712;
short var_9 = (short)13723;
signed char var_10 = (signed char)50;
unsigned long long int var_11 = 8849777998223579323ULL;
signed char var_12 = (signed char)7;
short var_13 = (short)-30431;
int zero = 0;
unsigned int var_14 = 3677840285U;
long long int var_15 = -6448304736887452210LL;
unsigned char var_16 = (unsigned char)36;
int var_17 = -877970079;
signed char var_18 = (signed char)109;
unsigned short var_19 = (unsigned short)32177;
long long int var_20 = 8823605092716931851LL;
signed char var_21 = (signed char)119;
int var_22 = -25197371;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)52161;
_Bool var_25 = (_Bool)1;
_Bool var_26 = (_Bool)0;
long long int var_27 = 7359808963533540561LL;
int var_28 = 1924361186;
signed char var_29 = (signed char)-16;
unsigned short var_30 = (unsigned short)27641;
unsigned short var_31 = (unsigned short)57394;
unsigned char var_32 = (unsigned char)27;
unsigned long long int var_33 = 15092850036482299634ULL;
_Bool var_34 = (_Bool)0;
unsigned long long int var_35 = 379357989628984685ULL;
int var_36 = -626581502;
unsigned char var_37 = (unsigned char)13;
unsigned long long int var_38 = 9493161512638998203ULL;
long long int var_39 = -3037074772854246462LL;
signed char var_40 = (signed char)116;
short var_41 = (short)24733;
signed char var_42 = (signed char)20;
unsigned short var_43 = (unsigned short)26294;
unsigned char var_44 = (unsigned char)195;
long long int var_45 = -3064100818755322007LL;
long long int var_46 = -3920216578908989858LL;
unsigned short var_47 = (unsigned short)40611;
long long int var_48 = 4647825556618032368LL;
unsigned short var_49 = (unsigned short)60073;
unsigned char var_50 = (unsigned char)62;
unsigned short var_51 = (unsigned short)38786;
signed char var_52 = (signed char)-3;
unsigned char var_53 = (unsigned char)13;
int var_54 = 1010674957;
signed char var_55 = (signed char)-118;
int var_56 = 1827818363;
_Bool var_57 = (_Bool)0;
unsigned short var_58 = (unsigned short)64500;
unsigned short var_59 = (unsigned short)49646;
unsigned char var_60 = (unsigned char)131;
unsigned long long int var_61 = 3322185823509515967ULL;
int var_62 = 2010430895;
unsigned long long int var_63 = 12266688633094558164ULL;
signed char var_64 = (signed char)-118;
unsigned short var_65 = (unsigned short)24267;
unsigned int var_66 = 124254689U;
long long int var_67 = 5754742513174944306LL;
signed char var_68 = (signed char)38;
long long int var_69 = -8265386664683884214LL;
short var_70 = (short)-3974;
signed char arr_2 [11] [11] ;
_Bool arr_3 [11] ;
unsigned long long int arr_4 [11] ;
unsigned int arr_7 [11] [11] [11] [11] ;
short arr_8 [11] [11] [11] ;
unsigned long long int arr_10 [11] [11] [11] [11] [11] [11] ;
unsigned char arr_14 [11] [11] ;
unsigned long long int arr_17 [11] [11] [11] [11] [11] ;
int arr_18 [11] [11] [11] [11] ;
unsigned char arr_21 [11] [11] [11] ;
int arr_24 [13] ;
unsigned char arr_25 [13] ;
short arr_26 [13] ;
unsigned long long int arr_27 [13] [13] [13] ;
unsigned char arr_28 [13] [13] [13] ;
long long int arr_29 [13] ;
short arr_31 [13] [13] [13] [13] ;
signed char arr_32 [13] ;
int arr_33 [13] ;
unsigned long long int arr_34 [16] [16] ;
unsigned short arr_35 [16] ;
unsigned short arr_37 [13] ;
unsigned int arr_38 [13] ;
int arr_40 [13] ;
unsigned short arr_42 [13] [13] [13] [13] ;
signed char arr_43 [13] ;
signed char arr_45 [13] [13] [13] [13] [13] [13] ;
unsigned long long int arr_47 [13] ;
unsigned short arr_48 [13] [13] [13] [13] [13] ;
unsigned long long int arr_49 [13] [13] [13] [13] ;
int arr_51 [13] [13] [13] [13] [13] [13] [13] ;
unsigned char arr_53 [13] [13] [13] [13] [13] [13] ;
unsigned short arr_54 [13] [13] [13] [13] [13] ;
unsigned int arr_55 [13] [13] [13] [13] [13] ;
long long int arr_59 [13] [13] ;
signed char arr_65 [13] [13] [13] ;
int arr_77 [16] ;
_Bool arr_82 [16] ;
unsigned int arr_84 [16] [16] [16] [16] ;
unsigned short arr_15 [11] [11] [11] [11] [11] ;
int arr_62 [13] [13] [13] ;
unsigned short arr_72 [13] [13] [13] [13] [13] [13] [13] ;
_Bool arr_91 [16] [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 8808214089096431515ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 3946745925U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)-27909;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 12157416776095573099ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)149;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = 2017791494504089294ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 1344689656;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_24 [i_0] = 1820008847;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_25 [i_0] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_26 [i_0] = (short)-24239;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = 15343590029036922573ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_29 [i_0] = 6170007947210637817LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (short)4040;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_32 [i_0] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_33 [i_0] = 1080977908;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_34 [i_0] [i_1] = 14312225044682058785ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_35 [i_0] = (unsigned short)13866;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_37 [i_0] = (unsigned short)46522;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_38 [i_0] = 399046663U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_40 [i_0] = 977045691;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)65404 : (unsigned short)28164;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_43 [i_0] = (signed char)29;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)20;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_47 [i_0] = 13854722225835148592ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_48 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)21078;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_49 [i_0] [i_1] [i_2] [i_3] = 17775947135904171605ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_4 % 2 == 0) ? -1796084616 : 1863349026;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_53 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_54 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (unsigned short)10278 : (unsigned short)14261;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_55 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 1819160821U : 2168651406U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_59 [i_0] [i_1] = 1971352054148750126LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_65 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)26 : (signed char)-95;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_77 [i_0] = -1106055163;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_82 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_84 [i_0] [i_1] [i_2] [i_3] = 2285107863U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned short)10058 : (unsigned short)25355;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_62 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 611951220 : 828637605;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_72 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? (unsigned short)31832 : (unsigned short)59908;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_91 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_62 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                hash(&seed, arr_72 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        hash(&seed, arr_91 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
