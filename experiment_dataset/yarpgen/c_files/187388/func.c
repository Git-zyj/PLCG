/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187388
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
    var_12 = ((/* implicit */unsigned char) (~(((/* implicit */int) max((((short) (_Bool)0)), (((/* implicit */short) (_Bool)1)))))));
    var_13 += ((/* implicit */int) ((unsigned char) (~(((((/* implicit */_Bool) var_2)) ? (840880125) : (((/* implicit */int) (unsigned short)0)))))));
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (-(((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) / (((/* implicit */int) max(((short)23765), (((/* implicit */short) (_Bool)1))))))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)214))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((/* implicit */int) (!(arr_0 [i_0])))))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ^ ((-(((/* implicit */int) (unsigned short)51614))))))) ? (min((((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-13012)) : (((/* implicit */int) var_8)))))) : ((+(((arr_7 [i_4] [i_1] [i_2] [i_1] [(unsigned short)2]) ^ (((/* implicit */int) var_4)))))))))));
                            var_17 = ((/* implicit */unsigned short) (!(min((arr_6 [7] [i_1] [i_2]), (arr_6 [i_1] [i_2] [i_4])))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
                        {
                            arr_14 [i_0] [i_2] = ((/* implicit */unsigned short) (((~(((/* implicit */int) ((short) (short)-11879))))) < (519684533)));
                            var_18 += ((/* implicit */unsigned char) ((-840880126) >= (((/* implicit */int) (unsigned char)65))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */int) min((((/* implicit */short) arr_10 [i_0])), ((short)3047)))) : (((/* implicit */int) min(((_Bool)0), (arr_0 [i_0]))))));
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)13011))))) ? (((/* implicit */int) (unsigned char)0)) : (((int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)0)))))));
                        }
                        var_21 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) var_7))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            var_22 ^= arr_16 [i_0] [i_1] [(_Bool)1] [i_0];
                            var_23 = var_9;
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_24 = ((/* implicit */short) (~(((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_7]))));
                        /* LoopSeq 2 */
                        for (int i_8 = 0; i_8 < 21; i_8 += 2) 
                        {
                            arr_25 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) ((arr_0 [i_7]) ? (((/* implicit */int) arr_0 [i_8])) : (((/* implicit */int) (_Bool)1))));
                            arr_26 [i_8] [i_8] [i_2] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))));
                            var_25 &= ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))));
                        }
                        for (short i_9 = 2; i_9 < 19; i_9 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned short) (!(arr_0 [i_9 + 1])));
                            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_9 - 2])) ^ (arr_18 [i_9 + 2] [i_9 - 1] [i_9 + 1] [i_9] [i_9 + 2]))))));
                            var_28 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_23 [(short)14] [i_9 + 1] [i_9] [i_9 + 2] [i_9 + 1])) | (((/* implicit */int) arr_23 [i_0] [i_9 + 1] [i_9] [i_9 + 1] [i_9 - 2]))));
                            var_29 = ((/* implicit */unsigned short) arr_1 [i_2]);
                        }
                        var_30 = ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned short)65535)));
                        var_31 = ((/* implicit */short) max((var_31), (((short) (~(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])))))));
                    }
                    /* vectorizable */
                    for (short i_10 = 1; i_10 < 19; i_10 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_11 = 0; i_11 < 21; i_11 += 2) 
                        {
                            var_32 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 63)) ? (((/* implicit */int) arr_21 [i_11] [i_10] [i_2] [i_0] [i_0])) : (var_5)))) ? (((((/* implicit */int) (unsigned char)86)) ^ (-1451393491))) : (((/* implicit */int) arr_6 [i_10 - 1] [i_10 + 2] [i_10 + 2])));
                            var_33 = ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) var_5)))));
                            var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)0)))))));
                        }
                        /* LoopSeq 4 */
                        for (unsigned short i_12 = 0; i_12 < 21; i_12 += 3) 
                        {
                            var_35 = ((/* implicit */unsigned short) ((arr_23 [i_10 + 2] [i_10 + 2] [i_10 + 1] [i_10 + 2] [i_10 + 2]) ? (((/* implicit */int) arr_31 [i_10 + 2] [i_10 - 1] [i_10 - 1] [i_10 + 1])) : (((/* implicit */int) var_2))));
                            var_36 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)-3048)) ? (((/* implicit */int) (short)31830)) : (((/* implicit */int) (short)32767)))));
                        }
                        for (unsigned char i_13 = 0; i_13 < 21; i_13 += 3) 
                        {
                            var_37 = ((/* implicit */unsigned short) (~(1015483584)));
                            var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))));
                        }
                        for (unsigned short i_14 = 1; i_14 < 19; i_14 += 2) 
                        {
                            var_39 *= (-(((/* implicit */int) arr_19 [i_14 + 1] [i_14 + 1] [i_10 - 1])));
                            arr_42 [i_2] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) var_4);
                        }
                        for (short i_15 = 0; i_15 < 21; i_15 += 1) 
                        {
                            arr_46 [i_2] [i_0] [i_1] [i_2] [i_2] [i_1] [i_15] = ((/* implicit */short) (!(arr_24 [i_0] [i_1] [i_10 - 1] [i_10] [i_15])));
                            var_40 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_32 [(unsigned short)10])) + (((/* implicit */int) (short)-13012))))) && (((/* implicit */_Bool) ((unsigned short) var_4))));
                            var_41 = ((/* implicit */unsigned short) arr_8 [(unsigned short)12] [i_1] [i_2] [i_10 + 1]);
                            var_42 = ((/* implicit */short) ((_Bool) (unsigned short)65535));
                        }
                        var_43 = ((/* implicit */unsigned short) ((-733939322) != (((/* implicit */int) (short)-3048))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned char i_17 = 0; i_17 < 21; i_17 += 1) 
                        {
                            var_44 = ((/* implicit */_Bool) (~(((/* implicit */int) var_3))));
                            arr_55 [i_0] [i_1] [i_0] [i_2] [i_16] [i_17] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) var_10)))));
                            var_45 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)19087)) | (((/* implicit */int) (short)30673))));
                            var_46 = ((/* implicit */short) (~(((/* implicit */int) arr_30 [i_16 + 1] [i_16 + 1] [i_16 + 1] [i_16 + 1] [i_16] [i_16]))));
                        }
                        for (int i_18 = 1; i_18 < 18; i_18 += 3) 
                        {
                            var_47 = ((/* implicit */short) min((((((/* implicit */int) (_Bool)0)) << ((((~(((/* implicit */int) (unsigned char)0)))) + (6))))), (((/* implicit */int) arr_56 [i_16 + 1] [i_16 + 1] [i_16 + 1] [(unsigned short)18] [i_16 + 1] [i_18 - 1] [i_18 - 1]))));
                            arr_58 [(unsigned short)5] [i_2] [i_1] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
                        }
                        for (int i_19 = 0; i_19 < 21; i_19 += 3) 
                        {
                            arr_61 [i_0] [i_0] [i_2] [i_2] [i_19] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_4 [i_16 + 1])) ? (((/* implicit */int) var_3)) : (1324938671))));
                            arr_62 [i_16] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) ((int) (unsigned short)23519));
                            arr_63 [i_2] [i_0] [i_1] [i_1] [i_2] = ((((/* implicit */_Bool) (unsigned short)6102)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)0)));
                            var_48 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_40 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        }
                        for (int i_20 = 2; i_20 < 19; i_20 += 3) 
                        {
                            arr_66 [i_2] [i_16] [i_20 + 2] = ((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) (short)-13012)));
                            arr_67 [i_2] [i_16 + 1] [i_16] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) ((((/* implicit */int) var_3)) - (((/* implicit */int) (unsigned short)5857))))))));
                        }
                        /* LoopSeq 1 */
                        for (int i_21 = 3; i_21 < 19; i_21 += 3) 
                        {
                            arr_71 [i_16 + 1] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)186)) ? (-108967147) : (1382734820)));
                            arr_72 [i_0] [i_0] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2130706432))))), (max((((/* implicit */unsigned short) (_Bool)0)), (var_11))))))));
                            var_49 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_51 [i_0] [i_1] [i_0] [(unsigned short)18] [i_21 + 1] [i_0])))) : (((/* implicit */int) ((_Bool) (unsigned short)0)))))));
                            var_50 = (~(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))));
                        }
                        var_51 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_4))) ? (((/* implicit */int) arr_29 [i_16] [i_16 + 1] [i_16 + 1] [i_16 + 1] [i_16 + 1])) : (((/* implicit */int) ((_Bool) (unsigned short)36337)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)223))))) : ((+(((/* implicit */int) arr_30 [i_2] [i_16] [i_16 + 1] [i_16 + 1] [i_16 + 1] [i_16]))))));
                        var_52 = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                        var_53 = min((((_Bool) min((((/* implicit */int) (unsigned short)5788)), (-733939322)))), ((_Bool)0));
                    }
                    for (unsigned short i_22 = 1; i_22 < 19; i_22 += 4) 
                    {
                        arr_75 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((short) var_5));
                        /* LoopSeq 1 */
                        for (unsigned short i_23 = 0; i_23 < 21; i_23 += 1) 
                        {
                            var_54 = ((/* implicit */unsigned short) min((var_54), (((/* implicit */unsigned short) ((int) ((((/* implicit */int) arr_68 [i_22 - 1] [i_22 + 2])) | ((-2147483647 - 1))))))));
                            var_55 = ((/* implicit */unsigned short) (_Bool)1);
                        }
                        var_56 = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) 862317297))) ^ (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) min((var_9), (((/* implicit */unsigned short) (_Bool)1))))) : (min((arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (1382734820)))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_24 = 3; i_24 < 19; i_24 += 3) 
                    {
                        arr_81 [i_2] [i_2] = ((((/* implicit */_Bool) ((var_5) >> ((((~(((/* implicit */int) (_Bool)1)))) + (17)))))) ? ((~(((((/* implicit */int) var_11)) >> (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (((((/* implicit */int) arr_76 [i_0] [i_0] [i_0] [(unsigned char)2] [i_2] [i_24 - 2] [i_24 + 1])) >> ((((((_Bool)0) ? (-1382734820) : (((/* implicit */int) var_3)))) - (60850))))));
                        var_57 = ((/* implicit */short) min((min(((~(((/* implicit */int) var_8)))), (((((/* implicit */_Bool) (unsigned short)23982)) ? (((/* implicit */int) (unsigned short)7586)) : (((/* implicit */int) (short)25663)))))), ((~((~(((/* implicit */int) var_3))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_25 = 0; i_25 < 21; i_25 += 1) 
                    {
                        var_58 = ((/* implicit */unsigned char) min((var_58), (((/* implicit */unsigned char) (unsigned short)65535))));
                        var_59 &= (~(((/* implicit */int) ((_Bool) arr_28 [i_25] [i_25] [i_25] [i_2] [i_0] [i_0] [i_0]))));
                        arr_86 [i_0] [i_1] [i_2] [i_25] = ((int) (((_Bool)0) ? (((/* implicit */int) arr_32 [i_2])) : (((/* implicit */int) var_1))));
                    }
                }
            } 
        } 
    } 
    var_60 = ((/* implicit */unsigned short) var_7);
}
