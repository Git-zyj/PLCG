/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151465
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [i_0]))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 12; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) % (arr_7 [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_0 - 1])));
                    var_17 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 2] [i_2 - 1]))));
                    var_18 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))));
                }
            } 
        } 
    }
    for (short i_3 = 3; i_3 < 24; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_4 = 4; i_4 < 24; i_4 += 3) 
        {
            for (short i_5 = 1; i_5 < 23; i_5 += 1) 
            {
                {
                    var_19 |= ((/* implicit */short) min((((/* implicit */unsigned int) (-2147483647 - 1))), (1040187392U)));
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (unsigned short)49516))));
                    var_21 = ((/* implicit */int) min(((short)13655), (((/* implicit */short) ((((((/* implicit */_Bool) arr_13 [i_5])) ? (var_0) : (2147483647))) <= ((+((-2147483647 - 1)))))))));
                    arr_14 [i_4] = (-(((/* implicit */int) ((short) min((((/* implicit */int) var_2)), (var_1))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            /* LoopNest 3 */
            for (short i_7 = 1; i_7 < 24; i_7 += 4) 
            {
                for (unsigned short i_8 = 3; i_8 < 22; i_8 += 1) 
                {
                    for (short i_9 = 1; i_9 < 21; i_9 += 1) 
                    {
                        {
                            arr_27 [i_3] [i_3] [i_3] [i_8 - 3] [i_9] [i_9] |= ((/* implicit */signed char) var_8);
                            var_22 -= ((/* implicit */unsigned short) (+(((((/* implicit */int) (signed char)-85)) | (((/* implicit */int) (signed char)108))))));
                            var_23 = (+(((/* implicit */int) ((signed char) arr_10 [i_8] [i_8 - 2] [i_8]))));
                            arr_28 [i_9 - 1] [i_8] [i_7 - 1] [i_6] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_3 - 2] [i_3 - 2] [i_8 - 1] [i_9 + 3] [i_9] [(short)12] [i_7 + 1])) - (arr_16 [i_3] [i_6] [i_6])))) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) var_6)));
                            var_24 = min((814704810), ((+((-(var_12))))));
                        }
                    } 
                } 
            } 
            var_25 &= ((/* implicit */short) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_20 [2U] [i_3] [2U])) : (((/* implicit */int) var_2))))));
            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) var_11))));
            var_27 = ((/* implicit */short) ((((/* implicit */int) arr_12 [i_3 - 1] [i_3 - 3] [i_3 + 1])) ^ ((~(((/* implicit */int) arr_12 [i_3 - 3] [i_3 - 1] [i_3 - 1]))))));
        }
        for (short i_10 = 0; i_10 < 25; i_10 += 4) 
        {
            arr_31 [i_3] [i_10] |= ((/* implicit */signed char) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_10 [i_10] [i_3 - 2] [i_3 - 1])))) >= (((/* implicit */int) max((((/* implicit */unsigned short) (short)24844)), ((unsigned short)29698)))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_11 = 0; i_11 < 25; i_11 += 1) 
            {
                arr_34 [i_11] [i_10] [i_10] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 2088960U)))))));
                arr_35 [i_3] [i_3 - 2] [(short)13] = ((/* implicit */unsigned short) arr_23 [i_3] [i_3 - 3] [i_3 - 3] [i_11]);
                var_28 &= ((/* implicit */signed char) ((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3 - 2] [i_10] [i_11])))));
            }
            for (short i_12 = 1; i_12 < 22; i_12 += 1) 
            {
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_3 + 1]))))) ? ((-(((/* implicit */int) max(((short)32766), (var_7)))))) : (min((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))), (var_0)))));
                arr_38 [i_12] [(signed char)22] [i_3] [i_3] = ((/* implicit */signed char) max((arr_32 [i_3] [i_3] [i_12] [i_12]), (((/* implicit */unsigned int) (((~(var_1))) >> (((((((/* implicit */int) arr_25 [i_3] [i_3] [i_3 + 1])) & (var_0))) - (9))))))));
            }
            for (int i_13 = 2; i_13 < 23; i_13 += 1) 
            {
                var_30 = ((/* implicit */short) max((((int) arr_25 [i_13 + 1] [i_13 - 2] [i_3 - 2])), (((/* implicit */int) arr_25 [i_13 - 2] [i_13 + 1] [i_3 + 1]))));
                var_31 -= ((/* implicit */short) max((3453379451U), (((/* implicit */unsigned int) (signed char)12))));
                var_32 = ((/* implicit */short) max(((-(((/* implicit */int) arr_20 [(short)12] [i_3 - 2] [i_3])))), ((+(((/* implicit */int) arr_20 [21U] [i_3 - 2] [i_3]))))));
            }
            var_33 = ((((/* implicit */_Bool) (short)-25578)) ? (min((2130706432), (1780666415))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))));
        }
        /* vectorizable */
        for (short i_14 = 0; i_14 < 25; i_14 += 1) 
        {
            var_34 = ((/* implicit */short) var_1);
            /* LoopSeq 4 */
            for (short i_15 = 0; i_15 < 25; i_15 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 25; i_16 += 3) 
                {
                    for (unsigned int i_17 = 0; i_17 < 25; i_17 += 2) 
                    {
                        {
                            var_35 += ((/* implicit */short) (-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30808))) % (var_5)))));
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)127)) <= (1191330117)));
                            var_37 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3]))))) : (((/* implicit */int) arr_22 [(short)8] [i_3 + 1] [i_3 - 1] [i_3 - 3] [i_3 - 1]))));
                        }
                    } 
                } 
                var_38 |= ((signed char) var_2);
            }
            for (short i_18 = 0; i_18 < 25; i_18 += 1) /* same iter space */
            {
                arr_56 [i_3] [i_18] [i_18] [i_14] = ((/* implicit */signed char) (~(((/* implicit */int) var_2))));
                var_39 = ((((/* implicit */_Bool) arr_52 [i_3 - 3] [(short)17] [i_18])) ? ((+((-2147483647 - 1)))) : (((/* implicit */int) ((arr_33 [i_18] [(unsigned short)14] [i_3] [i_3]) <= (((/* implicit */unsigned int) 2147483647))))));
                var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (unsigned short)34729)) ? (((/* implicit */int) (unsigned short)49521)) : (var_1))) : (arr_39 [i_3 + 1]))))));
                arr_57 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */int) (short)32757)) <= (((/* implicit */int) (!(((/* implicit */_Bool) 1780666407)))))));
            }
            for (short i_19 = 0; i_19 < 25; i_19 += 1) /* same iter space */
            {
                var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_48 [i_3] [i_3 + 1] [i_3 - 3] [i_3 - 3])))))));
                /* LoopSeq 3 */
                for (short i_20 = 1; i_20 < 22; i_20 += 4) 
                {
                    var_42 = (short)6482;
                    var_43 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-89))));
                    arr_63 [i_3] [i_20 + 1] [i_19] [i_20] [i_3] [i_14] = (short)32767;
                    var_44 &= ((/* implicit */short) (+(((/* implicit */int) arr_43 [i_3 - 3]))));
                }
                for (short i_21 = 1; i_21 < 24; i_21 += 3) /* same iter space */
                {
                    var_45 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-86)))))));
                    var_46 = ((/* implicit */short) ((((/* implicit */int) var_10)) & (-94158654)));
                    var_47 = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_62 [i_3] [i_14] [i_19] [i_21 - 1])))) <= (((/* implicit */int) arr_48 [i_21 - 1] [i_14] [i_19] [i_3 - 3]))));
                    var_48 = ((int) arr_41 [i_3] [i_14]);
                }
                for (short i_22 = 1; i_22 < 24; i_22 += 3) /* same iter space */
                {
                    arr_72 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) (-(94158664)));
                    var_49 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)65531))));
                    arr_73 [(unsigned short)12] [i_14] [i_19] [(unsigned short)12] = ((/* implicit */short) (!(((/* implicit */_Bool) -1103557111))));
                    var_50 ^= ((/* implicit */int) var_13);
                }
            }
            for (short i_23 = 0; i_23 < 25; i_23 += 1) /* same iter space */
            {
                arr_77 [i_3 + 1] [i_3 + 1] = ((/* implicit */unsigned short) arr_68 [i_3] [i_14] [3U]);
                arr_78 [i_14] [i_14] [i_3] = ((/* implicit */short) ((var_12) < (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
                /* LoopSeq 1 */
                for (signed char i_24 = 3; i_24 < 22; i_24 += 4) 
                {
                    var_51 = ((/* implicit */unsigned int) arr_18 [i_23]);
                    arr_82 [i_24] [i_24] [i_23] [i_24] [i_24] [i_3] = ((int) 2147483647);
                }
                arr_83 [i_3] [i_14] [i_23] [i_23] = ((/* implicit */short) (!(((/* implicit */_Bool) var_10))));
                var_52 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_41 [i_3 + 1] [i_14])) ? (arr_41 [i_3 + 1] [i_14]) : (((/* implicit */int) arr_37 [i_3 - 1] [i_14] [i_23]))));
            }
            var_53 = ((/* implicit */short) (-((-(var_12)))));
            var_54 ^= ((/* implicit */short) ((((/* implicit */_Bool) 835607560)) ? (var_12) : ((+(((/* implicit */int) (signed char)(-127 - 1)))))));
            arr_84 [i_3] = ((/* implicit */short) var_6);
        }
        var_55 = ((/* implicit */short) min((min((var_1), (((/* implicit */int) arr_15 [(signed char)23] [i_3] [i_3 + 1])))), (((((/* implicit */_Bool) ((2147483635) - (67092480)))) ? (max((arr_67 [(short)16] [i_3] [i_3] [i_3] [i_3] [(short)18]), (var_9))) : (max((((/* implicit */int) (signed char)-48)), (var_0)))))));
    }
    /* vectorizable */
    for (unsigned short i_25 = 2; i_25 < 22; i_25 += 1) 
    {
        var_56 = ((/* implicit */int) arr_15 [i_25 + 1] [i_25 - 1] [i_25]);
        var_57 = ((/* implicit */short) ((signed char) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) (signed char)-40)))));
        /* LoopSeq 1 */
        for (short i_26 = 0; i_26 < 23; i_26 += 2) 
        {
            /* LoopNest 3 */
            for (signed char i_27 = 2; i_27 < 21; i_27 += 3) 
            {
                for (int i_28 = 0; i_28 < 23; i_28 += 2) 
                {
                    for (short i_29 = 1; i_29 < 21; i_29 += 1) 
                    {
                        {
                            var_58 = ((/* implicit */signed char) ((arr_67 [i_25 - 1] [i_25 - 2] [i_25 - 1] [i_25] [(short)12] [i_25]) != (arr_67 [i_25] [i_26] [i_27 + 2] [i_28] [i_27 - 2] [i_27 - 2])));
                            var_59 = ((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)27822)) && (((/* implicit */_Bool) arr_18 [i_28]))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_30 = 0; i_30 < 23; i_30 += 1) 
            {
                arr_100 [i_25] [i_30] [i_26] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)30814)) : (arr_16 [i_25 + 1] [i_25 - 1] [i_25 - 2])));
                var_60 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_62 [i_25] [i_25 - 1] [i_25] [i_25 - 2])) ? (var_12) : (-1780666415)));
                var_61 = ((/* implicit */signed char) (+(var_12)));
                /* LoopSeq 2 */
                for (int i_31 = 1; i_31 < 22; i_31 += 1) 
                {
                    var_62 ^= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (short)-19306)) < (((/* implicit */int) arr_53 [i_25] [i_25] [22] [i_31 - 1]))))) <= (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (2147483647)))));
                    var_63 = ((/* implicit */short) ((((/* implicit */_Bool) arr_41 [i_25 - 2] [i_31 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_17 [i_25] [i_25 + 1]))));
                }
                for (signed char i_32 = 0; i_32 < 23; i_32 += 3) 
                {
                    arr_105 [i_26] [9] &= arr_12 [i_25] [i_30] [i_32];
                    var_64 ^= var_11;
                    /* LoopSeq 4 */
                    for (short i_33 = 3; i_33 < 20; i_33 += 2) 
                    {
                        arr_108 [i_25] [i_26] [i_26] [i_30] [i_32] [i_25] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) ((short) arr_49 [i_26] [i_26] [(signed char)23] [(signed char)23])))));
                        arr_109 [i_26] [i_25] [i_30] [i_26] [i_25] = ((/* implicit */short) var_11);
                        var_65 += ((/* implicit */short) var_5);
                        var_66 = ((/* implicit */int) ((short) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_6)))));
                    }
                    for (int i_34 = 0; i_34 < 23; i_34 += 1) 
                    {
                        var_67 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 4068311744U)) ? (((((/* implicit */_Bool) (unsigned short)19157)) ? (arr_69 [i_25] [i_26] [i_30] [i_32]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32761))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) | (var_12))))));
                        arr_113 [i_25] [i_25] [i_25] [i_30] [i_32] [i_32] [i_32] = ((/* implicit */unsigned int) -162459012);
                        var_68 = ((/* implicit */short) ((((/* implicit */_Bool) (+(-2147483631)))) ? (((/* implicit */int) arr_9 [i_25] [i_25 - 2])) : (((528966152) & (var_0)))));
                    }
                    for (short i_35 = 0; i_35 < 23; i_35 += 4) 
                    {
                        var_69 ^= var_9;
                        var_70 = ((/* implicit */short) (+(((/* implicit */int) (signed char)32))));
                        var_71 = ((/* implicit */unsigned short) min((var_71), (((/* implicit */unsigned short) arr_50 [i_25 - 1] [i_25 - 1] [(short)24] [(short)24] [i_25 - 1] [i_25 - 2]))));
                    }
                    for (short i_36 = 0; i_36 < 23; i_36 += 3) 
                    {
                        var_72 = ((/* implicit */int) ((15) == (((/* implicit */int) (short)-19319))));
                        var_73 = ((/* implicit */signed char) ((((/* implicit */int) arr_13 [i_25 - 2])) & (((/* implicit */int) arr_13 [i_25 - 2]))));
                    }
                    arr_121 [i_25] [i_25] [i_25] [i_25] = ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
                    var_74 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_90 [i_25 - 1] [i_30]))));
                }
            }
            /* LoopSeq 1 */
            for (signed char i_37 = 0; i_37 < 23; i_37 += 3) 
            {
                /* LoopSeq 2 */
                for (short i_38 = 3; i_38 < 22; i_38 += 1) 
                {
                    var_75 = ((/* implicit */signed char) arr_98 [i_25]);
                    var_76 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_38] [i_26] [i_25])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_114 [i_38] [i_26] [i_37] [(signed char)15] [i_26] [i_25])))))));
                    var_77 = arr_21 [i_25] [i_26] [i_37];
                    var_78 = arr_44 [16] [i_26];
                }
                for (short i_39 = 1; i_39 < 21; i_39 += 2) 
                {
                    arr_130 [i_25] [i_26] = ((/* implicit */signed char) ((short) var_10));
                    arr_131 [i_25] [i_26] [i_26] [i_39] [i_39 + 2] = ((/* implicit */int) var_10);
                }
                arr_132 [i_37] [0U] [i_26] [0U] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-64))));
                arr_133 [i_25] [(signed char)6] [i_37] [i_26] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 2147483628)) ? (1066504009) : (((/* implicit */int) var_8)))) != ((~(arr_110 [i_37] [i_37] [i_26] [i_25] [(short)16] [i_25])))));
            }
            var_79 = ((/* implicit */short) ((((/* implicit */int) arr_81 [i_25] [i_25] [i_26] [i_25 - 2] [i_26])) / (((/* implicit */int) arr_43 [i_25 - 2]))));
            var_80 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)19286)) < (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-113)))))));
        }
        arr_134 [i_25] = (signed char)83;
        /* LoopSeq 1 */
        for (unsigned short i_40 = 4; i_40 < 22; i_40 += 1) 
        {
            arr_137 [i_25] [i_25] [i_25] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 32767)) ? (1417011758) : (((/* implicit */int) (signed char)32))))) ? (var_1) : (((var_1) / (1097934227)))));
            var_81 -= ((/* implicit */signed char) (((+(((/* implicit */int) var_2)))) <= (((/* implicit */int) var_13))));
            /* LoopSeq 2 */
            for (signed char i_41 = 2; i_41 < 21; i_41 += 1) 
            {
                var_82 = ((/* implicit */signed char) max((var_82), (((/* implicit */signed char) (short)19525))));
                arr_140 [i_41] [i_41 - 2] [i_25] [i_25] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)49152))));
            }
            for (short i_42 = 0; i_42 < 23; i_42 += 2) 
            {
                var_83 = ((/* implicit */signed char) (short)9434);
                /* LoopSeq 1 */
                for (short i_43 = 0; i_43 < 23; i_43 += 3) 
                {
                    var_84 |= ((/* implicit */int) (signed char)38);
                    var_85 = ((/* implicit */signed char) ((unsigned int) (short)-5860));
                }
            }
        }
    }
    var_86 = ((/* implicit */short) ((((/* implicit */_Bool) (+(max((var_3), (((/* implicit */unsigned int) var_8))))))) ? (((/* implicit */int) var_2)) : ((-(((/* implicit */int) var_2))))));
    var_87 &= var_0;
}
