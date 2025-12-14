/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1261
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
    var_16 = var_8;
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        var_17 = ((unsigned int) var_11);
        var_18 |= ((/* implicit */unsigned short) (+(var_2)));
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_3 [i_1] [i_0 + 2] [i_1])))) ? (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_13)))))) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_1]))));
                        var_20 = ((/* implicit */unsigned short) ((var_12) - (var_8)));
                        arr_9 [i_0] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned short)21] [(unsigned short)8])) ? (((/* implicit */int) arr_6 [4U] [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_1]))))) ? (min((4294967295U), (arr_7 [i_1] [(unsigned short)20] [i_2] [i_2] [i_1] [i_1]))) : (arr_7 [i_1] [i_1] [i_2] [i_3] [i_1 + 2] [i_2])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_1 + 4] [i_2 + 1] [i_0 + 2]))))) : (724586819U));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            var_21 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_4 [i_0] [i_0] [1U] [i_0]) & (var_3)))) ? (arr_11 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 4294967295U))))))) ? (((((4294967294U) & (3870588024U))) & (max((((/* implicit */unsigned int) arr_10 [i_4])), (0U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned int) arr_0 [i_4])), (arr_1 [i_0] [i_4])))))));
            arr_12 [i_4] [10U] [10U] = ((/* implicit */unsigned short) min((min((((4294967275U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [4U]))))), ((-(4294967287U))))), (arr_3 [i_0] [(unsigned short)1] [i_4])));
            var_22 = ((/* implicit */unsigned int) min((var_22), ((+(0U)))));
        }
    }
    for (unsigned int i_5 = 1; i_5 < 12; i_5 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_6 = 3; i_6 < 15; i_6 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_7 = 1; i_7 < 12; i_7 += 2) 
            {
                var_23 = ((/* implicit */unsigned int) max((var_23), (min((((/* implicit */unsigned int) ((min((9U), (arr_5 [i_5] [i_6 + 1] [(unsigned short)13] [i_5]))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) 4294967283U))))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(unsigned short)19])) ? (4294967287U) : (var_0)))) ? (133458188U) : (arr_15 [i_5])))))));
                /* LoopSeq 3 */
                for (unsigned int i_8 = 0; i_8 < 16; i_8 += 4) 
                {
                    arr_24 [i_5] [i_8] [i_6] [i_6] [10U] [i_5] = ((/* implicit */unsigned int) (!(((var_7) >= (var_0)))));
                    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 7U))))) << (((4294967286U) - (4294967268U)))))) <= (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (((((/* implicit */_Bool) 2U)) ? (35U) : (var_15))))))))));
                }
                for (unsigned short i_9 = 0; i_9 < 16; i_9 += 2) 
                {
                    arr_27 [i_6] [6U] [i_7] [i_9] = arr_11 [10U];
                    var_25 = ((((/* implicit */_Bool) 2448133751U)) ? (35U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((4294967295U) / (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
                    var_26 = ((/* implicit */unsigned int) min((var_26), ((+(((unsigned int) arr_26 [i_9] [2U] [i_6] [i_6] [15U]))))));
                    arr_28 [i_5 + 1] [i_5] [i_6] [i_5] [i_5] [i_5] = min((((unsigned int) arr_20 [i_7] [i_7] [i_7])), (((/* implicit */unsigned int) (unsigned short)3072)));
                }
                for (unsigned int i_10 = 1; i_10 < 12; i_10 += 2) 
                {
                    arr_31 [i_6] = var_9;
                    arr_32 [(unsigned short)8] &= ((/* implicit */unsigned short) max(((-(arr_21 [4U] [i_5 + 1] [i_6 + 1] [i_10]))), (3770288171U)));
                    var_27 = ((/* implicit */unsigned int) max((var_27), (var_7)));
                }
                arr_33 [i_6] [i_6] [i_7] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((unsigned int) 0U))) ? (((unsigned int) arr_15 [i_5 + 2])) : (((unsigned int) 15U)))), (((/* implicit */unsigned int) ((unsigned short) max((8U), (((/* implicit */unsigned int) arr_19 [i_6] [i_6] [i_6] [(unsigned short)2]))))))));
                arr_34 [i_5] [i_5] [i_6] [(unsigned short)11] = ((/* implicit */unsigned short) (+(((/* implicit */int) max((arr_26 [i_6] [i_6 - 3] [0U] [i_6] [i_6 - 3]), (arr_26 [i_5 + 2] [8U] [6U] [4U] [i_6 - 3]))))));
            }
            arr_35 [i_6] [i_6] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))))), (var_2)));
            arr_36 [i_5] [i_5] [i_6] = ((((((/* implicit */_Bool) max((arr_21 [i_6] [i_5] [i_6] [i_6]), (4294967283U)))) ? (arr_30 [i_5 + 2] [i_6] [i_6] [i_6]) : (14U))) | (3582519211U));
        }
        for (unsigned short i_11 = 3; i_11 < 15; i_11 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_12 = 0; i_12 < 16; i_12 += 3) 
            {
                var_28 = (-(3874016697U));
                var_29 = ((min((((/* implicit */unsigned int) arr_13 [4U] [i_11])), ((+(arr_21 [(unsigned short)6] [i_12] [(unsigned short)6] [i_12]))))) - ((+(min((var_1), (((/* implicit */unsigned int) (unsigned short)3072)))))));
            }
            arr_42 [i_5] [i_5] [12U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 13U))))))) ? (max((0U), (7U))) : (((unsigned int) 536870912U))));
            var_30 = arr_8 [i_11 - 2] [i_11] [i_5] [i_5 + 3];
            var_31 *= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)43525)) << (((((/* implicit */int) (unsigned short)15731)) - (15722)))));
            var_32 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)4193)) : (((/* implicit */int) arr_2 [i_11] [i_5 + 1] [9U])))) >> (((((/* implicit */int) max((arr_13 [i_5 + 1] [i_5]), (arr_13 [i_5 + 1] [i_5])))) - (10862)))));
        }
        for (unsigned short i_13 = 3; i_13 < 15; i_13 += 2) /* same iter space */
        {
            var_33 ^= 2U;
            var_34 = ((unsigned int) (unsigned short)49786);
        }
        for (unsigned int i_14 = 1; i_14 < 14; i_14 += 4) 
        {
            var_35 -= var_2;
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_15 = 2; i_15 < 15; i_15 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_16 = 0; i_16 < 16; i_16 += 2) 
                {
                    for (unsigned int i_17 = 0; i_17 < 16; i_17 += 2) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
                            var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)12288)))) != (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5]))) / (arr_52 [i_17] [i_16] [i_15] [15U] [i_5] [i_5]))))))));
                            var_38 = ((/* implicit */unsigned int) ((unsigned short) arr_25 [i_5 - 1] [i_17]));
                        }
                    } 
                } 
                var_39 = arr_1 [i_14 - 1] [i_14];
                var_40 |= (~(((((/* implicit */_Bool) 26U)) ? (4294967292U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))));
                var_41 = var_1;
                var_42 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (arr_55 [i_14 + 1] [5U] [(unsigned short)0] [i_5] [i_15] [i_15 - 2] [i_5 + 2])));
            }
        }
        arr_56 [i_5] = min((max(((~(var_10))), (((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5] [i_5] [i_5]))))))), (var_1));
        var_43 *= arr_25 [(unsigned short)2] [(unsigned short)2];
    }
    var_44 = ((/* implicit */unsigned int) var_6);
    var_45 = ((/* implicit */unsigned short) (-(var_7)));
}
