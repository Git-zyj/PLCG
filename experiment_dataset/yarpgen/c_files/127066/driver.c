#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1616662549;
_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)110;
long long int var_4 = 464484135852953373LL;
unsigned short var_5 = (unsigned short)10661;
int var_6 = -1708409969;
unsigned int var_7 = 2852173008U;
unsigned int var_8 = 3939302619U;
int var_9 = 261481178;
unsigned char var_10 = (unsigned char)160;
unsigned short var_11 = (unsigned short)25535;
unsigned int var_12 = 2554283081U;
int var_13 = 899935727;
signed char var_14 = (signed char)-1;
unsigned char var_15 = (unsigned char)48;
int zero = 0;
signed char var_17 = (signed char)-95;
unsigned long long int var_18 = 7365319117264112182ULL;
long long int var_19 = -7377057656974806885LL;
signed char var_20 = (signed char)70;
int var_21 = 854633947;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)10663;
int var_24 = 1780987583;
unsigned char var_25 = (unsigned char)87;
int var_26 = -1806582102;
int var_27 = -869332448;
signed char var_28 = (signed char)116;
unsigned long long int var_29 = 5457720650494182829ULL;
unsigned short var_30 = (unsigned short)37416;
signed char var_31 = (signed char)-104;
unsigned char var_32 = (unsigned char)223;
unsigned long long int var_33 = 16518454822545818676ULL;
unsigned int var_34 = 882270344U;
long long int var_35 = -7403418281759612299LL;
unsigned char var_36 = (unsigned char)82;
unsigned int var_37 = 4004388314U;
unsigned int var_38 = 3361101112U;
unsigned short var_39 = (unsigned short)28095;
short var_40 = (short)12299;
unsigned int var_41 = 3882472U;
long long int var_42 = 101304360935527882LL;
long long int var_43 = 3404011562503143550LL;
long long int var_44 = 6684780531975005758LL;
int var_45 = 1673664419;
_Bool var_46 = (_Bool)0;
unsigned char var_47 = (unsigned char)224;
unsigned char var_48 = (unsigned char)58;
short var_49 = (short)29441;
unsigned char var_50 = (unsigned char)80;
unsigned short var_51 = (unsigned short)30280;
int var_52 = 19351482;
int var_53 = 1675401679;
signed char var_54 = (signed char)66;
unsigned short var_55 = (unsigned short)13299;
unsigned short var_56 = (unsigned short)24182;
unsigned short var_57 = (unsigned short)2035;
unsigned short var_58 = (unsigned short)32904;
int var_59 = 926651060;
signed char var_60 = (signed char)35;
unsigned long long int var_61 = 14902470269839075412ULL;
unsigned int var_62 = 114861859U;
unsigned int var_63 = 2514690310U;
_Bool var_64 = (_Bool)1;
unsigned char var_65 = (unsigned char)210;
unsigned short var_66 = (unsigned short)14416;
unsigned char var_67 = (unsigned char)5;
long long int var_68 = 78243462506854851LL;
long long int var_69 = 1855811912129383229LL;
long long int var_70 = -6940896848493538572LL;
int var_71 = 155355235;
unsigned int var_72 = 1389672677U;
short var_73 = (short)-6298;
unsigned short var_74 = (unsigned short)46606;
_Bool var_75 = (_Bool)0;
unsigned short var_76 = (unsigned short)6096;
unsigned long long int arr_4 [24] ;
unsigned int arr_34 [24] [24] [24] ;
long long int arr_39 [24] [24] ;
unsigned int arr_40 [24] [24] [24] [24] ;
unsigned char arr_50 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 13115686038377083111ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 854483928U : 218695318U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_39 [i_0] [i_1] = (i_0 % 2 == 0) ? -3797018662285653418LL : 2773505143840545568LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 434110075U : 3211017602U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_50 [i_0] = (i_0 % 2 == 0) ? (unsigned char)221 : (unsigned char)135;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_34 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_39 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_40 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_50 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
