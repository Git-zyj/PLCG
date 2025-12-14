#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6322420914056940056LL;
unsigned short var_1 = (unsigned short)7607;
short var_2 = (short)-30759;
long long int var_3 = -8297237787613069571LL;
long long int var_4 = 5384375286213792765LL;
unsigned short var_5 = (unsigned short)5880;
unsigned short var_6 = (unsigned short)46963;
short var_7 = (short)2062;
unsigned char var_8 = (unsigned char)231;
short var_9 = (short)-15782;
long long int var_10 = -3605918392284037808LL;
int zero = 0;
long long int var_11 = -5801247587374066942LL;
short var_12 = (short)13263;
long long int var_13 = 3102549046491665725LL;
unsigned char var_14 = (unsigned char)96;
short var_15 = (short)-17227;
unsigned char var_16 = (unsigned char)205;
short var_17 = (short)22660;
unsigned char var_18 = (unsigned char)168;
long long int var_19 = -7588138763631646362LL;
unsigned int var_20 = 2168981767U;
long long int var_21 = 3113396371213987102LL;
long long int var_22 = -5226813040507855278LL;
unsigned short var_23 = (unsigned short)6440;
short var_24 = (short)-13887;
unsigned short var_25 = (unsigned short)28087;
unsigned char var_26 = (unsigned char)91;
long long int var_27 = -5504145864967027434LL;
unsigned short var_28 = (unsigned short)3591;
long long int var_29 = 926600380082343339LL;
long long int var_30 = 3925938433681150255LL;
long long int var_31 = 4164748564079152923LL;
long long int var_32 = -4827906289844485018LL;
unsigned short var_33 = (unsigned short)52152;
long long int var_34 = 8829625231036959635LL;
unsigned short var_35 = (unsigned short)62405;
unsigned char var_36 = (unsigned char)206;
long long int var_37 = -5040794176610700816LL;
int var_38 = 592318405;
short var_39 = (short)12579;
long long int var_40 = -6313632213874751901LL;
long long int var_41 = 3947668411809293069LL;
unsigned char var_42 = (unsigned char)12;
long long int var_43 = -5593301579408306943LL;
unsigned short var_44 = (unsigned short)39349;
int var_45 = -1612024993;
unsigned char var_46 = (unsigned char)69;
unsigned char var_47 = (unsigned char)168;
unsigned char var_48 = (unsigned char)130;
unsigned char var_49 = (unsigned char)132;
unsigned short var_50 = (unsigned short)25937;
long long int var_51 = 610322517282298844LL;
short var_52 = (short)13489;
unsigned int var_53 = 3694414248U;
unsigned short var_54 = (unsigned short)15417;
long long int var_55 = -3237335183869170343LL;
int var_56 = -1318586502;
long long int var_57 = 8260219133294688412LL;
long long int var_58 = -3415250582775102634LL;
short var_59 = (short)-26874;
long long int var_60 = 7058244362686376988LL;
long long int var_61 = 1645163832973152044LL;
long long int var_62 = 3855607516183324140LL;
unsigned short var_63 = (unsigned short)43586;
int var_64 = -256939494;
long long int var_65 = 3422718741186843684LL;
unsigned char var_66 = (unsigned char)95;
unsigned short var_67 = (unsigned short)47722;
long long int var_68 = -7400103591121306171LL;
unsigned int var_69 = 755743505U;
long long int var_70 = -8195214210842055281LL;
unsigned char var_71 = (unsigned char)234;
unsigned int var_72 = 1299358898U;
short var_73 = (short)24665;
unsigned short var_74 = (unsigned short)23088;
unsigned char var_75 = (unsigned char)119;
unsigned int var_76 = 3212029261U;
long long int var_77 = 8718425074239771659LL;
long long int var_78 = -801079612593152215LL;
long long int var_79 = 2872000809602627242LL;
unsigned short var_80 = (unsigned short)22636;
unsigned short var_81 = (unsigned short)42200;
unsigned char var_82 = (unsigned char)171;
long long int var_83 = 763680551034378995LL;
unsigned short var_84 = (unsigned short)60269;
unsigned char var_85 = (unsigned char)13;
unsigned char var_86 = (unsigned char)1;
unsigned short var_87 = (unsigned short)22709;
long long int var_88 = 6132042282637474543LL;
long long int var_89 = -8881848250580436786LL;
unsigned int var_90 = 2828160297U;
unsigned short arr_0 [16] ;
unsigned int arr_1 [16] ;
long long int arr_2 [16] [16] ;
short arr_4 [15] [15] ;
unsigned short arr_5 [15] [15] ;
unsigned short arr_7 [15] ;
int arr_10 [15] ;
long long int arr_13 [15] [15] ;
long long int arr_14 [15] ;
unsigned char arr_15 [15] [15] [15] [15] [15] ;
short arr_16 [15] [15] [15] [15] [15] ;
short arr_17 [15] [15] [15] [15] [15] [15] [15] ;
unsigned short arr_19 [15] ;
unsigned char arr_23 [15] [15] [15] ;
long long int arr_24 [15] [15] ;
long long int arr_25 [15] [15] [15] [15] [15] [15] ;
unsigned int arr_26 [15] [15] [15] [15] [15] ;
long long int arr_27 [15] ;
unsigned char arr_30 [15] [15] ;
unsigned int arr_31 [15] [15] [15] ;
short arr_33 [15] [15] ;
unsigned char arr_34 [15] ;
short arr_35 [15] [15] ;
long long int arr_58 [15] [15] [15] [15] [15] [15] [15] ;
int arr_62 [15] [15] [15] [15] [15] [15] ;
unsigned int arr_64 [15] [15] [15] [15] ;
long long int arr_67 [18] ;
long long int arr_68 [18] ;
unsigned short arr_69 [18] [18] ;
unsigned short arr_70 [18] ;
int arr_71 [18] [18] [18] ;
long long int arr_72 [18] [18] ;
unsigned char arr_73 [18] [18] [18] ;
unsigned char arr_76 [18] [18] [18] [18] ;
int arr_78 [18] [18] ;
unsigned int arr_81 [18] [18] [18] ;
long long int arr_82 [18] [18] [18] [18] ;
unsigned short arr_84 [18] ;
long long int arr_85 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)29905;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 1519738419U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 1570157890968162695LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-21691;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)20585;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (unsigned short)46924;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = -944164957;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_13 [i_0] [i_1] = 3793473108085058819LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = -4402930569860678846LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)28;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)15225;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)-10802;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_19 [i_0] = (unsigned short)3014;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)121 : (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_24 [i_0] [i_1] = (i_0 % 2 == 0) ? -4068099440373994328LL : -3910344554545236448LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 4999380012032030618LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = 3940657781U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? -5197642126691728017LL : 6653872243730929739LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_30 [i_0] [i_1] = (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = 1569349181U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_33 [i_0] [i_1] = (short)-25764;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_34 [i_0] = (unsigned char)85;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_35 [i_0] [i_1] = (short)3816;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_58 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? -6081083800347546788LL : 3171227307934000636LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_62 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -358100559;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_64 [i_0] [i_1] [i_2] [i_3] = 2655348040U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_67 [i_0] = 4448177394702014553LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_68 [i_0] = 1359497314899929667LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_69 [i_0] [i_1] = (unsigned short)1823;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_70 [i_0] = (unsigned short)53566;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_71 [i_0] [i_1] [i_2] = -545721411;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_72 [i_0] [i_1] = -1204029775705792489LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_73 [i_0] [i_1] [i_2] = (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_76 [i_0] [i_1] [i_2] [i_3] = (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_78 [i_0] [i_1] = (i_0 % 2 == 0) ? -1882047741 : -1425960947;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_81 [i_0] [i_1] [i_2] = 742494264U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_82 [i_0] [i_1] [i_2] [i_3] = 4327264289905302827LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_84 [i_0] = (unsigned short)7853;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_85 [i_0] [i_1] [i_2] [i_3] = -90601634430129796LL;
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
    hash(&seed, var_82);
    hash(&seed, var_83);
    hash(&seed, var_84);
    hash(&seed, var_85);
    hash(&seed, var_86);
    hash(&seed, var_87);
    hash(&seed, var_88);
    hash(&seed, var_89);
    hash(&seed, var_90);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
