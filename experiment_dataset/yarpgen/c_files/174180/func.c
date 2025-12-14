/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174180
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_20 -= ((max((((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (short)16441)))), (((((/* implicit */_Bool) (short)-21596)) ? (((/* implicit */int) (short)21595)) : (((/* implicit */int) (_Bool)1)))))) == (((/* implicit */int) max((((/* implicit */unsigned char) max((var_11), (var_15)))), (min((var_2), (((/* implicit */unsigned char) var_4))))))));
                                arr_11 [i_0] [i_3] [i_2] [i_1] [i_0] = (~(var_6));
                            }
                        } 
                    } 
                    var_21 = var_15;
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) (+(max((((var_16) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4)))), (((/* implicit */int) var_4))))));
                    arr_16 [i_0] [i_5] [i_0] [i_0] = ((/* implicit */_Bool) var_17);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_7 = 1; i_7 < 19; i_7 += 4) 
        {
            for (int i_8 = 0; i_8 < 21; i_8 += 2) 
            {
                {
                    var_23 = ((/* implicit */short) ((((((var_11) || (var_16))) || ((((_Bool)1) || (((/* implicit */_Bool) -1173283795)))))) || (((/* implicit */_Bool) var_7))));
                    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) max((max(((~(((/* implicit */int) var_12)))), (min((((/* implicit */int) var_9)), (var_5))))), (((/* implicit */int) var_10)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_11 = 3; i_11 < 19; i_11 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (int i_12 = 0; i_12 < 21; i_12 += 2) 
                        {
                            var_25 = ((/* implicit */short) max((-1), (((/* implicit */int) max((((/* implicit */short) (_Bool)0)), ((short)21596))))));
                            var_26 *= ((/* implicit */_Bool) (((+(((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (var_19)))))) + (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)31)) | (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9)))) : ((+(((/* implicit */int) var_11))))))));
                        }
                        for (unsigned char i_13 = 0; i_13 < 21; i_13 += 2) 
                        {
                            arr_37 [i_0] [i_11] [i_10] [i_9] [i_0] = ((/* implicit */_Bool) min((((max((((/* implicit */int) var_7)), (var_18))) * (((((/* implicit */int) var_9)) * (var_18))))), ((+(((var_6) * (((/* implicit */int) var_16))))))));
                            var_27 -= ((/* implicit */_Bool) ((var_19) ? ((~(((/* implicit */int) (short)28816)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_19))))))))));
                        }
                        for (int i_14 = 0; i_14 < 21; i_14 += 3) 
                        {
                            var_28 = ((/* implicit */short) max((((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_19))))) ? (((/* implicit */int) max((((/* implicit */short) var_15)), (var_1)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (var_0)))))), (((((/* implicit */_Bool) max((var_12), (((/* implicit */short) var_4))))) ? (max((((/* implicit */int) var_9)), (var_13))) : (((/* implicit */int) var_7))))));
                            var_29 = max((((((/* implicit */_Bool) var_1)) ? (max((var_6), (((/* implicit */int) var_7)))) : (((/* implicit */int) min((var_12), (((/* implicit */short) var_11))))))), (max((min((var_18), (var_5))), (((/* implicit */int) (!(var_19)))))));
                            var_30 -= ((/* implicit */_Bool) var_1);
                            arr_40 [i_0] [i_0] [i_10] [i_0] [i_10] [i_0] [i_9] = ((/* implicit */short) var_2);
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_15 = 1; i_15 < 19; i_15 += 2) 
                        {
                            var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) var_12))));
                            var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) var_18))));
                            var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) | (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_7)) : (((((var_14) + (2147483647))) >> (((/* implicit */int) var_11))))));
                            var_34 *= ((/* implicit */_Bool) (+(((var_13) - (((/* implicit */int) var_1))))));
                        }
                        arr_45 [i_0] [i_9] [i_10] [i_0] [i_11] [i_11] = ((/* implicit */int) var_12);
                        arr_46 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_17)) & (((/* implicit */int) var_9))));
                    }
                    for (int i_16 = 0; i_16 < 21; i_16 += 2) 
                    {
                        arr_50 [i_16] [i_0] [i_10] [i_0] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */int) max(((short)28810), (((/* implicit */short) (unsigned char)31))))), (((((/* implicit */int) (_Bool)1)) / (2147483647)))));
                        var_35 = ((/* implicit */short) min((((/* implicit */int) (!(var_19)))), (min((((((/* implicit */int) var_16)) & (var_14))), (((var_16) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_7))))))));
                        arr_51 [i_0] [20] [i_0] [i_16] = ((/* implicit */_Bool) max((((((((/* implicit */int) (unsigned char)199)) / (((/* implicit */int) (_Bool)1)))) + ((-(((/* implicit */int) var_17)))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((var_18), (((/* implicit */int) var_11))))))))));
                    }
                    arr_52 [i_0] [i_0] = ((((/* implicit */int) (unsigned char)199)) >> (((/* implicit */int) ((((/* implicit */int) (short)-28839)) == (((/* implicit */int) (short)-28839))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_17 = 0; i_17 < 21; i_17 += 2) 
                    {
                        arr_57 [i_0] [i_0] [i_9] = var_11;
                        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */int) var_1)) >> (((((/* implicit */int) var_1)) - (4651))))), (((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_12)))))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) min((var_4), (var_15)))), (min((((/* implicit */unsigned char) var_9)), (var_2)))))) : (min((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_11)) : (var_13))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_19))))))));
                        arr_58 [i_0] [i_10] [i_0] [i_0] = ((/* implicit */short) var_16);
                    }
                    var_37 *= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */int) var_12)) | (((/* implicit */int) var_4))))) ? (((((/* implicit */int) var_8)) * (((/* implicit */int) var_8)))) : (var_5))), (((/* implicit */int) var_7))));
                    arr_59 [i_0] [i_9] [i_0] = ((/* implicit */unsigned char) ((((((((/* implicit */int) var_12)) / (((/* implicit */int) var_3)))) * (min((((/* implicit */int) var_19)), (var_18))))) * ((+(((((/* implicit */int) var_3)) * (((/* implicit */int) var_9))))))));
                }
            } 
        } 
    }
    for (short i_18 = 0; i_18 < 22; i_18 += 2) 
    {
        /* LoopNest 2 */
        for (short i_19 = 1; i_19 < 20; i_19 += 3) 
        {
            for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
            {
                {
                    var_38 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(max((var_19), (var_15)))))) | (max((((/* implicit */int) max((var_8), (var_4)))), (var_13)))));
                    var_39 = ((/* implicit */unsigned char) max((min((((/* implicit */int) min((var_1), (var_3)))), (((var_6) / (((/* implicit */int) var_2)))))), ((-(((/* implicit */int) var_11))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        arr_71 [i_21] [i_21] [i_21] [i_21] [i_18] [i_18] = ((/* implicit */int) var_9);
                        var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) (((+(2147483647))) << (((((-780557351) + (780557370))) - (19))))))));
                        arr_72 [i_21] [i_21] [i_21] [i_18] = ((/* implicit */int) var_0);
                        var_41 -= ((/* implicit */short) (+((+(((/* implicit */int) (_Bool)1))))));
                    }
                    for (short i_22 = 0; i_22 < 22; i_22 += 2) 
                    {
                        var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) max((((/* implicit */int) ((min((var_18), (((/* implicit */int) var_8)))) > (max((var_13), (((/* implicit */int) var_8))))))), (var_5))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_23 = 2; i_23 < 19; i_23 += 2) 
                        {
                            arr_80 [i_18] [i_19] [i_19] [i_23 + 3] = min((((/* implicit */int) var_10)), (max((((/* implicit */int) var_9)), (((var_9) ? (var_5) : (((/* implicit */int) var_8)))))));
                            var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) var_6))));
                            arr_81 [i_23 - 2] [i_22] [i_20 - 1] [i_18] [(unsigned char)4] [i_18] = ((/* implicit */_Bool) max((((/* implicit */int) max((var_2), (var_2)))), ((+(((/* implicit */int) (_Bool)1))))));
                        }
                    }
                    for (unsigned char i_24 = 1; i_24 < 21; i_24 += 2) 
                    {
                        var_44 -= ((/* implicit */short) min(((((!(((/* implicit */_Bool) var_14)))) ? (((var_6) & (((/* implicit */int) var_15)))) : (min((var_13), (((/* implicit */int) var_4)))))), ((+(((/* implicit */int) var_19))))));
                        arr_84 [16] [16] [i_24] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? ((((~(((/* implicit */int) var_7)))) | (((/* implicit */int) min((var_12), (((/* implicit */short) var_8))))))) : ((~(((((/* implicit */int) var_0)) << (((((/* implicit */int) var_7)) + (5405)))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_25 = 1; i_25 < 18; i_25 += 3) 
                    {
                        for (short i_26 = 2; i_26 < 18; i_26 += 3) 
                        {
                            {
                                var_45 = ((/* implicit */_Bool) min((((var_15) ? (((var_5) ^ (((/* implicit */int) var_9)))) : (((var_13) | (((/* implicit */int) var_0)))))), (((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)255)), ((short)28838)))) ? (max((((/* implicit */int) var_10)), (var_13))) : (((/* implicit */int) max((var_16), (var_15))))))));
                                arr_93 [i_18] [i_25] [i_20] [i_25 + 2] [i_26] = ((/* implicit */unsigned char) (-(((/* implicit */int) max((((var_10) || (((/* implicit */_Bool) var_3)))), ((!(var_16))))))));
                            }
                        } 
                    } 
                    var_46 = var_13;
                }
            } 
        } 
        var_47 = ((/* implicit */_Bool) (~(var_5)));
        arr_94 [i_18] [i_18] = ((/* implicit */int) var_2);
    }
    /* vectorizable */
    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
    {
        arr_98 [i_27] = (+(((/* implicit */int) var_8)));
        arr_99 [i_27] [i_27] = ((/* implicit */unsigned char) (((~(var_6))) & ((~(((/* implicit */int) var_10))))));
    }
    /* LoopNest 2 */
    for (int i_28 = 0; i_28 < 12; i_28 += 2) 
    {
        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_30 = 0; i_30 < 0; i_30 += 1) 
                {
                    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                    {
                        {
                            arr_110 [i_30] [i_29] [i_28] = max((min(((+(((/* implicit */int) (short)-21593)))), (var_5))), (max((((((/* implicit */int) var_17)) >> (((/* implicit */int) var_0)))), (((/* implicit */int) ((((/* implicit */int) var_15)) != (((/* implicit */int) var_2))))))));
                            var_48 = ((/* implicit */unsigned char) max((var_48), (((/* implicit */unsigned char) max(((~((~(var_18))))), ((~((~(((/* implicit */int) var_11)))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_32 = 0; i_32 < 12; i_32 += 2) 
                {
                    for (short i_33 = 1; i_33 < 10; i_33 += 2) 
                    {
                        {
                            var_49 = ((/* implicit */unsigned char) max((var_49), (((/* implicit */unsigned char) ((min((min((var_6), (((/* implicit */int) var_12)))), (((var_0) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))))) + (min((max((var_6), (((/* implicit */int) var_3)))), (((var_0) ? (((/* implicit */int) var_4)) : (var_6))))))))));
                            arr_116 [i_29] [i_29] = ((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)28839)));
                        }
                    } 
                } 
            }
        } 
    } 
}
