/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154573
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
    var_16 = ((/* implicit */unsigned short) max(((-(((/* implicit */int) max((var_5), (var_8)))))), (min((((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_1)))), ((+(var_0)))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) arr_0 [i_0])))));
        var_17 = ((/* implicit */unsigned short) ((max((((var_10) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_15)))), (((/* implicit */int) var_10)))) >> ((((~(((/* implicit */int) (unsigned short)65525)))) + (65556)))));
        var_18 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((~(var_0)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_5)))) <= (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_2)) : (var_3)))))) : (((/* implicit */int) var_7))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = min((((/* implicit */int) (unsigned short)61452)), (max((((/* implicit */int) (_Bool)0)), (707096154))));
        var_19 = ((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)65525)), (707096143)));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = arr_6 [i_2] [i_2];
        arr_12 [i_2] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_0 [i_2])), (((int) max((((/* implicit */unsigned short) var_12)), (arr_10 [(_Bool)1]))))));
        var_20 ^= max(((!(((/* implicit */_Bool) max((((/* implicit */int) var_11)), (var_3)))))), (((_Bool) (-(arr_1 [i_2])))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_17 [i_2] = ((/* implicit */unsigned short) (+(arr_8 [i_3])));
                    arr_18 [i_2] [i_3] [i_2] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_4]))))) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) var_7)))), (((/* implicit */int) var_13))));
                    arr_19 [i_2] [i_3] [i_3] [i_3] = min((((int) min((var_11), (var_7)))), (((/* implicit */int) ((_Bool) arr_16 [i_2 - 1]))));
                    var_21 = ((/* implicit */unsigned short) var_12);
                }
            } 
        } 
    }
    for (unsigned short i_5 = 2; i_5 < 15; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 15; i_6 += 4) 
        {
            for (int i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_8 = 0; i_8 < 17; i_8 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (int i_9 = 0; i_9 < 17; i_9 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_5])) * (((/* implicit */int) arr_0 [i_5]))))) ? (((/* implicit */int) ((_Bool) arr_30 [i_5] [i_5] [i_5 + 1] [i_5] [i_5]))) : (((((/* implicit */int) arr_4 [i_5])) / (((/* implicit */int) var_14))))))));
                            var_23 += var_1;
                        }
                        arr_33 [i_8] [i_8] |= max((((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (var_13)))), ((-(((/* implicit */int) var_11)))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_36 [i_5 - 1] [i_5] [i_5] [(_Bool)1] [i_5] [i_5] = ((/* implicit */int) var_14);
                        var_24 = ((/* implicit */int) var_12);
                        arr_37 [i_5] [i_5] [i_5] [i_6] [i_5] |= ((/* implicit */_Bool) max((((/* implicit */int) max((max((var_7), (var_10))), (var_14)))), (((((/* implicit */_Bool) 707096143)) ? (707096143) : (707096158)))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        arr_41 [i_5] [i_7] [i_5] = ((/* implicit */_Bool) ((int) (+(((/* implicit */int) var_2)))));
                        var_25 += var_14;
                    }
                    /* vectorizable */
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        var_26 = ((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned short)0))))));
                        var_27 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))) ? (arr_32 [i_12 - 1]) : (((/* implicit */int) arr_28 [i_5] [i_6] [i_7] [i_6] [i_12])));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((unsigned short) arr_8 [i_5 + 2])))));
            arr_47 [(unsigned short)16] &= var_13;
            arr_48 [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_10 [i_5 + 1]))));
            var_29 = arr_25 [i_5] [i_13];
        }
        /* LoopSeq 2 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_15 = 0; i_15 < 17; i_15 += 4) 
            {
                arr_56 [i_15] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) (+(max((((/* implicit */int) (unsigned short)593)), (-707096153)))));
                var_30 = ((/* implicit */_Bool) var_1);
                var_31 -= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)15330)) | (((/* implicit */int) (_Bool)1))));
            }
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 17; i_16 += 1) 
            {
                for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                {
                    {
                        var_32 = ((/* implicit */_Bool) max(((-((+(((/* implicit */int) var_5)))))), (((/* implicit */int) ((unsigned short) min((var_0), (((/* implicit */int) var_4))))))));
                        var_33 = ((/* implicit */unsigned short) max((((max((var_7), (var_12))) ? (arr_58 [i_5] [(unsigned short)4]) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_24 [i_14] [i_16] [i_16])))))), (max((max((arr_1 [i_16]), (arr_58 [i_5] [3]))), (max((((/* implicit */int) var_13)), (var_3)))))));
                        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */int) var_7)) : ((~((~(var_3))))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
            {
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    {
                        arr_66 [i_5] [i_5] = ((/* implicit */unsigned short) (~(max(((-(((/* implicit */int) var_13)))), ((~(arr_1 [i_5])))))));
                        arr_67 [i_5] [i_5] [i_5 + 1] [i_5 - 1] [i_5] [i_5] = ((/* implicit */_Bool) (((+(max((arr_1 [i_5]), (arr_62 [i_5] [i_14] [i_18] [i_19]))))) + (((/* implicit */int) var_5))));
                        var_35 = ((/* implicit */_Bool) (-((-((+(((/* implicit */int) var_11))))))));
                    }
                } 
            } 
        }
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            /* LoopSeq 4 */
            for (int i_21 = 2; i_21 < 14; i_21 += 1) 
            {
                arr_74 [i_21] [(unsigned short)8] [i_5] &= ((/* implicit */_Bool) max((((int) var_10)), (((/* implicit */int) var_14))));
                arr_75 [i_5] [i_20] [i_20] [i_20] = ((/* implicit */_Bool) min((min(((-(((/* implicit */int) arr_43 [i_5 + 1] [i_5 + 1] [i_20] [i_21] [i_21])))), (((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (var_1)))))), ((+(((int) var_0))))));
            }
            for (unsigned short i_22 = 0; i_22 < 17; i_22 += 3) 
            {
                arr_79 [i_5] [i_5] [i_5] = max((((/* implicit */int) var_13)), ((-((+(813513591))))));
                arr_80 [i_5] [2] [i_20] [i_22] = ((/* implicit */unsigned short) min((((((/* implicit */int) var_14)) >> (((((/* implicit */int) var_13)) - (54295))))), ((~(var_3)))));
            }
            for (int i_23 = 1; i_23 < 16; i_23 += 2) 
            {
                arr_84 [i_5 + 2] [i_20] [i_5] [i_23 + 1] = ((/* implicit */_Bool) max(((~(((/* implicit */int) ((_Bool) arr_6 [i_5] [i_5]))))), ((+(((/* implicit */int) min((arr_78 [i_5] [i_20] [i_5] [(_Bool)1]), (((/* implicit */unsigned short) arr_52 [i_5] [i_5] [i_5])))))))));
                var_36 = arr_60 [i_5] [i_20] [i_23] [i_23] [i_23];
            }
            for (unsigned short i_24 = 0; i_24 < 17; i_24 += 2) 
            {
                var_37 = (+((((+(arr_77 [i_24] [i_5 + 2] [i_5 + 2]))) * ((+(((/* implicit */int) var_7)))))));
                arr_88 [i_5] [i_5 + 2] [i_5] = (+((((!(arr_59 [i_5]))) ? ((+(arr_25 [i_5] [i_24]))) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_5])) < (((/* implicit */int) var_15))))))));
                arr_89 [i_5] [i_5] [i_24] = ((/* implicit */_Bool) max((min((max((707096138), (((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) var_7)))))), (max((((var_14) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [i_5])))), (((((/* implicit */int) var_4)) / (var_3)))))));
            }
            /* LoopSeq 3 */
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
            {
                arr_92 [i_5] [i_5] [i_25] = var_11;
                arr_93 [i_5] [i_5] [i_25] [i_5] = ((/* implicit */int) var_7);
                var_38 = ((/* implicit */int) ((_Bool) (-(((/* implicit */int) var_4)))));
            }
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
            {
                var_39 ^= ((/* implicit */unsigned short) (+((-(arr_60 [i_5] [(unsigned short)2] [i_26] [i_20] [i_20])))));
                var_40 = ((/* implicit */_Bool) max((arr_53 [i_26] [(unsigned short)15] [i_5]), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_14)) : (((var_10) ? (var_0) : (((/* implicit */int) var_14))))))));
                var_41 ^= max((min(((~(arr_57 [i_5 + 2] [i_5 + 2]))), (((/* implicit */int) var_15)))), ((~(((/* implicit */int) arr_52 [i_5 - 1] [i_20] [i_26])))));
                arr_97 [i_5] [i_20] [i_20] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) var_11))))))));
            }
            for (int i_27 = 0; i_27 < 17; i_27 += 3) 
            {
                var_42 = ((arr_30 [9] [i_20] [i_20] [i_5] [i_5]) != ((+(((/* implicit */int) (_Bool)1)))));
                var_43 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) ((var_10) || (var_15))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max((max((var_7), (var_2))), (((_Bool) arr_77 [i_5 - 2] [i_27] [16])))))));
                arr_100 [i_5] [i_20] [i_5 - 2] [i_5] = arr_99 [i_5] [i_5] [i_20] [i_27];
                /* LoopSeq 3 */
                for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                    {
                        arr_107 [i_5] [i_5] [i_5] = max((((((/* implicit */_Bool) (+(((/* implicit */int) arr_39 [i_5] [i_5] [i_27] [16] [(_Bool)1]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_14)), (var_13)))) : ((+(((/* implicit */int) arr_68 [i_5])))))), ((+(((/* implicit */int) ((unsigned short) var_2))))));
                        var_44 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (((var_4) ? (arr_91 [i_5] [i_20]) : (((/* implicit */int) var_7))))))) ? (((((/* implicit */_Bool) (unsigned short)50205)) ? (((/* implicit */int) (unsigned short)9)) : (((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) var_6))))));
                        arr_108 [i_5] [i_5] [i_5] [i_28] [i_5] [i_20] [i_20] = arr_44 [i_5] [i_5];
                    }
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        var_45 ^= ((/* implicit */unsigned short) arr_0 [i_5]);
                        arr_113 [i_5] [i_5] [i_5] [i_5] [i_5] = min((min(((unsigned short)15909), ((unsigned short)0))), ((unsigned short)15330));
                        var_46 = ((/* implicit */unsigned short) ((_Bool) max((((unsigned short) var_8)), (((/* implicit */unsigned short) ((_Bool) arr_9 [i_5]))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_31 = 0; i_31 < 17; i_31 += 1) 
                    {
                        var_47 *= (((-(((/* implicit */int) var_11)))) % (((/* implicit */int) (!(var_10)))));
                        arr_116 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_10)))))));
                    }
                    arr_117 [4] [4] [i_27] [i_5] = ((((/* implicit */int) max((var_6), (((/* implicit */unsigned short) var_4))))) >> (max((arr_91 [i_5] [i_5 - 2]), (((/* implicit */int) var_14)))));
                }
                /* vectorizable */
                for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                {
                    /* LoopSeq 4 */
                    for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                    {
                        arr_123 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) var_9)))));
                        arr_124 [i_5] [i_5] = ((/* implicit */unsigned short) ((_Bool) var_9));
                        arr_125 [i_5] [i_20] = ((/* implicit */int) arr_22 [i_5]);
                        var_48 = ((/* implicit */int) arr_103 [i_5 - 2] [i_27] [i_5] [i_33]);
                        arr_126 [(unsigned short)0] [i_20] [i_5] = ((/* implicit */_Bool) ((int) var_8));
                    }
                    for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
                    {
                        var_49 = (((_Bool)1) ? (-1919783264) : (((/* implicit */int) (_Bool)1)));
                        var_50 ^= (-(((/* implicit */int) ((unsigned short) var_0))));
                        arr_129 [(_Bool)0] [i_5] [(unsigned short)14] [i_32] = ((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_34])) & (((/* implicit */int) arr_5 [i_32]))));
                    }
                    for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) /* same iter space */
                    {
                        arr_132 [(_Bool)1] [i_20] [i_5] [i_27] [(_Bool)1] [i_35] = ((/* implicit */unsigned short) ((_Bool) arr_120 [i_5] [i_5] [i_5]));
                        arr_133 [i_5] [i_20] [i_27] [i_20] [i_35] [i_32] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_130 [(unsigned short)12] [i_5] [i_5 - 1] [i_5 - 1] [i_5])) ? (arr_130 [i_5 - 2] [i_5 + 1] [i_5 - 1] [i_5 - 1] [13]) : (var_0)));
                        arr_134 [i_5] [i_5] [i_20] [i_27] [i_27] [i_20] [i_35] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_44 [i_5] [i_5]))));
                    }
                    for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) /* same iter space */
                    {
                        arr_138 [i_5] [i_5 + 2] [i_5] [i_5 - 1] [i_5] = ((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_14)))));
                        var_51 = ((/* implicit */int) arr_65 [i_5 + 2] [i_20] [i_20] [i_5 + 2] [i_20]);
                        var_52 = ((/* implicit */int) max((var_52), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [(_Bool)1]))))) ? (var_3) : ((+(((/* implicit */int) var_14))))))));
                        var_53 *= ((/* implicit */_Bool) (((+(((/* implicit */int) var_11)))) & ((-(var_3)))));
                        var_54 = ((/* implicit */_Bool) ((((_Bool) var_4)) ? (((/* implicit */int) var_5)) : ((+(var_0)))));
                    }
                    arr_139 [i_5] = (-(((/* implicit */int) arr_0 [i_5 + 2])));
                }
                /* vectorizable */
                for (_Bool i_37 = 0; i_37 < 0; i_37 += 1) 
                {
                    arr_142 [i_5] [i_27] [(_Bool)0] [i_27] |= ((/* implicit */_Bool) (+(((/* implicit */int) arr_98 [i_5] [i_5 + 1] [i_5 + 1] [i_5]))));
                    var_55 = (+(var_3));
                }
                arr_143 [i_5] [i_5 + 2] [i_27] [i_5] = ((/* implicit */unsigned short) var_7);
            }
        }
    }
    var_56 = ((/* implicit */int) ((_Bool) (-((+(((/* implicit */int) var_1)))))));
}
