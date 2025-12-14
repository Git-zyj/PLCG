/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114121
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_17 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_15))));
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) (-((~(((/* implicit */int) ((signed char) var_16)))))));
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-37))))) ? (((/* implicit */int) min((var_9), (arr_3 [i_1])))) : (((/* implicit */int) (((~(((/* implicit */int) arr_3 [(signed char)9])))) != (((/* implicit */int) arr_3 [i_1]))))))))));
            }
        } 
    } 
    var_19 = var_8;
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        var_20 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) (signed char)-92))));
        var_21 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) (signed char)-46))))));
    }
    for (signed char i_3 = 2; i_3 < 13; i_3 += 2) 
    {
        arr_10 [i_3] [i_3] = ((/* implicit */signed char) min(((+(((/* implicit */int) (signed char)60)))), (((/* implicit */int) var_15))));
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            for (signed char i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                {
                    arr_15 [i_4] [i_5] [i_4] [i_4] = ((signed char) var_7);
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 16; i_7 += 2) 
                        {
                            {
                                var_22 = (signed char)-56;
                                arr_20 [i_3] [i_6] [i_7] [i_6] [i_4] [i_4] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_3 - 1] [i_3 + 1] [i_3 - 2])) ? (((/* implicit */int) (signed char)59)) : (((/* implicit */int) (signed char)-100)))) >> ((((+(((/* implicit */int) (signed char)55)))) - (43)))));
                                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) max((((((/* implicit */int) arr_17 [i_5])) & (((/* implicit */int) max((var_1), ((signed char)-38)))))), (((((/* implicit */int) arr_19 [i_3 - 1] [i_3])) << (((/* implicit */int) ((signed char) arr_0 [(signed char)0]))))))))));
                                var_24 *= ((/* implicit */signed char) ((((/* implicit */int) max((arr_8 [i_3 + 1]), (arr_8 [i_3 - 2])))) & (((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) (signed char)-69)) : (((/* implicit */int) arr_8 [i_3 - 2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_21 [i_3] [i_3] = (signed char)-48;
        arr_22 [(signed char)13] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) min(((signed char)34), (arr_1 [i_3])))) | (((/* implicit */int) (signed char)76))))) ? (((/* implicit */int) (signed char)93)) : (((/* implicit */int) min((arr_17 [i_3 - 2]), ((signed char)-125))))));
        /* LoopSeq 4 */
        for (signed char i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            var_25 = (signed char)76;
            var_26 = arr_11 [i_3] [i_8] [i_3 - 2];
            arr_25 [i_8] = ((/* implicit */signed char) ((((/* implicit */int) arr_18 [i_3 + 1] [(signed char)12] [i_3 - 1] [i_3] [i_3] [i_3 - 2] [i_3])) - (max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) (signed char)54)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_11))))))));
        }
        for (signed char i_9 = 0; i_9 < 16; i_9 += 2) /* same iter space */
        {
            var_27 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) min((arr_28 [(signed char)14]), (arr_17 [i_3 + 1])))) ? (((/* implicit */int) max((arr_19 [i_3] [i_9]), (var_10)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))))));
            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) min(((signed char)23), (arr_1 [i_3])))) | (((/* implicit */int) (signed char)109))))) ? (((/* implicit */int) ((signed char) (+(((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */int) (signed char)-98)) : (((/* implicit */int) (signed char)56))))));
        }
        /* vectorizable */
        for (signed char i_10 = 0; i_10 < 16; i_10 += 2) /* same iter space */
        {
            var_29 = ((/* implicit */signed char) max((var_29), (((signed char) arr_2 [i_10] [i_10]))));
            arr_33 [i_10] [(signed char)15] [(signed char)8] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-53)) - (((/* implicit */int) arr_30 [(signed char)3] [i_10]))));
            /* LoopSeq 3 */
            for (signed char i_11 = 0; i_11 < 16; i_11 += 1) 
            {
                var_30 ^= arr_2 [i_10] [i_10];
                var_31 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)-108)))) ? ((+(((/* implicit */int) (signed char)12)))) : (((/* implicit */int) arr_24 [i_3] [i_3] [i_3 + 2]))));
            }
            for (signed char i_12 = 0; i_12 < 16; i_12 += 1) 
            {
                var_32 += ((signed char) (-(((/* implicit */int) var_1))));
                /* LoopSeq 2 */
                for (signed char i_13 = 0; i_13 < 16; i_13 += 3) 
                {
                    arr_42 [i_12] [(signed char)15] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_28 [i_3 + 2]))));
                    var_33 = var_8;
                    arr_43 [i_3] [i_10] [i_12] [i_13] = ((/* implicit */signed char) ((((/* implicit */int) var_8)) >= (((/* implicit */int) arr_31 [i_3 - 1] [i_3 - 2] [i_3 + 1]))));
                    var_34 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
                }
                for (signed char i_14 = 0; i_14 < 16; i_14 += 2) 
                {
                    var_35 ^= ((/* implicit */signed char) ((((/* implicit */int) (signed char)-24)) == (((/* implicit */int) arr_40 [i_3] [i_3 + 3]))));
                    arr_47 [(signed char)6] [i_12] [i_14] = (signed char)-112;
                }
            }
            for (signed char i_15 = 0; i_15 < 16; i_15 += 3) 
            {
                var_36 = (signed char)-1;
                arr_51 [i_10] [i_10] = var_16;
            }
        }
        for (signed char i_16 = 0; i_16 < 16; i_16 += 2) /* same iter space */
        {
            arr_56 [i_3 + 3] [i_3] [i_3] = (signed char)45;
            arr_57 [i_3] [i_16] [i_16] = arr_54 [i_3] [(signed char)4] [(signed char)4];
            var_37 *= (signed char)127;
        }
    }
    var_38 ^= ((/* implicit */signed char) (+(((/* implicit */int) var_16))));
    /* LoopSeq 3 */
    for (signed char i_17 = 0; i_17 < 20; i_17 += 4) /* same iter space */
    {
        arr_61 [i_17] [i_17] = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) arr_60 [i_17] [i_17])))));
        var_39 -= ((/* implicit */signed char) ((((/* implicit */int) min((arr_2 [i_17] [i_17]), (arr_58 [i_17])))) / (((((/* implicit */_Bool) arr_2 [i_17] [i_17])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)56))))));
        arr_62 [i_17] = ((/* implicit */signed char) max((((/* implicit */int) max((max((arr_59 [(signed char)15]), ((signed char)58))), (arr_58 [(signed char)1])))), (((((/* implicit */_Bool) arr_1 [i_17])) ? (((/* implicit */int) arr_1 [i_17])) : (((/* implicit */int) (signed char)34))))));
        /* LoopSeq 2 */
        for (signed char i_18 = 0; i_18 < 20; i_18 += 2) 
        {
            arr_66 [i_17] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)56))));
            arr_67 [i_17] [i_18] = (signed char)-60;
            /* LoopNest 2 */
            for (signed char i_19 = 0; i_19 < 20; i_19 += 1) 
            {
                for (signed char i_20 = 0; i_20 < 20; i_20 += 1) 
                {
                    {
                        var_40 |= ((/* implicit */signed char) (-(((/* implicit */int) var_15))));
                        var_41 = ((/* implicit */signed char) min((var_41), (min((((signed char) arr_58 [i_17])), (((signed char) (signed char)60))))));
                        arr_73 [i_17] [i_18] [(signed char)11] [i_19] [i_20] [i_20] &= ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-106))));
                    }
                } 
            } 
            var_42 ^= arr_69 [i_18] [i_17] [i_17] [i_17];
            arr_74 [i_18] [i_17] [i_17] |= ((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */int) arr_71 [i_18] [i_18] [i_17] [i_17])) : (((/* implicit */int) (signed char)-114)))), (min((((/* implicit */int) var_16)), (((((/* implicit */int) var_10)) & (((/* implicit */int) (signed char)-33))))))));
        }
        /* vectorizable */
        for (signed char i_21 = 0; i_21 < 20; i_21 += 3) 
        {
            /* LoopSeq 2 */
            for (signed char i_22 = 0; i_22 < 20; i_22 += 2) 
            {
                var_43 = ((signed char) ((((/* implicit */_Bool) (signed char)-109)) ? (((/* implicit */int) arr_63 [i_17] [i_17] [i_22])) : (((/* implicit */int) (signed char)2))));
                var_44 = ((/* implicit */signed char) (+(((/* implicit */int) var_2))));
            }
            for (signed char i_23 = 0; i_23 < 20; i_23 += 3) 
            {
                arr_84 [i_17] [(signed char)9] [i_21] [i_23] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)9))));
                arr_85 [i_17] [(signed char)19] [i_21] [i_21] = ((/* implicit */signed char) ((((/* implicit */int) var_13)) & ((+(((/* implicit */int) (signed char)1))))));
                arr_86 [i_21] [(signed char)5] = arr_3 [i_21];
            }
            var_45 += ((/* implicit */signed char) ((((/* implicit */int) arr_83 [i_21] [i_17] [i_17] [i_17])) >> (((((/* implicit */int) arr_70 [i_17] [i_21] [(signed char)15] [i_17] [i_21] [i_17])) + (138)))));
            arr_87 [i_21] [i_21] [i_21] = ((signed char) arr_75 [i_17] [i_21]);
        }
    }
    for (signed char i_24 = 0; i_24 < 20; i_24 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_25 = 0; i_25 < 20; i_25 += 1) 
        {
            for (signed char i_26 = 1; i_26 < 19; i_26 += 1) 
            {
                {
                    arr_97 [i_25] = ((signed char) ((((/* implicit */int) arr_59 [i_24])) != (((((/* implicit */_Bool) arr_64 [i_24] [i_24] [i_24])) ? (((/* implicit */int) (signed char)-91)) : (((/* implicit */int) var_15))))));
                    arr_98 [i_25] [i_24] [i_25] [i_26] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_24])) + (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((signed char) (signed char)39)))))) ? ((-(((/* implicit */int) var_10)))) : (((((/* implicit */int) arr_60 [i_26 - 1] [i_24])) / (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)102)) : (((/* implicit */int) (signed char)-5))))))));
                }
            } 
        } 
        arr_99 [i_24] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_0))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)123))));
        /* LoopSeq 3 */
        for (signed char i_27 = 0; i_27 < 20; i_27 += 1) /* same iter space */
        {
            arr_103 [i_27] = (signed char)-114;
            arr_104 [i_24] [i_27] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((signed char)-44), ((signed char)0)))) ? (((/* implicit */int) arr_65 [i_24] [(signed char)14])) : (((((/* implicit */int) var_5)) & (((/* implicit */int) (signed char)22))))))) ? (((/* implicit */int) (signed char)-100)) : (((((/* implicit */int) min(((signed char)7), ((signed char)124)))) << (((((/* implicit */int) (signed char)98)) - (97)))))));
            arr_105 [i_27] = ((signed char) (signed char)127);
            var_46 ^= ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_89 [i_27])) : (((/* implicit */int) arr_89 [i_24]))))));
        }
        for (signed char i_28 = 0; i_28 < 20; i_28 += 1) /* same iter space */
        {
            arr_109 [i_28] [i_28] [i_24] = arr_88 [i_24] [i_24];
            arr_110 [i_24] [i_24] [i_24] = ((signed char) (-(((/* implicit */int) arr_106 [i_24] [i_24]))));
            var_47 *= (signed char)48;
            var_48 = var_0;
            var_49 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-11))))) ? (((((((/* implicit */_Bool) arr_82 [i_24] [i_28] [i_28] [i_28])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_6)))) >> (((((((((/* implicit */int) (signed char)-65)) + (2147483647))) >> (((((/* implicit */int) var_9)) + (128))))) - (65517))))) : (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) min(((signed char)32), ((signed char)127))))))));
        }
        for (signed char i_29 = 0; i_29 < 20; i_29 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (signed char i_30 = 0; i_30 < 20; i_30 += 3) /* same iter space */
            {
                arr_117 [i_29] [(signed char)14] [i_29] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) || ((!(((/* implicit */_Bool) (signed char)-1))))));
                var_50 += arr_94 [i_24] [i_24] [i_24] [i_24];
            }
            for (signed char i_31 = 0; i_31 < 20; i_31 += 3) /* same iter space */
            {
                arr_120 [i_29] [i_29] [i_29] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_81 [i_29] [i_29] [i_29] [i_29]))))) ? (((((/* implicit */int) arr_112 [(signed char)14] [i_29] [i_31])) - ((+(((/* implicit */int) (signed char)114)))))) : (((((/* implicit */_Bool) arr_101 [i_24] [i_24] [i_31])) ? (((/* implicit */int) min((arr_71 [(signed char)11] [i_29] [(signed char)2] [i_31]), ((signed char)-86)))) : (((((/* implicit */int) var_3)) & (((/* implicit */int) arr_101 [i_29] [i_31] [i_31]))))))));
                arr_121 [i_24] [i_29] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) max(((signed char)114), (var_11)))) ? (((/* implicit */int) min(((signed char)30), ((signed char)-12)))) : (((/* implicit */int) arr_59 [i_31]))))));
                arr_122 [i_29] = (signed char)114;
                var_51 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) arr_119 [i_29] [i_29] [i_31] [i_24])) : (((/* implicit */int) arr_119 [i_29] [i_29] [i_29] [i_31])))) & (((/* implicit */int) ((((/* implicit */int) (signed char)82)) < (((((/* implicit */int) arr_68 [i_29] [(signed char)7] [(signed char)8] [i_31])) >> (((/* implicit */int) var_15)))))))));
                var_52 = ((/* implicit */signed char) (((+(((/* implicit */int) ((signed char) arr_76 [i_31] [i_29] [i_24]))))) <= (((((/* implicit */_Bool) arr_3 [i_31])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_115 [i_29] [i_29] [i_29]))))));
            }
            for (signed char i_32 = 0; i_32 < 20; i_32 += 3) /* same iter space */
            {
                arr_127 [i_32] [i_29] [i_29] [i_24] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (signed char)-112))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_102 [i_24] [(signed char)11] [i_32])) == (((/* implicit */int) ((((/* implicit */int) (signed char)-107)) <= (((/* implicit */int) var_4)))))))) : (((((/* implicit */int) var_13)) + (((/* implicit */int) arr_68 [i_32] [i_32] [i_29] [i_24]))))));
                var_53 = ((/* implicit */signed char) min((var_53), ((signed char)-118)));
                arr_128 [i_29] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)29)) >= (((/* implicit */int) (signed char)-113))));
            }
            arr_129 [i_29] [i_29] = ((signed char) (!(((/* implicit */_Bool) arr_70 [i_29] [i_29] [i_24] [i_24] [i_24] [i_24]))));
            arr_130 [(signed char)5] [i_29] [i_29] = ((/* implicit */signed char) (-((+(((/* implicit */int) (signed char)127))))));
        }
        var_54 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_59 [i_24])) ? (((/* implicit */int) max(((signed char)127), ((signed char)112)))) : (((((/* implicit */_Bool) max((var_9), (var_7)))) ? (((/* implicit */int) arr_94 [i_24] [i_24] [i_24] [i_24])) : (((/* implicit */int) var_8))))));
    }
    for (signed char i_33 = 0; i_33 < 20; i_33 += 4) /* same iter space */
    {
        arr_133 [i_33] [i_33] = ((/* implicit */signed char) max((((/* implicit */int) ((signed char) arr_88 [i_33] [i_33]))), (((((/* implicit */_Bool) arr_91 [i_33] [i_33])) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) var_2))))));
        arr_134 [i_33] = ((/* implicit */signed char) (!(((((/* implicit */int) (signed char)44)) < (((/* implicit */int) arr_94 [i_33] [i_33] [i_33] [i_33]))))));
    }
}
