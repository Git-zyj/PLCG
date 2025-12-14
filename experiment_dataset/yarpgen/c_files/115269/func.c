/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115269
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
    var_16 ^= ((/* implicit */long long int) var_14);
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_15)))))));
    var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_3))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (short i_3 = 2; i_3 < 23; i_3 += 2) 
                {
                    for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) arr_12 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1]))));
                            var_20 = ((/* implicit */int) ((long long int) arr_13 [i_0] [i_1] [i_2] [i_3 - 1] [i_4]));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1])) - (((/* implicit */int) (unsigned char)128))));
        }
        for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            /* LoopSeq 3 */
            for (long long int i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                var_22 = ((/* implicit */unsigned char) var_0);
                var_23 = ((/* implicit */int) max((((/* implicit */long long int) (~(arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_5] [i_6] [i_6])))), ((~(((((/* implicit */_Bool) 4294967295U)) ? (4508725696702056179LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)178)))))))));
            }
            for (unsigned int i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                arr_21 [i_0] [i_5] [i_7] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [9LL])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0]))) : (min((4508725696702056179LL), (-4508725696702056180LL)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_8 = 2; i_8 < 22; i_8 += 2) 
                {
                    var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) (((_Bool)1) ? (4508725696702056182LL) : (((/* implicit */long long int) arr_23 [i_0] [i_7] [i_7])))))));
                    /* LoopSeq 4 */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        var_25 -= ((/* implicit */long long int) ((_Bool) -4508725696702056167LL));
                        arr_28 [i_0] [i_5] [i_9] [i_7] [i_9] [i_8] [i_9] = ((/* implicit */short) ((var_7) > (((/* implicit */int) var_4))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 24; i_10 += 2) 
                    {
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4508725696702056180LL)) ? (var_7) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_2 [i_5])) : (((/* implicit */int) ((short) var_4))))))));
                        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_7])))))));
                        var_28 = (~(((/* implicit */int) arr_24 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0])));
                        arr_31 [i_0 + 1] [i_0] [i_5] [i_0] [i_8] [i_8] = ((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [(_Bool)1] [i_5] [i_8 - 1]);
                    }
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        var_29 -= ((/* implicit */_Bool) 4508725696702056179LL);
                        var_30 = var_1;
                        var_31 = ((/* implicit */short) (-(3532923992624930400LL)));
                    }
                    for (long long int i_12 = 0; i_12 < 24; i_12 += 2) 
                    {
                        arr_38 [i_12] [i_5] [(_Bool)1] [i_5] [i_0] = ((/* implicit */_Bool) arr_15 [i_8 - 2] [i_0 + 1] [i_7]);
                        var_32 = ((/* implicit */long long int) (-((+(((/* implicit */int) var_5))))));
                        arr_39 [i_0] [i_5] [i_8] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [i_8 + 2] [i_0 + 1])) ? (((((/* implicit */_Bool) arr_30 [i_0] [i_8 - 2])) ? (arr_26 [i_12] [i_8] [i_12] [i_5] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_12]))))) : (arr_1 [i_8] [i_8])));
                    }
                }
                /* LoopSeq 3 */
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    var_33 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_13 - 1] [i_0 + 1])))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_14 = 0; i_14 < 24; i_14 += 2) 
                    {
                        var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((var_10) + (((/* implicit */int) arr_35 [i_5] [i_14] [i_5] [22LL] [i_5] [i_5] [i_13])))))));
                        var_35 -= ((/* implicit */long long int) var_13);
                    }
                    for (long long int i_15 = 0; i_15 < 24; i_15 += 2) /* same iter space */
                    {
                        arr_51 [i_13 - 1] [i_13] [i_0] [i_0] [i_5] [i_13] [i_0] = ((/* implicit */unsigned int) (((+(((((/* implicit */_Bool) var_11)) ? (1696601736123470796LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))) * (((/* implicit */long long int) ((/* implicit */int) arr_5 [20LL] [i_5])))));
                        var_36 = ((/* implicit */int) min((((((arr_26 [i_0] [i_0] [i_13] [i_13 - 1] [i_15]) / (arr_19 [i_0 + 1] [i_5] [(_Bool)1] [(_Bool)1]))) >> (((4508725696702056180LL) - (4508725696702056121LL))))), (min((-4508725696702056180LL), (arr_1 [7U] [i_0 + 1])))));
                    }
                    for (long long int i_16 = 0; i_16 < 24; i_16 += 2) /* same iter space */
                    {
                        var_37 = ((/* implicit */short) var_9);
                        arr_56 [i_13] [i_13] [i_5] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0 + 1] [(unsigned char)13]))))) ? (((/* implicit */int) ((short) 9223372036854775807LL))) : (((((/* implicit */int) arr_24 [i_0 + 1] [i_5] [i_5] [i_13] [(_Bool)1] [i_13 - 1] [i_13 - 1])) & (((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1]))))));
                        arr_57 [i_0 + 1] [i_0 + 1] [i_16] [i_0] [i_13] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) != (((((/* implicit */_Bool) var_15)) ? (arr_36 [10] [i_5] [i_7] [(_Bool)0] [i_16]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_20 [i_0] [i_0])) : (((/* implicit */int) var_1)))))))));
                    }
                }
                /* vectorizable */
                for (long long int i_17 = 0; i_17 < 24; i_17 += 2) 
                {
                    arr_60 [i_7] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [(short)11] [i_0 + 1])) ? (arr_13 [i_17] [i_7] [i_5] [i_5] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_17] [i_0 + 1])))));
                    var_38 = (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_7] [i_5] [i_0]))) : (arr_6 [1] [i_7] [i_5] [i_0]))));
                }
                for (long long int i_18 = 0; i_18 < 24; i_18 += 2) 
                {
                    arr_63 [i_0] [(unsigned short)18] [i_7] [i_18] = ((/* implicit */short) (+(((/* implicit */int) (_Bool)0))));
                    /* LoopSeq 3 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        var_39 = ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned int) var_1)), (var_13)))));
                        var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) ((((((((/* implicit */long long int) arr_52 [23U] [(short)19] [i_19])) ^ (arr_14 [i_19] [i_18] [12LL] [i_5] [i_0]))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) -4508725696702056180LL)) ? (-972221330) : (((/* implicit */int) (unsigned short)8191))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_5]))) : (((((/* implicit */_Bool) ((unsigned char) -4508725696702056181LL))) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [22LL] [22LL] [22LL] [22LL] [i_7]))) : (((-3355235183739771774LL) - (1696601736123470796LL))))))))));
                        var_41 = ((/* implicit */unsigned int) max((((/* implicit */long long int) max(((+(arr_65 [i_7]))), (((/* implicit */unsigned int) arr_25 [i_0 + 1] [i_7] [i_7] [i_18] [i_0 + 1]))))), (min((min((-5455518325746451557LL), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) var_3))))));
                        var_42 = ((/* implicit */_Bool) max((var_42), (((_Bool) ((((/* implicit */int) arr_49 [i_0 + 1] [i_0 + 1] [i_18])) ^ (((/* implicit */int) arr_49 [i_0 + 1] [i_0 + 1] [i_0])))))));
                    }
                    /* vectorizable */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        var_43 |= ((/* implicit */_Bool) arr_67 [i_0 + 1]);
                        var_44 = var_15;
                    }
                    /* vectorizable */
                    for (unsigned short i_21 = 3; i_21 < 23; i_21 += 2) 
                    {
                        arr_74 [i_21] [i_7] [i_7] [i_7] [i_5] [i_0] [i_21] = ((/* implicit */short) (-(((/* implicit */int) arr_8 [i_21] [i_21] [i_21] [i_21 + 1] [i_21 - 3]))));
                        arr_75 [i_21] [i_5] [i_5] = ((/* implicit */_Bool) (((+((-9223372036854775807LL - 1LL)))) + (((/* implicit */long long int) arr_23 [i_0 + 1] [i_0 + 1] [i_21]))));
                        arr_76 [i_0] [i_21] [i_21] [i_21] = ((/* implicit */int) (((~(arr_64 [i_7] [i_5] [i_7]))) | (arr_73 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 1] [i_21])));
                    }
                    var_45 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_67 [i_0 + 1])) ? (arr_67 [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_71 [i_0] [i_0 + 1] [i_7] [(_Bool)1] [i_7] [i_0] [i_0])))))));
                }
            }
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                var_46 ^= ((/* implicit */unsigned char) max((arr_26 [i_22] [i_5] [i_5] [i_0] [i_0]), (max((((/* implicit */long long int) (short)23680)), (8166733553012834977LL)))));
                var_47 = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_17 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])))) << (((/* implicit */int) (!(arr_17 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))))));
            }
            var_48 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_5] [i_0]))));
        }
        arr_80 [14] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) ((((((/* implicit */_Bool) -4508725696702056181LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [(short)12]))) : (arr_65 [i_0]))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)-23680))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_34 [i_0 + 1] [i_0] [i_0 + 1] [23LL] [i_0 + 1]))))) ? (((/* implicit */int) (!(arr_4 [i_0 + 1])))) : (((((/* implicit */int) arr_30 [i_0 + 1] [i_0 + 1])) ^ (((/* implicit */int) var_0))))))));
        arr_81 [8LL] [i_0] = ((/* implicit */_Bool) arr_53 [i_0] [i_0 + 1] [i_0 + 1]);
    }
    for (unsigned short i_23 = 4; i_23 < 21; i_23 += 2) 
    {
        arr_86 [i_23] = arr_9 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23];
        /* LoopNest 2 */
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
        {
            for (long long int i_25 = 1; i_25 < 21; i_25 += 2) 
            {
                {
                    arr_93 [i_24] [i_25] = arr_52 [i_25] [i_24] [i_23];
                    var_49 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_89 [i_23 + 1] [i_23 - 1]), (arr_89 [i_23 - 1] [i_23 - 3])))) ? ((-(arr_13 [i_23] [i_24] [i_24] [i_23] [i_24]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_23])))));
                }
            } 
        } 
        var_50 = ((((/* implicit */_Bool) min((((/* implicit */short) arr_49 [i_23 - 1] [i_23 - 3] [i_23 - 4])), (arr_69 [i_23] [i_23 + 1] [(unsigned char)0] [i_23 + 1] [i_23] [i_23 + 1])))) ? (min((max((arr_29 [i_23 - 4] [i_23 - 4] [i_23 - 4] [i_23 - 4] [0LL] [i_23]), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) (~(arr_23 [i_23] [i_23] [i_23])))))) : (((min((((/* implicit */long long int) arr_55 [i_23 + 1] [i_23] [i_23] [i_23] [i_23])), (var_6))) ^ (((/* implicit */long long int) (-(arr_32 [i_23 - 2] [i_23] [i_23] [i_23] [i_23])))))));
        arr_94 [i_23] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_19 [i_23 - 4] [i_23] [i_23 - 3] [i_23 + 1])) ? (arr_19 [i_23 + 1] [i_23 - 1] [i_23 + 1] [i_23 + 1]) : (arr_19 [i_23 - 4] [i_23 - 3] [20LL] [i_23 - 2]))), (((/* implicit */long long int) var_4))));
    }
    var_51 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) var_15)) / ((~(((/* implicit */int) var_0))))))) & ((~(var_9)))));
}
