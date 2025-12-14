#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)22;
unsigned long long int var_7 = 12552284592433283599ULL;
unsigned long long int var_13 = 9035311780051180022ULL;
signed char var_14 = (signed char)-6;
unsigned long long int var_15 = 3534052481120797941ULL;
int zero = 0;
unsigned long long int var_16 = 13373702868586636140ULL;
unsigned long long int var_17 = 5880304221684200296ULL;
unsigned long long int var_18 = 4941800608099908720ULL;
signed char var_19 = (signed char)85;
signed char var_20 = (signed char)72;
_Bool var_21 = (_Bool)0;
int var_22 = 962129289;
unsigned long long int var_23 = 4821174390382299121ULL;
unsigned long long int var_24 = 6651249970688128799ULL;
_Bool var_25 = (_Bool)0;
unsigned long long int var_26 = 5513712769305270846ULL;
unsigned long long int var_27 = 16694376915326454496ULL;
unsigned char var_28 = (unsigned char)197;
unsigned long long int var_29 = 638571014114500125ULL;
unsigned long long int var_30 = 12978093441954298949ULL;
unsigned long long int var_31 = 9778676331189206046ULL;
signed char var_32 = (signed char)-11;
unsigned char var_33 = (unsigned char)164;
unsigned long long int var_34 = 13044198717271129113ULL;
int var_35 = 966417907;
unsigned long long int var_36 = 2529008997906695057ULL;
_Bool var_37 = (_Bool)1;
long long int var_38 = 8180571960290342440LL;
unsigned long long int var_39 = 3276662178664551264ULL;
unsigned long long int var_40 = 1869844404648816112ULL;
_Bool var_41 = (_Bool)0;
_Bool var_42 = (_Bool)1;
long long int var_43 = 2121002609194997540LL;
signed char var_44 = (signed char)8;
unsigned long long int var_45 = 7160941059364144583ULL;
signed char var_46 = (signed char)54;
long long int var_47 = -4847519595115412897LL;
signed char var_48 = (signed char)-43;
long long int var_49 = 8984827362039616879LL;
_Bool var_50 = (_Bool)1;
unsigned long long int var_51 = 11714225676728836532ULL;
_Bool var_52 = (_Bool)0;
_Bool var_53 = (_Bool)1;
unsigned char var_54 = (unsigned char)207;
unsigned long long int var_55 = 16643810300101091096ULL;
signed char var_56 = (signed char)84;
long long int var_57 = -2426239988100245907LL;
long long int var_58 = 1332984691664211776LL;
signed char var_59 = (signed char)59;
_Bool var_60 = (_Bool)1;
_Bool var_61 = (_Bool)0;
signed char var_62 = (signed char)-90;
unsigned char var_63 = (unsigned char)30;
unsigned char var_64 = (unsigned char)77;
unsigned long long int var_65 = 7494161442720576615ULL;
int var_66 = 762604144;
unsigned long long int var_67 = 2831357843542010098ULL;
unsigned long long int var_68 = 10555531891784486601ULL;
long long int var_69 = -3228093684970424169LL;
unsigned long long int var_70 = 7485326436990458496ULL;
unsigned char var_71 = (unsigned char)112;
unsigned long long int var_72 = 15877971444656446396ULL;
unsigned char var_73 = (unsigned char)4;
signed char var_74 = (signed char)20;
signed char var_75 = (signed char)83;
unsigned long long int var_76 = 14509787579412120705ULL;
unsigned long long int var_77 = 6522003169052487263ULL;
unsigned long long int var_78 = 17181980654281353104ULL;
long long int arr_0 [18] [18] ;
unsigned char arr_1 [18] ;
_Bool arr_2 [18] ;
unsigned long long int arr_3 [18] ;
unsigned long long int arr_4 [18] [18] [18] ;
signed char arr_5 [18] ;
unsigned long long int arr_6 [18] ;
int arr_7 [18] [18] [18] ;
long long int arr_8 [18] [18] [18] ;
long long int arr_9 [18] [18] [18] [18] ;
signed char arr_10 [18] [18] [18] [18] ;
unsigned char arr_11 [18] [18] [18] ;
signed char arr_12 [18] [18] [18] [18] [18] [18] ;
long long int arr_15 [18] [18] [18] [18] ;
long long int arr_16 [18] ;
long long int arr_17 [18] [18] ;
long long int arr_18 [18] [18] ;
_Bool arr_20 [18] [18] [18] ;
unsigned long long int arr_21 [18] ;
unsigned long long int arr_22 [18] [18] [18] ;
long long int arr_23 [18] ;
long long int arr_24 [18] [18] ;
unsigned long long int arr_26 [18] [18] [18] ;
signed char arr_27 [18] [18] [18] ;
int arr_28 [18] [18] [18] ;
unsigned long long int arr_29 [18] [18] [18] [18] ;
signed char arr_30 [18] [18] [18] ;
signed char arr_32 [18] [18] [18] ;
unsigned long long int arr_33 [18] [18] ;
unsigned long long int arr_34 [12] ;
_Bool arr_36 [12] ;
unsigned long long int arr_39 [12] [12] ;
unsigned long long int arr_44 [12] ;
_Bool arr_45 [12] [12] [12] ;
unsigned long long int arr_47 [12] [12] [12] [12] ;
unsigned long long int arr_51 [12] [12] [12] [12] [12] ;
_Bool arr_54 [12] [12] [12] ;
unsigned long long int arr_57 [12] ;
unsigned long long int arr_63 [12] [12] [12] [12] ;
long long int arr_64 [12] [12] [12] ;
signed char arr_66 [12] [12] [12] [12] [12] [12] ;
unsigned long long int arr_68 [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = -5735155045251838291LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)244 : (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 4527189520607288396ULL : 7640758313980964746ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1306397866156748169ULL : 12075881888453474041ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (signed char)15;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 14640247427287569563ULL : 10407624864036861649ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -696456826;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 6058785259884246202LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = -5536389259485368570LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)-10 : (signed char)-78;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)253 : (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (signed char)68 : (signed char)11;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 6048974844147639238LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 6558251639435254720LL : -6951036802756178698LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? 7956153360944243531LL : -7270535671961806095LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? 865937607782313862LL : 1136124258626212335LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 13599112363275372633ULL : 10049227963617250489ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = 4009385175486173579ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? 8712328173089385735LL : -4961117358048508680LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_24 [i_0] [i_1] = 3410653665080042871LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = 16154703847738151009ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)2 : (signed char)-66;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1729765538 : -1270429283;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 8384826898241862936ULL : 8790015476625972417ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)81 : (signed char)-88;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (signed char)-108;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_33 [i_0] [i_1] = (i_1 % 2 == 0) ? 3867270878067607683ULL : 3576345326834451723ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_34 [i_0] = 2567133903791704204ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_36 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_39 [i_0] [i_1] = 14078464978541608964ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_44 [i_0] = 4809212187856489010ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_45 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_47 [i_0] [i_1] [i_2] [i_3] = 16551074469376281777ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 469761524246411833ULL : 4423508822399264811ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_54 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_57 [i_0] = 14892018504732784626ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_63 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 10272248368478857962ULL : 6536482171216789347ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_64 [i_0] [i_1] [i_2] = -3652463143303743239LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_66 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (signed char)-111 : (signed char)52;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_68 [i_0] [i_1] [i_2] [i_3] [i_4] = 15867107547056344338ULL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
