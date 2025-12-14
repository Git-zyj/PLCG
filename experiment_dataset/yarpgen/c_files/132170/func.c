/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132170
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_19 = (unsigned char)243;
        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0 - 1]))));
    }
    for (unsigned char i_1 = 1; i_1 < 12; i_1 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1] [(unsigned char)0]))))) ? (((/* implicit */int) (unsigned char)12)) : ((~(((/* implicit */int) (unsigned char)174))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_5 [i_1])))) : (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 2])))) : (((/* implicit */int) arr_5 [i_1]))));
        /* LoopSeq 4 */
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) /* same iter space */
        {
            var_22 = min(((unsigned char)97), ((unsigned char)243));
            var_23 = arr_5 [i_1];
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_18), (arr_3 [i_1 + 2] [i_1 - 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 - 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 + 2])))))));
        }
        for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned char i_4 = 1; i_4 < 12; i_4 += 2) 
            {
                var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)255))));
                var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_4]))));
                var_27 = ((unsigned char) ((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) min((arr_1 [(unsigned char)1]), (arr_12 [i_3]))))));
                arr_13 [i_4] [i_3] [i_1] = arr_1 [i_1 + 1];
            }
            for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) /* same iter space */
            {
                var_28 = arr_3 [i_1] [i_1];
                arr_17 [i_3] [i_3] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_3] [i_3])) ? (((/* implicit */int) arr_16 [i_1] [i_3] [i_3] [i_5])) : (((/* implicit */int) min((min(((unsigned char)12), ((unsigned char)96))), (arr_4 [i_5]))))));
            }
            for (unsigned char i_6 = 0; i_6 < 14; i_6 += 3) /* same iter space */
            {
                var_29 = min((((unsigned char) (+(((/* implicit */int) arr_11 [i_1]))))), (arr_15 [i_1] [i_3]));
                var_30 = ((unsigned char) arr_1 [i_1 - 1]);
            }
            arr_20 [(unsigned char)10] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_4 [i_1 - 1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1 + 1])) != (((/* implicit */int) arr_7 [i_1 + 1]))))) : (((((/* implicit */_Bool) arr_12 [i_1 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) (unsigned char)186))))));
            arr_21 [i_3] [i_3] = ((unsigned char) var_6);
        }
        for (unsigned char i_7 = 1; i_7 < 11; i_7 += 2) 
        {
            arr_24 [i_1] [i_7] = ((/* implicit */unsigned char) min((min((((/* implicit */int) arr_16 [i_1] [i_7] [i_1] [i_1])), ((~(((/* implicit */int) var_9)))))), (((/* implicit */int) arr_22 [i_1]))));
            /* LoopSeq 4 */
            for (unsigned char i_8 = 0; i_8 < 14; i_8 += 1) 
            {
                var_31 = (unsigned char)181;
                var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_1] [i_1])) ? ((-(((((/* implicit */_Bool) arr_27 [i_1] [i_8])) ? (((/* implicit */int) arr_18 [(unsigned char)6])) : (((/* implicit */int) arr_2 [i_1])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned char)255), (arr_11 [i_1])))))))));
            }
            /* vectorizable */
            for (unsigned char i_9 = 4; i_9 < 11; i_9 += 1) /* same iter space */
            {
                arr_30 [(unsigned char)7] [i_1] [(unsigned char)0] [i_1] = arr_11 [i_7 + 2];
                arr_31 [i_1 + 2] [i_7] [i_9] = ((unsigned char) var_4);
                var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)255))));
                var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_1] [(unsigned char)0] [i_9 - 3])) >> (((((/* implicit */int) arr_8 [i_1 + 2] [(unsigned char)4] [(unsigned char)4])) - (63)))));
            }
            for (unsigned char i_10 = 4; i_10 < 11; i_10 += 1) /* same iter space */
            {
                var_35 = arr_10 [i_1] [i_10];
                var_36 = min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_6 [i_10] [i_7] [i_1]), (var_3))))))), ((unsigned char)81));
            }
            for (unsigned char i_11 = 4; i_11 < 11; i_11 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_12 = 0; i_12 < 14; i_12 += 1) 
                {
                    var_37 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)255))));
                    var_38 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)128)) / (((/* implicit */int) ((unsigned char) arr_11 [i_1])))));
                    var_39 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)0)) >= (((/* implicit */int) arr_12 [i_1]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 0; i_13 < 14; i_13 += 4) 
                    {
                        arr_45 [i_1] [i_7] [i_12] [i_12] [i_13] = arr_22 [i_13];
                        arr_46 [i_1] [i_12] [i_11] [i_11] [i_11] = arr_33 [i_1] [i_1];
                    }
                }
                for (unsigned char i_14 = 0; i_14 < 14; i_14 += 1) 
                {
                    var_40 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) var_5)))), ((+(((/* implicit */int) min((var_7), ((unsigned char)99))))))));
                    var_41 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((unsigned char) (unsigned char)0))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) min((var_2), (arr_12 [i_14])))))), (((/* implicit */int) arr_22 [i_14]))));
                    var_42 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) arr_50 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7]))))));
                    var_43 = arr_28 [i_11];
                }
                /* vectorizable */
                for (unsigned char i_15 = 0; i_15 < 14; i_15 += 1) 
                {
                    arr_53 [(unsigned char)2] [i_1] [i_1] [i_7] [(unsigned char)2] [i_15] = ((unsigned char) arr_22 [i_7 + 1]);
                    /* LoopSeq 2 */
                    for (unsigned char i_16 = 0; i_16 < 14; i_16 += 3) 
                    {
                        var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_7 + 3] [i_7] [i_7 + 3])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_52 [i_1])) : (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_33 [i_1] [i_1 - 1]))));
                        var_45 = (unsigned char)134;
                    }
                    for (unsigned char i_17 = 0; i_17 < 14; i_17 += 2) 
                    {
                        var_46 = var_4;
                        arr_60 [i_1] [i_7] = ((unsigned char) arr_22 [i_1 - 1]);
                        arr_61 [(unsigned char)9] [i_7] [(unsigned char)9] [i_15] [i_17] [(unsigned char)9] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_15])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) arr_15 [(unsigned char)7] [i_1 + 2])) : (((/* implicit */int) arr_9 [i_1] [i_1])))))));
                    }
                }
                var_47 = min((min((arr_6 [i_1 - 1] [i_7 + 2] [i_11 + 3]), (arr_26 [i_11 - 2] [i_11] [i_7 + 3] [(unsigned char)11]))), (arr_2 [i_1]));
                var_48 = arr_59 [i_1] [i_1 - 1] [i_1 - 1] [(unsigned char)10] [i_11];
            }
        }
        for (unsigned char i_18 = 0; i_18 < 14; i_18 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_19 = 4; i_19 < 12; i_19 += 1) 
            {
                for (unsigned char i_20 = 2; i_20 < 12; i_20 += 3) 
                {
                    {
                        var_49 = ((unsigned char) (~(((/* implicit */int) var_0))));
                        var_50 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_59 [i_1 + 2] [i_19] [i_1 + 2] [i_19 - 1] [(unsigned char)12]))));
                        var_51 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_44 [i_1 - 1] [i_1 + 1] [i_19 - 3] [i_20] [i_1 - 1] [i_20] [i_20])) ? (((/* implicit */int) arr_28 [i_1])) : (((/* implicit */int) arr_44 [i_1] [i_1 + 1] [i_19 - 2] [i_20] [(unsigned char)10] [i_20] [i_1])))), (((/* implicit */int) arr_29 [i_20 + 1] [i_19] [(unsigned char)9]))));
                    }
                } 
            } 
            var_52 = arr_32 [i_1];
        }
        arr_70 [i_1] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_67 [i_1 - 1] [i_1])) + (((/* implicit */int) arr_47 [i_1] [i_1] [i_1] [i_1] [i_1] [(unsigned char)12]))))) ? (((/* implicit */int) arr_29 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_1 + 2])))), ((~(((/* implicit */int) arr_69 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1]))))));
    }
    var_53 = var_4;
    /* LoopSeq 2 */
    for (unsigned char i_21 = 0; i_21 < 21; i_21 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_22 = 0; i_22 < 21; i_22 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_23 = 2; i_23 < 19; i_23 += 3) 
            {
                var_54 = arr_71 [i_23 + 2];
                /* LoopSeq 1 */
                for (unsigned char i_24 = 0; i_24 < 21; i_24 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_25 = 0; i_25 < 21; i_25 += 2) 
                    {
                        var_55 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_71 [i_21]))));
                        var_56 = arr_81 [i_25] [i_24] [(unsigned char)12] [(unsigned char)12];
                    }
                    var_57 = min((max((arr_76 [i_23 - 2] [i_23 - 2]), (arr_76 [i_23 + 2] [i_23 + 2]))), (arr_76 [i_23 + 2] [i_23 - 2]));
                    arr_83 [i_21] [i_22] [i_21] = arr_77 [i_21] [(unsigned char)12] [i_23];
                    var_58 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) (-(((/* implicit */int) arr_78 [i_21]))))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_26 = 0; i_26 < 21; i_26 += 1) 
                    {
                        arr_88 [i_26] [i_22] [i_22] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) var_2)))), ((~(((/* implicit */int) arr_71 [i_23]))))));
                        var_59 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_79 [i_23] [i_23] [i_23 + 2] [i_23 + 2] [i_23] [i_23])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_73 [i_21] [i_21])))), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_72 [i_23 - 2]))))));
                        var_60 = (unsigned char)188;
                    }
                    for (unsigned char i_27 = 0; i_27 < 21; i_27 += 2) 
                    {
                        var_61 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_77 [i_23 + 1] [i_23] [i_23 + 1]))));
                        var_62 = arr_84 [i_21] [i_22] [i_23] [i_24] [i_27];
                    }
                    for (unsigned char i_28 = 0; i_28 < 21; i_28 += 3) 
                    {
                        var_63 = ((unsigned char) arr_89 [i_21] [i_22] [i_23] [i_22] [i_24] [i_28]);
                        arr_93 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21] = ((unsigned char) var_9);
                        arr_94 [i_21] [i_28] [i_23 - 2] [i_24] [(unsigned char)1] [(unsigned char)1] = arr_72 [i_22];
                    }
                }
                var_64 = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) arr_72 [i_22]))), (min(((+(((/* implicit */int) arr_81 [i_21] [i_22] [i_23] [(unsigned char)13])))), (((/* implicit */int) arr_92 [i_21] [i_21] [i_21] [i_22] [i_21]))))));
            }
            /* LoopNest 2 */
            for (unsigned char i_29 = 0; i_29 < 21; i_29 += 2) 
            {
                for (unsigned char i_30 = 0; i_30 < 21; i_30 += 1) 
                {
                    {
                        var_65 = ((unsigned char) (-(((/* implicit */int) var_11))));
                        var_66 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) var_13)))));
                        arr_99 [i_21] [i_21] [i_29] [i_30] = max((var_11), (((unsigned char) (unsigned char)113)));
                    }
                } 
            } 
            var_67 = min((arr_76 [i_22] [i_22]), (min(((unsigned char)135), (arr_76 [i_21] [i_22]))));
            arr_100 [i_21] [i_22] = min((arr_78 [i_21]), (arr_78 [(unsigned char)3]));
            var_68 = arr_95 [i_21];
        }
        for (unsigned char i_31 = 0; i_31 < 21; i_31 += 3) 
        {
            var_69 = (unsigned char)234;
            var_70 = arr_87 [i_21] [i_21] [(unsigned char)6] [i_21] [i_31];
        }
        for (unsigned char i_32 = 3; i_32 < 20; i_32 += 2) 
        {
            var_71 = arr_86 [i_21] [i_21];
            var_72 = arr_96 [i_32] [i_32] [i_32] [i_32];
            var_73 = arr_103 [i_21] [i_21] [i_21];
            arr_106 [i_21] [i_32] = ((/* implicit */unsigned char) ((((/* implicit */int) var_18)) >= (((/* implicit */int) ((unsigned char) arr_96 [i_21] [i_21] [i_21] [i_32])))));
            var_74 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)168)))))));
        }
        for (unsigned char i_33 = 0; i_33 < 21; i_33 += 1) 
        {
            var_75 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((((/* implicit */int) (unsigned char)65)) / (((/* implicit */int) arr_95 [i_21])))) == ((-(((/* implicit */int) arr_81 [i_21] [i_33] [i_21] [i_33])))))))));
            var_76 = max((var_17), (arr_87 [i_21] [i_21] [(unsigned char)20] [i_21] [i_33]));
        }
        var_77 = ((/* implicit */unsigned char) (((+(((/* implicit */int) max(((unsigned char)74), ((unsigned char)245)))))) < (((((/* implicit */_Bool) arr_107 [i_21])) ? (((/* implicit */int) arr_107 [i_21])) : (((/* implicit */int) arr_107 [i_21]))))));
    }
    /* vectorizable */
    for (unsigned char i_34 = 3; i_34 < 23; i_34 += 3) 
    {
        var_78 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)251))));
        var_79 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_109 [i_34 - 3])) : (((/* implicit */int) arr_110 [i_34] [i_34]))));
        /* LoopNest 3 */
        for (unsigned char i_35 = 3; i_35 < 23; i_35 += 2) 
        {
            for (unsigned char i_36 = 0; i_36 < 24; i_36 += 1) 
            {
                for (unsigned char i_37 = 0; i_37 < 24; i_37 += 4) 
                {
                    {
                        var_80 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_115 [i_34] [i_34 + 1] [i_35 - 1] [i_37])) ? (((/* implicit */int) arr_115 [i_34] [i_34 - 1] [i_35 - 3] [i_34 - 1])) : (((/* implicit */int) arr_114 [i_35]))));
                        var_81 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_113 [i_34 - 1] [i_34 - 3] [i_35 - 3])) ? (((/* implicit */int) arr_113 [i_34 - 3] [i_34 - 2] [i_35 + 1])) : (((/* implicit */int) arr_113 [i_34 - 1] [i_34 - 2] [i_35 + 1]))));
                        var_82 = arr_112 [i_34] [i_34];
                        var_83 = ((/* implicit */unsigned char) ((((/* implicit */int) var_16)) < (((/* implicit */int) var_2))));
                    }
                } 
            } 
        } 
        var_84 = ((unsigned char) ((unsigned char) arr_116 [i_34] [i_34] [i_34]));
    }
    var_85 = ((unsigned char) (((+(((/* implicit */int) var_2)))) % (((/* implicit */int) max((var_16), (var_4))))));
}
