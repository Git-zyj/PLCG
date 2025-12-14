#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1433180691;
int var_1 = 296514580;
int var_2 = -457846664;
int var_3 = 542199529;
int var_5 = -1959166718;
int var_6 = 691216192;
int var_8 = 1191356502;
int var_9 = 318139474;
int var_10 = -1346710695;
int var_11 = 1727689099;
int var_12 = 187501794;
int var_13 = 1654430376;
int var_14 = -1107102806;
int zero = 0;
int var_16 = 284629290;
int var_17 = -1169389733;
int var_18 = -1747006937;
int var_19 = 847907972;
int var_20 = -1092578817;
int var_21 = -979552129;
int var_22 = -1249144937;
int var_23 = 1875571293;
int var_24 = 889060553;
int var_25 = 1611159458;
int var_26 = -1486074376;
int var_27 = 2084405982;
int var_28 = 213505546;
int var_29 = -695922658;
int var_30 = 404408456;
int var_31 = -208613187;
int var_32 = -1194465795;
int var_33 = 742527446;
int var_34 = 522070223;
int var_35 = -1930306553;
int var_36 = -869013560;
int var_37 = 1462252231;
int var_38 = -565105356;
int var_39 = -268857810;
int var_40 = 1524564978;
int var_41 = -1547276634;
int var_42 = -1739347824;
int var_43 = -1741433517;
int var_44 = 128104057;
int var_45 = 407771258;
int var_46 = -1989958513;
int var_47 = -571184635;
int var_48 = 1134684364;
int var_49 = -349735215;
int var_50 = -924583854;
int var_51 = 61560039;
int var_52 = -291626370;
int var_53 = -343422057;
int var_54 = -2040749184;
int var_55 = -748829901;
int var_56 = -463828891;
int var_57 = -166745377;
int var_58 = -625700362;
int var_59 = -1300553081;
int var_60 = 1797982150;
int var_61 = 691244809;
int var_62 = 1430898811;
int var_63 = -494432282;
int var_64 = -1164703620;
int var_65 = 1670940085;
int var_66 = -285081448;
int var_67 = -278262491;
int var_68 = 1073897827;
int var_69 = -1010272276;
int var_70 = -774917144;
int var_71 = 1687885494;
int var_72 = 100571919;
int var_73 = -547952552;
int var_74 = -713902807;
int var_75 = -1688237270;
int var_76 = 2049089578;
int var_77 = -799402285;
int var_78 = 716392861;
int var_79 = -1889433302;
int var_80 = 236974756;
int var_81 = -464859365;
int var_82 = 1423575707;
int arr_0 [13] ;
int arr_1 [13] ;
int arr_2 [13] [13] [13] ;
int arr_4 [13] [13] ;
int arr_9 [13] [13] [13] [13] ;
int arr_10 [13] [13] [13] ;
int arr_11 [13] [13] ;
int arr_12 [13] [13] [13] ;
int arr_13 [13] [13] [13] [13] ;
int arr_15 [13] ;
int arr_16 [13] [13] [13] [13] ;
int arr_17 [13] ;
int arr_18 [13] [13] [13] [13] [13] ;
int arr_21 [15] ;
int arr_22 [15] ;
int arr_24 [11] [11] ;
int arr_27 [11] [11] ;
int arr_31 [11] [11] [11] [11] ;
int arr_33 [11] [11] [11] ;
int arr_35 [11] [11] [11] [11] [11] ;
int arr_41 [11] [11] [11] [11] [11] ;
int arr_43 [11] [11] [11] [11] [11] ;
int arr_44 [11] [11] [11] [11] ;
int arr_51 [11] [11] [11] [11] [11] [11] [11] ;
int arr_59 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -1125292401;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 98013239;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 2023363541;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 847704599;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 1605984351;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = -996235833;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = 514171030;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 1016329871;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 255284856;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = 78142003;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = -1058237364;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = -1840007732;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = 1466565102;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 348814670 : -1788526282;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_22 [i_0] = 1158662886;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_24 [i_0] [i_1] = 984183089;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_27 [i_0] [i_1] = 1563966134;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = -1551616957;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = -928393269;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] = 274807116;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] = 982773890;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] = -1954446571;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_44 [i_0] [i_1] [i_2] [i_3] = -1472396446;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 1753495619;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_59 [i_0] = -41096583;
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
    hash(&seed, var_79);
    hash(&seed, var_80);
    hash(&seed, var_81);
    hash(&seed, var_82);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
