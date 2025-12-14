/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178579
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
    var_13 = ((/* implicit */unsigned short) (-(min(((~(var_9))), (((/* implicit */unsigned int) var_5))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_4))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_4 = 3; i_4 < 10; i_4 += 4) 
                        {
                            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) var_10))));
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) (+(((/* implicit */int) var_2))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 4; i_5 < 9; i_5 += 1) 
                        {
                            var_15 |= max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (16777215U))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_8)), ((unsigned short)15872)))));
                            var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_0)))), (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_11)) : ((-(((/* implicit */int) (unsigned short)18689))))));
                        }
                        arr_17 [(unsigned char)2] [i_1] [(unsigned char)2] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)64179))))), (max((3341819778U), (((/* implicit */unsigned int) var_2))))));
                        var_17 -= (+(3221225472U));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_6 = 1; i_6 < 8; i_6 += 3) 
        {
            var_18 = ((/* implicit */unsigned char) var_0);
            var_19 = ((((/* implicit */_Bool) var_9)) ? (3597863434U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))));
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)255)))))));
        }
        for (unsigned int i_7 = 1; i_7 < 9; i_7 += 3) 
        {
            arr_23 [i_7] = (~(max((567513067U), (((/* implicit */unsigned int) (unsigned short)12239)))));
            /* LoopSeq 3 */
            for (unsigned short i_8 = 0; i_8 < 11; i_8 += 4) 
            {
                var_21 = ((((/* implicit */_Bool) (~(3868494237U)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (3597863434U))) : (min((var_9), (((/* implicit */unsigned int) var_2)))));
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 11; i_9 += 4) 
                {
                    for (unsigned short i_10 = 1; i_10 < 7; i_10 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) var_2))))));
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46846))) : (var_9)))) ? ((~(max((var_6), (var_9))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) (unsigned short)34338))))))))));
                            arr_31 [i_7] [i_7 - 1] [4U] [4U] [i_10] = var_3;
                        }
                    } 
                } 
                arr_32 [i_0] [i_0] [i_7] = ((/* implicit */unsigned char) min((max((min((((/* implicit */unsigned int) var_3)), (61513733U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)53275))))))), (max((((/* implicit */unsigned int) (unsigned char)225)), (var_7)))));
                /* LoopSeq 1 */
                for (unsigned short i_11 = 0; i_11 < 11; i_11 += 3) 
                {
                    var_24 += max((330417177U), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)48590))))));
                    var_25 *= (-(max((min((var_12), (var_12))), (1479688034U))));
                }
            }
            for (unsigned char i_12 = 0; i_12 < 11; i_12 += 2) 
            {
                arr_39 [i_7] [i_7 + 2] [1U] [i_12] = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned short)26302)), ((~(((/* implicit */int) var_2))))));
                /* LoopSeq 3 */
                for (unsigned char i_13 = 1; i_13 < 9; i_13 += 2) 
                {
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) (unsigned char)127))))) ? (max((1583478098U), (((/* implicit */unsigned int) var_4)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_2)))))));
                    var_27 += ((/* implicit */unsigned int) max(((unsigned short)13547), (((/* implicit */unsigned short) (unsigned char)126))));
                    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? ((~(var_9))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)8955)) : (((/* implicit */int) var_10))))))))));
                }
                for (unsigned char i_14 = 0; i_14 < 11; i_14 += 4) 
                {
                    var_29 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)0))));
                    arr_45 [i_0] [i_7] [i_12] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 1479688034U)) ? (var_9) : (var_12)))));
                    arr_46 [i_14] &= ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))), (((((/* implicit */_Bool) var_5)) ? (var_7) : (936281411U))))), (((/* implicit */unsigned int) var_5))));
                    arr_47 [6U] [i_7 - 1] [i_12] [i_7] = ((/* implicit */unsigned char) min((max((16252928U), (((/* implicit */unsigned int) (unsigned char)110)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)38)))))));
                }
                for (unsigned short i_15 = 0; i_15 < 11; i_15 += 3) 
                {
                    arr_50 [i_7] [i_12] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)51989)) ? (var_6) : (max((((/* implicit */unsigned int) var_11)), (953147518U)))));
                    var_30 = ((/* implicit */unsigned int) var_1);
                }
                /* LoopNest 2 */
                for (unsigned short i_16 = 1; i_16 < 9; i_16 += 4) 
                {
                    for (unsigned short i_17 = 0; i_17 < 11; i_17 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned int) min((var_31), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)14380)) : (((/* implicit */int) (!(((/* implicit */_Bool) 7U)))))))), (var_6)))));
                            arr_57 [i_0] [i_0] [i_7] [i_7] [(unsigned char)1] [i_16] [i_17] = ((((/* implicit */_Bool) (-(2420397811U)))) ? (1073741823U) : (4274377811U));
                            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) 1073741810U))));
                            arr_58 [i_0] [i_7] [(unsigned char)9] [i_16] [2U] [i_7] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (var_9) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)41553)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_18 = 3; i_18 < 10; i_18 += 2) 
                {
                    for (unsigned int i_19 = 0; i_19 < 11; i_19 += 2) 
                    {
                        {
                            var_33 = 1717316377U;
                            arr_64 [i_7] [i_7] [i_12] [i_12] [i_18] [(unsigned char)7] [i_19] = 0U;
                            arr_65 [i_7] [(unsigned short)0] [i_7] [i_7] = var_4;
                            arr_66 [i_0] [i_18 + 1] [i_7] [i_0] [i_0] = (+((+(((((/* implicit */_Bool) var_10)) ? (953147516U) : (3341819778U))))));
                        }
                    } 
                } 
                arr_67 [i_7] = ((/* implicit */unsigned char) max((max((var_12), (var_9))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2)))))));
            }
            for (unsigned char i_20 = 1; i_20 < 10; i_20 += 2) 
            {
                arr_70 [i_0] [i_7 + 2] [i_7] [(unsigned short)10] = max((var_0), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_2)))))))));
                var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) var_1))));
                arr_71 [i_0] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) (unsigned char)0);
                /* LoopNest 2 */
                for (unsigned int i_21 = 0; i_21 < 11; i_21 += 4) 
                {
                    for (unsigned short i_22 = 1; i_22 < 10; i_22 += 2) 
                    {
                        {
                            var_35 = ((((/* implicit */_Bool) min((max((var_1), (var_3))), ((unsigned char)157)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)65511), (((/* implicit */unsigned short) var_8)))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)164)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10))))), (0U))));
                            var_36 = ((/* implicit */unsigned char) var_0);
                        }
                    } 
                } 
            }
            var_37 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))))), (var_7));
        }
        var_38 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
    }
    var_39 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)16256))));
    var_40 = ((/* implicit */unsigned char) var_5);
}
