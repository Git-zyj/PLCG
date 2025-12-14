/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133100
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
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_1) : (((unsigned int) 650844563U))))) ? (var_4) : (var_11));
    var_21 -= ((/* implicit */unsigned short) var_15);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 18; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (unsigned short)24409);
        var_22 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)14079)) : ((-(((/* implicit */int) (unsigned short)24404)))))) * (((/* implicit */int) arr_1 [12U] [i_0 + 2]))));
        var_23 -= var_2;
    }
    for (unsigned short i_1 = 4; i_1 < 18; i_1 += 4) /* same iter space */
    {
        var_24 = ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_1 + 1] [i_1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 2] [i_1 - 1]))) : (arr_0 [i_1 - 2] [i_1]));
        var_25 *= ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) 3083318952U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)16170)))) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) > (var_17)))))), (((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))))), ((unsigned short)39261))))));
        var_26 = ((/* implicit */unsigned int) ((unsigned short) (~(((/* implicit */int) arr_5 [i_1])))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            for (unsigned short i_3 = 1; i_3 < 19; i_3 += 1) 
            {
                {
                    var_27 = ((/* implicit */unsigned short) max((arr_0 [i_3 - 1] [i_2]), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) (unsigned short)16147)) << (((/* implicit */int) (unsigned short)0))))))));
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)49366)) ? (((unsigned int) max((var_2), ((unsigned short)51451)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16256)))));
                    var_29 ^= ((unsigned short) ((((/* implicit */_Bool) 1836515641U)) ? (((/* implicit */int) (unsigned short)16693)) : (((/* implicit */int) (unsigned short)49393))));
                    var_30 = var_14;
                    var_31 -= var_18;
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
        {
            var_32 = ((/* implicit */unsigned int) ((unsigned short) ((arr_6 [(unsigned short)3] [(unsigned short)3]) & (((/* implicit */unsigned int) ((/* implicit */int) var_6))))));
            /* LoopSeq 3 */
            for (unsigned int i_6 = 1; i_6 < 19; i_6 += 1) 
            {
                var_33 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)16140)))) ^ (((((/* implicit */_Bool) 570320068U)) ? (arr_15 [i_6]) : (arr_0 [i_5] [i_4])))));
                var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_19))))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_6 + 1] [i_4])))))));
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    for (unsigned short i_8 = 4; i_8 < 18; i_8 += 2) 
                    {
                        {
                            arr_24 [i_4] [(unsigned short)12] [i_6] [i_7] [i_8 - 2] = ((/* implicit */unsigned short) arr_13 [i_8]);
                            var_35 = arr_21 [i_6] [i_6 + 1] [i_6 + 1] [i_6] [i_6];
                        }
                    } 
                } 
            }
            for (unsigned short i_9 = 0; i_9 < 20; i_9 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 2; i_11 < 19; i_11 += 4) 
                    {
                        arr_33 [(unsigned short)3] [i_9] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55753)) ? (var_16) : (arr_30 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_9] [i_11])))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) == (2374415957U)))) : (((/* implicit */int) var_8))));
                        var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_28 [i_11 - 1] [17U] [i_11 + 1] [i_11 - 1] [i_11 + 1]))));
                    }
                    var_37 = ((((/* implicit */_Bool) arr_22 [i_4] [i_5] [i_5] [(unsigned short)10] [i_9] [i_9] [(unsigned short)10])) ? (arr_22 [i_10] [i_9] [i_9] [i_10] [i_4] [i_5] [i_4]) : (arr_22 [3U] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]));
                    var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_4] [i_4] [i_9] [i_9])) ? (arr_31 [0U] [i_5] [i_9] [i_9] [i_10]) : (var_16)));
                }
                for (unsigned int i_12 = 0; i_12 < 20; i_12 += 1) 
                {
                    var_39 = ((/* implicit */unsigned int) ((unsigned short) (~(((/* implicit */int) var_18)))));
                    var_40 -= arr_29 [i_4] [7U] [i_9] [14U];
                    arr_36 [i_4] [(unsigned short)12] [i_9] [17U] = ((/* implicit */unsigned short) (((~(262144U))) | (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_13 = 0; i_13 < 20; i_13 += 1) 
                    {
                        arr_39 [i_13] [i_9] [(unsigned short)5] [i_9] [i_9] [i_4] = ((/* implicit */unsigned int) arr_1 [i_5] [i_13]);
                        arr_40 [i_9] [i_5] [i_9] [18U] [i_13] = (~(4294967293U));
                        var_41 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_4])) ? (((/* implicit */int) arr_21 [i_13] [i_5] [i_9] [i_5] [i_4])) : (((/* implicit */int) arr_25 [i_4]))));
                        arr_41 [i_9] [i_12] [(unsigned short)15] [i_9] = ((/* implicit */unsigned int) ((3102386210U) == (3532890538U)));
                        var_42 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))) : (arr_27 [10U] [12U] [12U])));
                    }
                }
                arr_42 [i_4] [i_9] [i_9] = ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [(unsigned short)0] [i_5] [9U]))) : (((var_1) | (1861414167U))));
                var_43 -= ((((/* implicit */_Bool) var_19)) ? (arr_29 [i_9] [i_9] [i_9] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))));
            }
            for (unsigned int i_14 = 0; i_14 < 20; i_14 += 4) 
            {
                var_44 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_8 [0U]))));
                arr_45 [i_4] [i_4] [i_4] = ((unsigned short) arr_1 [i_14] [i_5]);
            }
            var_45 &= ((arr_30 [(unsigned short)0] [12U] [i_5] [i_4] [i_5]) >> (((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) & (var_13))) - (2277U))));
        }
        for (unsigned short i_15 = 0; i_15 < 20; i_15 += 1) /* same iter space */
        {
            var_46 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1861414167U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25816))) : (4294967295U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_15] [i_15] [i_15] [15U]))) : (var_11)));
            var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) ((arr_0 [i_15] [i_4]) | (arr_0 [i_4] [4U]))))));
        }
        arr_48 [i_4] = ((((unsigned int) arr_15 [0U])) / (((unsigned int) var_7)));
    }
}
