/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168590
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
    var_19 = ((/* implicit */unsigned short) max(((-(((((/* implicit */_Bool) (unsigned short)61320)) ? (((/* implicit */int) (unsigned short)1023)) : (((/* implicit */int) (unsigned short)64877)))))), (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_1 [i_1]))) >= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_16))))));
                arr_4 [i_0] [i_0] [(unsigned short)5] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (unsigned short)65535))) >= (((/* implicit */int) arr_0 [i_0] [i_1]))));
                var_21 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_3), ((unsigned short)1)))) ? (((/* implicit */int) min((arr_2 [i_0] [i_0] [i_1]), (arr_2 [i_1] [i_1] [i_0])))) : (((/* implicit */int) max((arr_2 [i_0] [(unsigned short)4] [i_0]), (arr_2 [i_0] [i_0] [i_0]))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    arr_9 [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_0])) != (((/* implicit */int) arr_7 [i_1] [i_1] [i_0] [i_2]))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 4; i_3 < 13; i_3 += 4) 
                    {
                        arr_13 [i_2] [(unsigned short)12] [(unsigned short)9] [i_3] = ((unsigned short) arr_1 [i_3 - 3]);
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_3 - 4] [i_3 - 3] [i_3] [i_3 - 1])) >= (((/* implicit */int) arr_5 [i_0] [i_1] [i_3 + 1] [i_3])))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 2; i_4 < 14; i_4 += 4) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)57823)) ? (((/* implicit */int) (unsigned short)59403)) : (((/* implicit */int) (unsigned short)57542))));
                            arr_16 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)4)) >= ((+(((/* implicit */int) (unsigned short)7712))))));
                        }
                        for (unsigned short i_5 = 2; i_5 < 14; i_5 += 4) /* same iter space */
                        {
                            arr_19 [(unsigned short)12] [(unsigned short)0] [(unsigned short)7] [i_2] [i_5] [i_5] = ((unsigned short) (unsigned short)1);
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_5 - 2] [(unsigned short)5] [i_5 - 1] [i_3 + 2])) ? (((/* implicit */int) arr_8 [i_5 + 1] [i_5 - 1] [i_5 - 2] [i_3 - 4])) : (((/* implicit */int) arr_8 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_3 - 4]))));
                            arr_20 [i_2] [i_1] [i_1] [i_1] [i_2] = arr_18 [i_0] [i_1] [i_2] [i_3 - 4] [(unsigned short)14];
                            var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))));
                            arr_21 [i_2] = arr_6 [i_0] [(unsigned short)0] [i_0] [i_3];
                        }
                        for (unsigned short i_6 = 2; i_6 < 14; i_6 += 4) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)1090)) ? (((/* implicit */int) (unsigned short)1023)) : (((/* implicit */int) (unsigned short)3))));
                            arr_25 [i_0] [i_2] [i_0] [(unsigned short)1] [i_2] = (unsigned short)12541;
                        }
                        arr_26 [i_0] [i_2] [i_2] [i_3] [(unsigned short)13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */int) (unsigned short)65517)) : ((+(((/* implicit */int) (unsigned short)29708))))));
                    }
                    for (unsigned short i_7 = 4; i_7 < 11; i_7 += 4) 
                    {
                        arr_30 [i_2] [(unsigned short)1] [i_2] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_22 [i_0] [i_0] [i_2] [i_7 + 4] [i_7] [i_0] [i_7 + 4])) : (((/* implicit */int) arr_1 [i_7 - 3]))));
                        arr_31 [i_0] [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_7 - 2] [i_7] [i_7 - 2] [i_7 + 1])) < (((/* implicit */int) arr_22 [i_7 - 2] [i_7] [i_7 - 2] [i_7 + 1] [i_7 - 3] [i_7 - 4] [i_7]))));
                        var_27 = (unsigned short)7732;
                    }
                }
                for (unsigned short i_8 = 0; i_8 < 15; i_8 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned short) min((var_28), (arr_11 [i_8])));
                    var_29 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned short)59022)) ? (((/* implicit */int) (unsigned short)7710)) : (((((/* implicit */int) arr_34 [i_0] [i_0] [i_0])) + (((/* implicit */int) (unsigned short)64443)))))), ((-(((/* implicit */int) arr_29 [i_8] [i_1]))))));
                    var_30 += (unsigned short)0;
                }
                /* vectorizable */
                for (unsigned short i_9 = 0; i_9 < 15; i_9 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_10 = 1; i_10 < 12; i_10 += 3) 
                    {
                        var_31 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)65535))));
                        var_32 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)7710))));
                    }
                    for (unsigned short i_11 = 3; i_11 < 13; i_11 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) (-((+(((/* implicit */int) (unsigned short)65535)))))))));
                        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [(unsigned short)5] [i_1] [i_11])) ? (((/* implicit */int) (unsigned short)40532)) : (((/* implicit */int) (unsigned short)19992)))))));
                    }
                    for (unsigned short i_12 = 1; i_12 < 14; i_12 += 1) 
                    {
                        var_35 = arr_12 [i_12] [(unsigned short)7] [i_9] [i_12 + 1] [i_12 - 1];
                        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)17890)) * (((/* implicit */int) (unsigned short)29708))))) ? (((/* implicit */int) ((unsigned short) var_9))) : (((/* implicit */int) var_18))));
                        arr_45 [(unsigned short)4] [i_9] [i_1] [(unsigned short)4] = (unsigned short)16310;
                        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_28 [i_0] [i_1] [i_9] [i_12])))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_13 = 0; i_13 < 15; i_13 += 4) 
                    {
                        arr_50 [i_1] = ((unsigned short) (unsigned short)64435);
                        var_38 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_37 [i_0] [i_1] [i_9] [i_13]))));
                        /* LoopSeq 1 */
                        for (unsigned short i_14 = 4; i_14 < 11; i_14 += 3) 
                        {
                            var_39 = var_6;
                            var_40 *= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_32 [i_14] [i_0] [i_0]))))));
                        }
                        var_41 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)7728)) <= ((+(((/* implicit */int) (unsigned short)64895))))));
                    }
                    for (unsigned short i_15 = 1; i_15 < 14; i_15 += 1) 
                    {
                        arr_57 [i_0] [i_1] [i_9] [i_15] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_44 [i_15] [i_15 - 1] [i_15 + 1] [i_15])) ? (((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) arr_7 [i_0] [(unsigned short)7] [i_0] [i_0]))))) : (((/* implicit */int) arr_14 [i_0]))));
                        var_42 = arr_47 [i_15 + 1] [i_15] [i_15] [i_15 + 1];
                    }
                    var_43 = arr_49 [i_0] [i_0] [(unsigned short)2] [i_0] [i_0];
                }
                for (unsigned short i_16 = 0; i_16 < 15; i_16 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_17 = 0; i_17 < 15; i_17 += 4) 
                    {
                        for (unsigned short i_18 = 2; i_18 < 13; i_18 += 3) 
                        {
                            {
                                var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) (unsigned short)47662))))))));
                                var_45 |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_14 [i_0])) % (((/* implicit */int) ((((/* implicit */int) arr_17 [i_16] [i_1] [i_16] [(unsigned short)8] [(unsigned short)9])) == ((+(((/* implicit */int) arr_17 [i_0] [i_1] [i_16] [i_17] [(unsigned short)13])))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned short i_19 = 1; i_19 < 11; i_19 += 1) 
                    {
                        arr_72 [(unsigned short)10] [i_1] [i_16] [(unsigned short)0] &= ((/* implicit */unsigned short) (+(((/* implicit */int) max(((unsigned short)57550), ((unsigned short)19624))))));
                        var_46 = ((/* implicit */unsigned short) max((((((/* implicit */int) max((arr_69 [i_19] [i_16]), (var_18)))) >> (((((/* implicit */int) min((var_4), ((unsigned short)64445)))) - (54841))))), ((+(((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)27876))))))));
                        var_47 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)6535))));
                        /* LoopSeq 1 */
                        for (unsigned short i_20 = 1; i_20 < 12; i_20 += 3) 
                        {
                            var_48 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_42 [i_0] [i_1] [i_16] [i_19 + 1] [i_20])) ? (((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */int) var_1)) > (((/* implicit */int) (unsigned short)12727))))), (arr_53 [i_16] [i_19] [i_16] [i_1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)45100)) ? (((/* implicit */int) (unsigned short)1090)) : (((/* implicit */int) (unsigned short)25674))))) ? (((/* implicit */int) ((unsigned short) arr_32 [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)37711)) : (((/* implicit */int) var_9))))))));
                            arr_76 [i_0] [i_0] [i_20] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_53 [i_0] [i_0] [(unsigned short)9] [i_0])))))) * (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (unsigned short)65535))))))));
                            arr_77 [(unsigned short)5] [i_20] [(unsigned short)6] [i_20] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) (unsigned short)65513)))));
                            var_49 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) var_13))))));
                        }
                        var_50 = ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7337)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_67 [i_1] [i_1] [i_19]))))) ? (((((/* implicit */int) var_2)) & (((/* implicit */int) arr_61 [i_19] [i_16])))) : (((/* implicit */int) (unsigned short)33985))));
                    }
                    /* vectorizable */
                    for (unsigned short i_21 = 0; i_21 < 15; i_21 += 3) 
                    {
                        var_51 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_53 [i_0] [i_0] [i_16] [i_21])) >= (((((/* implicit */_Bool) (unsigned short)3668)) ? (((/* implicit */int) arr_78 [i_21] [(unsigned short)9] [(unsigned short)7] [(unsigned short)7] [i_0])) : (((/* implicit */int) var_7))))));
                        var_52 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)0))));
                        var_53 = (unsigned short)23;
                        /* LoopSeq 2 */
                        for (unsigned short i_22 = 0; i_22 < 15; i_22 += 3) 
                        {
                            var_54 = ((/* implicit */unsigned short) min((var_54), (((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)17873)))))));
                            arr_84 [i_0] [i_21] [(unsigned short)4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_37 [i_22] [(unsigned short)14] [(unsigned short)14] [i_1])) : (((/* implicit */int) (unsigned short)6757))))) ? (((/* implicit */int) arr_49 [(unsigned short)1] [i_1] [(unsigned short)6] [i_21] [(unsigned short)1])) : (((/* implicit */int) var_16))));
                        }
                        for (unsigned short i_23 = 1; i_23 < 11; i_23 += 3) 
                        {
                            var_55 = var_8;
                            var_56 = ((unsigned short) var_8);
                            var_57 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)36666)) >> (((((/* implicit */int) (unsigned short)61440)) - (61414)))));
                            var_58 = ((/* implicit */unsigned short) max((var_58), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_74 [i_0] [i_1] [(unsigned short)5] [i_16] [i_21] [i_21] [i_21]))))) % (((/* implicit */int) arr_60 [(unsigned short)4] [i_23] [i_23 + 2] [i_23 + 2])))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned short i_24 = 0; i_24 < 15; i_24 += 4) 
                    {
                        arr_90 [i_0] [i_1] [i_16] [i_24] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_82 [i_0] [i_1] [i_16] [i_24])) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)3)) || (((/* implicit */_Bool) (unsigned short)26446))))) : (((/* implicit */int) (unsigned short)37757))));
                        arr_91 [i_0] [i_0] [(unsigned short)13] [(unsigned short)2] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_18))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_25 = 1; i_25 < 14; i_25 += 1) 
                    {
                        for (unsigned short i_26 = 0; i_26 < 15; i_26 += 2) 
                        {
                            {
                                arr_98 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_81 [i_26] [i_26] [i_26]))));
                                var_59 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))));
                                arr_99 [(unsigned short)12] = ((/* implicit */unsigned short) ((max((((((/* implicit */int) (unsigned short)6742)) & (((/* implicit */int) (unsigned short)65519)))), (((/* implicit */int) arr_78 [(unsigned short)14] [i_0] [i_16] [i_0] [i_0])))) / (((/* implicit */int) (unsigned short)65518))));
                                arr_100 [i_0] [(unsigned short)11] [(unsigned short)14] [i_0] [i_0] = min((((unsigned short) min(((unsigned short)51854), (arr_61 [i_0] [i_26])))), (((unsigned short) min(((unsigned short)10533), (arr_58 [i_1] [i_16] [i_25 - 1] [i_16])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_27 = 1; i_27 < 12; i_27 += 4) 
                    {
                        for (unsigned short i_28 = 1; i_28 < 13; i_28 += 1) 
                        {
                            {
                                var_60 = var_18;
                                arr_106 [i_0] [i_1] [i_16] [i_27] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)18110)) + (((/* implicit */int) arr_73 [i_0] [i_27 + 3] [i_28 - 1] [(unsigned short)14] [i_28] [i_1]))))) ? (((((/* implicit */_Bool) arr_73 [i_0] [i_27 + 3] [i_28 - 1] [i_1] [i_28 + 2] [(unsigned short)3])) ? (((/* implicit */int) (unsigned short)65156)) : (((/* implicit */int) (unsigned short)58206)))) : (((/* implicit */int) max(((unsigned short)31166), ((unsigned short)61867))))));
                            }
                        } 
                    } 
                    var_61 = (unsigned short)17874;
                }
            }
        } 
    } 
    var_62 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65532)) / (((/* implicit */int) (unsigned short)61868))));
}
