#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)77;
unsigned char var_1 = (unsigned char)1;
unsigned char var_2 = (unsigned char)184;
unsigned char var_3 = (unsigned char)112;
unsigned char var_4 = (unsigned char)6;
unsigned char var_5 = (unsigned char)213;
unsigned char var_6 = (unsigned char)70;
unsigned char var_7 = (unsigned char)18;
short var_8 = (short)17658;
short var_9 = (short)18271;
unsigned char var_10 = (unsigned char)18;
unsigned char var_11 = (unsigned char)104;
unsigned long long int var_12 = 15532598488784459938ULL;
unsigned char var_13 = (unsigned char)164;
unsigned char var_14 = (unsigned char)171;
unsigned long long int var_15 = 12717583160699346648ULL;
unsigned long long int var_16 = 15937751562363607357ULL;
unsigned long long int var_17 = 2102218037910284537ULL;
int zero = 0;
unsigned long long int var_18 = 1108041319604616917ULL;
unsigned char var_19 = (unsigned char)54;
unsigned char var_20 = (unsigned char)165;
short var_21 = (short)14743;
unsigned long long int var_22 = 3560934329517638809ULL;
unsigned char var_23 = (unsigned char)57;
unsigned char var_24 = (unsigned char)44;
unsigned char var_25 = (unsigned char)198;
short var_26 = (short)-11192;
unsigned long long int var_27 = 4367217378264270728ULL;
unsigned long long int var_28 = 2162768300795770188ULL;
short var_29 = (short)-5780;
short var_30 = (short)1659;
unsigned long long int var_31 = 831830974268124978ULL;
unsigned char var_32 = (unsigned char)212;
unsigned long long int var_33 = 2576157972774744013ULL;
unsigned char var_34 = (unsigned char)58;
short var_35 = (short)11501;
short var_36 = (short)3807;
unsigned char var_37 = (unsigned char)36;
short var_38 = (short)-22096;
unsigned long long int var_39 = 16255414645691599992ULL;
unsigned long long int var_40 = 13107247782592186949ULL;
unsigned char var_41 = (unsigned char)64;
unsigned char var_42 = (unsigned char)162;
short var_43 = (short)-18635;
unsigned char var_44 = (unsigned char)149;
unsigned char var_45 = (unsigned char)41;
short var_46 = (short)29375;
unsigned long long int var_47 = 4194401571805413982ULL;
unsigned char var_48 = (unsigned char)164;
short var_49 = (short)-11378;
unsigned char var_50 = (unsigned char)183;
unsigned char var_51 = (unsigned char)244;
unsigned char var_52 = (unsigned char)88;
unsigned char var_53 = (unsigned char)155;
unsigned char var_54 = (unsigned char)243;
unsigned long long int var_55 = 4160090906349117842ULL;
unsigned char var_56 = (unsigned char)184;
unsigned char var_57 = (unsigned char)26;
unsigned char var_58 = (unsigned char)224;
unsigned char var_59 = (unsigned char)30;
short var_60 = (short)10646;
unsigned char var_61 = (unsigned char)173;
unsigned char var_62 = (unsigned char)28;
short var_63 = (short)-29752;
unsigned long long int var_64 = 15043134261503495859ULL;
unsigned char var_65 = (unsigned char)229;
unsigned char var_66 = (unsigned char)60;
unsigned long long int var_67 = 8281017270419715446ULL;
unsigned long long int var_68 = 12791775744572504647ULL;
short var_69 = (short)-19600;
short var_70 = (short)4228;
unsigned char var_71 = (unsigned char)90;
short var_72 = (short)-5052;
unsigned char var_73 = (unsigned char)69;
unsigned char var_74 = (unsigned char)85;
unsigned char var_75 = (unsigned char)117;
unsigned long long int var_76 = 13888213063040143423ULL;
unsigned char var_77 = (unsigned char)159;
unsigned char var_78 = (unsigned char)39;
unsigned char var_79 = (unsigned char)245;
unsigned char var_80 = (unsigned char)28;
short var_81 = (short)7038;
unsigned long long int var_82 = 3022988280176888713ULL;
short var_83 = (short)6344;
unsigned char var_84 = (unsigned char)218;
unsigned char var_85 = (unsigned char)30;
short var_86 = (short)-28291;
short var_87 = (short)-28177;
unsigned long long int var_88 = 1349548196713711822ULL;
unsigned char var_89 = (unsigned char)123;
unsigned char var_90 = (unsigned char)151;
unsigned long long int var_91 = 10800884234440124433ULL;
unsigned char arr_15 [12] ;
unsigned char arr_16 [12] ;
unsigned char arr_59 [23] ;
unsigned long long int arr_75 [24] ;
unsigned char arr_84 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned char)15 : (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (unsigned char)130 : (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_59 [i_0] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_75 [i_0] = (i_0 % 2 == 0) ? 14113870476140283722ULL : 2625804489896619770ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_84 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)211 : (unsigned char)63;
}

void checksum() {
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
    hash(&seed, var_91);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_59 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_75 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_84 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
