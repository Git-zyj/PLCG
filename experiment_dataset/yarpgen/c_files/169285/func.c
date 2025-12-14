/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169285
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_7))));
        arr_4 [i_0] = ((unsigned short) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_7)))));
        arr_5 [i_0] = ((/* implicit */unsigned short) (((+((+(((/* implicit */int) var_6)))))) ^ (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) (unsigned short)46721))))))))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_1 = 2; i_1 < 16; i_1 += 4) 
    {
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)18814)))))));
        arr_9 [i_1] = ((/* implicit */unsigned short) (~(max((((((/* implicit */int) (unsigned short)59472)) & (((/* implicit */int) var_1)))), (((/* implicit */int) var_4))))));
        arr_10 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) min(((unsigned short)31315), (arr_6 [i_1 - 2])))) <= (((/* implicit */int) max((arr_8 [i_1 - 2]), (var_6))))));
    }
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_4 = 1; i_4 < 21; i_4 += 2) 
            {
                var_13 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_18 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_17 [i_4 + 1] [(unsigned short)5] [i_4] [i_2])) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)128)) : (((/* implicit */int) (unsigned short)16971)))))) == (((/* implicit */int) (unsigned short)7597))));
                arr_19 [i_2] [(unsigned short)17] [i_2] = var_6;
                arr_20 [i_2] = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_18 [i_2] [i_2] [i_2])))) + (((/* implicit */int) (unsigned short)61440))));
            }
            for (unsigned short i_5 = 2; i_5 < 20; i_5 += 1) 
            {
                var_14 ^= min((var_10), (arr_22 [i_3]));
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_5 - 2] [i_3] [i_5 + 1]))))) ? (((((/* implicit */_Bool) arr_22 [i_3])) ? (((/* implicit */int) (unsigned short)34191)) : (((/* implicit */int) var_4)))) : (((((((/* implicit */_Bool) (unsigned short)52154)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)28102)))) % (((/* implicit */int) var_3)))))))));
            }
            for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((((((/* implicit */int) (unsigned short)40226)) >= (((/* implicit */int) arr_16 [i_2] [i_3] [i_6] [i_6])))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) min(((unsigned short)60526), (arr_14 [i_2] [i_3] [i_3])))))) < (((/* implicit */int) max((max(((unsigned short)30708), (arr_17 [i_2] [i_2] [i_2] [i_2]))), (arr_22 [i_3])))))))));
                var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_8))))) == (((/* implicit */int) var_10)))))));
            }
            arr_25 [i_2] [i_2] = ((unsigned short) ((unsigned short) (~(((/* implicit */int) arr_21 [i_2])))));
            arr_26 [i_2] [i_3] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (unsigned short)34827))) ^ ((+(((/* implicit */int) var_2))))))) && (((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) (unsigned short)65519))))))));
            var_18 = (unsigned short)25306;
        }
        /* LoopSeq 3 */
        for (unsigned short i_7 = 1; i_7 < 19; i_7 += 3) /* same iter space */
        {
            arr_29 [i_2] = ((/* implicit */unsigned short) (((+(((/* implicit */int) max(((unsigned short)41128), (arr_21 [i_2])))))) != (((/* implicit */int) var_10))));
            var_19 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_14 [i_7 + 1] [i_7 - 1] [i_2])) % (((/* implicit */int) arr_14 [i_7 + 1] [i_7 - 1] [i_2])))) <= ((~(((/* implicit */int) (unsigned short)63708))))));
            var_20 = ((/* implicit */unsigned short) (+(max((((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) (unsigned short)13380))))), ((+(((/* implicit */int) arr_27 [i_2]))))))));
            arr_30 [(unsigned short)20] |= (unsigned short)24387;
            arr_31 [i_2] [i_2] [(unsigned short)0] = arr_23 [i_2];
        }
        for (unsigned short i_8 = 1; i_8 < 19; i_8 += 3) /* same iter space */
        {
            var_21 -= ((/* implicit */unsigned short) (((~(((/* implicit */int) min((var_1), (var_9)))))) > (((((/* implicit */_Bool) ((unsigned short) var_0))) ? (((((/* implicit */_Bool) arr_15 [(unsigned short)2])) ? (((/* implicit */int) arr_15 [(unsigned short)4])) : (((/* implicit */int) arr_24 [(unsigned short)8] [i_2] [i_2])))) : (((((/* implicit */int) (unsigned short)41137)) - (((/* implicit */int) (unsigned short)52154))))))));
            /* LoopSeq 4 */
            for (unsigned short i_9 = 0; i_9 < 22; i_9 += 1) 
            {
                arr_36 [i_2] [i_8] [i_2] [i_2] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned short)52596)) ? (((/* implicit */int) min((var_0), (var_1)))) : (((/* implicit */int) var_2))))));
                /* LoopSeq 3 */
                for (unsigned short i_10 = 0; i_10 < 22; i_10 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) 
                    {
                        arr_44 [i_2] [i_8] [i_9] [i_10] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) / (((/* implicit */int) (unsigned short)7458))));
                        var_22 = ((unsigned short) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)52154)) > (((/* implicit */int) (unsigned short)43469))))) >> ((((+(((/* implicit */int) var_10)))) - (16419)))));
                        arr_45 [i_11] [i_2] [i_2] [i_2] [i_2] = arr_18 [i_8] [i_2] [i_10];
                        var_23 = max((((unsigned short) max(((unsigned short)65530), (var_4)))), (((unsigned short) arr_14 [i_2] [i_10] [i_2])));
                    }
                    for (unsigned short i_12 = 0; i_12 < 22; i_12 += 1) 
                    {
                        arr_48 [i_2] [i_2] [i_2] [i_10] [i_12] [i_12] [i_12] = var_10;
                        arr_49 [i_2] [i_8] [(unsigned short)10] [i_10] [i_2] [i_12] = min((max(((unsigned short)40379), (var_0))), (max((arr_12 [i_10] [i_9]), (((unsigned short) (unsigned short)39186)))));
                    }
                    var_24 = (unsigned short)2666;
                    /* LoopSeq 3 */
                    for (unsigned short i_13 = 0; i_13 < 22; i_13 += 3) /* same iter space */
                    {
                        arr_54 [i_2] [(unsigned short)8] |= ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned short)35584)))) + (((/* implicit */int) (unsigned short)0))));
                        var_25 = (unsigned short)31701;
                    }
                    for (unsigned short i_14 = 0; i_14 < 22; i_14 += 3) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)41137))));
                        arr_57 [i_2] [i_8] [i_9] [(unsigned short)4] [i_14] [i_8] |= (unsigned short)480;
                        arr_58 [i_2] [i_2] [i_2] [i_2] [i_2] = ((unsigned short) var_5);
                        arr_59 [i_2] [i_8] [(unsigned short)5] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? ((~(((/* implicit */int) (unsigned short)64499)))) : ((+(((/* implicit */int) arr_17 [i_9] [(unsigned short)5] [i_9] [i_8 + 1]))))));
                    }
                    for (unsigned short i_15 = 0; i_15 < 22; i_15 += 3) /* same iter space */
                    {
                        arr_63 [i_2] [i_8 - 1] [i_9] [i_10] [i_2] = ((/* implicit */unsigned short) (~(min((((((/* implicit */_Bool) arr_32 [i_15] [i_9])) ? (((/* implicit */int) (unsigned short)10435)) : (((/* implicit */int) (unsigned short)41894)))), (((/* implicit */int) min((var_8), (arr_17 [i_2] [i_2] [i_2] [(unsigned short)8]))))))));
                        arr_64 [i_2] [i_8 - 1] [i_9] [i_10] [i_2] [i_9] = ((unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)44558)) && (((/* implicit */_Bool) var_8)))))));
                    }
                    var_27 = max(((unsigned short)24402), ((unsigned short)16971));
                }
                for (unsigned short i_16 = 0; i_16 < 22; i_16 += 3) /* same iter space */
                {
                    var_28 *= (unsigned short)2139;
                    var_29 = var_1;
                }
                for (unsigned short i_17 = 0; i_17 < 22; i_17 += 3) /* same iter space */
                {
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)64390)) ? (((/* implicit */int) (unsigned short)5)) : (((/* implicit */int) (unsigned short)0))));
                    var_31 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)5663))));
                    var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)53538)) ^ (((/* implicit */int) (unsigned short)65535)))))));
                }
                arr_73 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)39053)) : (((/* implicit */int) var_11)))))) ? (((/* implicit */int) ((unsigned short) arr_65 [i_2] [i_8 - 1] [i_9] [i_9] [i_8]))) : (((/* implicit */int) arr_13 [i_2] [i_8]))));
                var_33 = (unsigned short)20975;
            }
            for (unsigned short i_18 = 0; i_18 < 22; i_18 += 3) 
            {
                arr_77 [i_2] [i_2] [i_2] = var_3;
                /* LoopNest 2 */
                for (unsigned short i_19 = 1; i_19 < 19; i_19 += 1) 
                {
                    for (unsigned short i_20 = 4; i_20 < 21; i_20 += 4) 
                    {
                        {
                            var_34 += ((unsigned short) (unsigned short)34828);
                            arr_82 [i_2] [i_8] [i_18] [(unsigned short)18] [i_2] [i_8] = var_2;
                        }
                    } 
                } 
                var_35 = (unsigned short)32767;
                var_36 = arr_47 [i_2];
            }
            for (unsigned short i_21 = 0; i_21 < 22; i_21 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_22 = 0; i_22 < 22; i_22 += 1) /* same iter space */
                {
                    var_37 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_38 [i_2] [i_2] [i_2] [i_2]))));
                    var_38 ^= (unsigned short)29197;
                    arr_88 [i_2] [i_8] [i_2] [i_22] [i_2] = (unsigned short)65535;
                }
                for (unsigned short i_23 = 0; i_23 < 22; i_23 += 1) /* same iter space */
                {
                    arr_91 [i_21] [i_2] [i_21] [(unsigned short)0] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_6)) != (((/* implicit */int) max((arr_12 [i_2] [i_8]), (var_3)))))) && (((/* implicit */_Bool) ((unsigned short) (unsigned short)65535)))));
                    var_39 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)61843))));
                }
                for (unsigned short i_24 = 0; i_24 < 22; i_24 += 1) /* same iter space */
                {
                    var_40 |= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_71 [i_2] [i_21]))));
                    arr_95 [i_2] [i_2] [i_2] = (unsigned short)55100;
                    var_41 = max(((unsigned short)65533), ((unsigned short)18873));
                    arr_96 [i_2] [i_2] [i_2] [i_24] = ((/* implicit */unsigned short) ((((/* implicit */int) max((((unsigned short) arr_42 [i_2] [i_2] [i_2] [i_2] [i_2])), ((unsigned short)24399)))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) min(((unsigned short)61591), (var_10)))))))));
                }
                arr_97 [i_2] [i_8] [i_21] = ((unsigned short) var_0);
                var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_23 [i_2])))))));
            }
            for (unsigned short i_25 = 0; i_25 < 22; i_25 += 1) 
            {
                var_43 *= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)63524)) : (((/* implicit */int) (unsigned short)55101))))) && (((/* implicit */_Bool) (unsigned short)63821)))))));
                var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) arr_38 [i_2] [i_2] [i_8] [i_25]))))) ? (((((/* implicit */int) ((unsigned short) arr_35 [i_2] [i_2]))) + (((((/* implicit */_Bool) (unsigned short)25862)) ? (((/* implicit */int) (unsigned short)3547)) : (((/* implicit */int) arr_81 [i_8] [i_8] [i_25] [i_25] [i_8])))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_98 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_15 [i_2])) : (((/* implicit */int) (unsigned short)62416))))) && (((/* implicit */_Bool) var_7)))))));
                arr_101 [i_2] = (unsigned short)37570;
                arr_102 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) ((unsigned short) arr_22 [i_2]))), ((~(((/* implicit */int) var_0))))))) ? ((+(((/* implicit */int) ((unsigned short) (unsigned short)43698))))) : (max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) (unsigned short)24400)) ? (((/* implicit */int) arr_55 [i_2] [i_25] [i_8 + 3] [i_2] [(unsigned short)4])) : (((/* implicit */int) var_8))))))));
            }
            /* LoopSeq 1 */
            for (unsigned short i_26 = 2; i_26 < 21; i_26 += 1) 
            {
                var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) arr_74 [i_2] [i_8 + 3] [i_2])) / (((/* implicit */int) (unsigned short)58480)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)25164)) && (((/* implicit */_Bool) var_9)))))))) ? ((~(((/* implicit */int) arr_69 [i_2] [i_26 - 2] [i_8] [i_26 - 1] [i_8] [i_2])))) : (((((/* implicit */int) var_1)) << ((((+(((/* implicit */int) var_5)))) - (30392)))))));
                arr_106 [(unsigned short)8] [i_2] [i_26 - 1] = var_6;
            }
            var_46 ^= ((unsigned short) (unsigned short)33841);
        }
        for (unsigned short i_27 = 1; i_27 < 19; i_27 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_28 = 1; i_28 < 20; i_28 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_29 = 0; i_29 < 22; i_29 += 3) 
                {
                    arr_114 [i_2] [i_2] [i_2] [i_27] [i_28] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_38 [i_29] [i_28 + 1] [i_27] [i_2])) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) min((arr_94 [i_28 + 2] [i_28 + 2] [i_28 + 2] [i_28] [i_28 - 1]), ((unsigned short)30))))));
                    arr_115 [i_2] = arr_93 [i_2] [i_29] [i_28] [i_29];
                }
                for (unsigned short i_30 = 3; i_30 < 18; i_30 += 3) /* same iter space */
                {
                    arr_118 [i_2] [i_27] [i_30] = max(((unsigned short)8087), (var_3));
                    arr_119 [i_2] [i_27] [i_2] [i_2] [i_2] [i_30 + 2] = (unsigned short)65533;
                    arr_120 [i_2] [i_2] = (unsigned short)49437;
                }
                for (unsigned short i_31 = 3; i_31 < 18; i_31 += 3) /* same iter space */
                {
                    arr_124 [i_2] = arr_116 [i_27 + 2] [i_27 + 2];
                    var_47 = ((/* implicit */unsigned short) max(((~((~(((/* implicit */int) var_6)))))), (((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) var_0)))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_32 = 1; i_32 < 21; i_32 += 2) 
                    {
                        arr_127 [i_2] [i_2] = var_8;
                        arr_128 [i_2] [i_27] [i_2] [i_2] [i_32] = (unsigned short)65533;
                    }
                }
                var_48 += ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_3)))))) + (((/* implicit */int) (unsigned short)47455))));
                var_49 = ((/* implicit */unsigned short) min((((((((/* implicit */int) (unsigned short)63530)) >> (((((/* implicit */int) var_0)) - (22003))))) + (((/* implicit */int) ((((/* implicit */int) arr_103 [i_2] [i_2] [(unsigned short)1] [i_2])) >= (((/* implicit */int) (unsigned short)24586))))))), (((/* implicit */int) ((((/* implicit */int) var_10)) <= ((~(((/* implicit */int) (unsigned short)384)))))))));
                /* LoopNest 2 */
                for (unsigned short i_33 = 1; i_33 < 21; i_33 += 2) 
                {
                    for (unsigned short i_34 = 1; i_34 < 19; i_34 += 2) 
                    {
                        {
                            var_50 = (unsigned short)40949;
                            var_51 = (unsigned short)7650;
                        }
                    } 
                } 
                arr_133 [i_27] [i_27] [(unsigned short)6] |= ((/* implicit */unsigned short) (~(((/* implicit */int) var_11))));
            }
            arr_134 [i_2] = var_9;
            /* LoopNest 3 */
            for (unsigned short i_35 = 0; i_35 < 22; i_35 += 4) 
            {
                for (unsigned short i_36 = 0; i_36 < 22; i_36 += 3) 
                {
                    for (unsigned short i_37 = 1; i_37 < 21; i_37 += 4) 
                    {
                        {
                            arr_144 [i_2] [i_2] [i_35] [i_36] [i_35] = var_6;
                            arr_145 [i_2] [i_2] [i_36] = max((min((var_11), (max(((unsigned short)6923), (arr_47 [i_27]))))), (var_2));
                            arr_146 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (+(((((/* implicit */int) var_2)) + (((/* implicit */int) (unsigned short)35780))))));
                            var_52 ^= arr_99 [i_35] [i_27] [i_35];
                            arr_147 [i_35] [i_35] |= ((unsigned short) ((unsigned short) var_4));
                        }
                    } 
                } 
            } 
        }
        arr_148 [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) max(((unsigned short)32777), ((unsigned short)63770)))))));
    }
}
