/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174222
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                {
                    var_12 *= ((/* implicit */unsigned char) min((max((((var_11) & (((/* implicit */int) var_6)))), (((/* implicit */int) ((short) arr_5 [i_0] [i_0] [(unsigned char)2]))))), (((((/* implicit */int) arr_1 [i_1 - 1])) ^ (((/* implicit */int) max((((/* implicit */short) arr_4 [i_0])), (arr_1 [i_0]))))))));
                    var_13 = ((((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [(unsigned char)5])) & (arr_6 [i_0] [i_0] [(unsigned char)15] [(unsigned char)14])))) ? (((((/* implicit */_Bool) var_9)) ? (arr_6 [(short)8] [i_2 + 1] [(short)8] [i_2]) : (((/* implicit */int) var_0)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (unsigned char)57))))))) & (((/* implicit */int) ((((/* implicit */int) max(((short)0), ((short)-1)))) != (((((/* implicit */int) var_5)) ^ (arr_2 [i_1] [i_0])))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        var_14 = (i_1 % 2 == 0) ? (((/* implicit */unsigned char) (((((~(arr_2 [i_1] [(unsigned char)10]))) + (2147483647))) << (((arr_0 [i_0]) + (1491107542)))))) : (((/* implicit */unsigned char) (((((((~(arr_2 [i_1] [(unsigned char)10]))) - (2147483647))) + (2147483647))) << (((arr_0 [i_0]) + (1491107542))))));
                        var_15 = ((/* implicit */unsigned char) max((var_15), ((unsigned char)32)));
                        arr_11 [i_0] [i_0] [i_1] [i_1] [i_3] = (((-(arr_5 [(unsigned char)17] [i_1] [i_1]))) ^ ((~(((/* implicit */int) arr_10 [i_1] [i_1] [i_1])))));
                        var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_10 [(short)5] [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_3])) : (((/* implicit */int) var_0)))) + (((/* implicit */int) arr_7 [i_3] [i_2] [i_1] [i_0]))));
                        var_17 ^= ((((/* implicit */int) arr_7 [i_1 + 2] [i_1 + 1] [i_1 - 1] [i_1 + 2])) + (((/* implicit */int) arr_3 [i_0] [i_2 - 1] [i_3])));
                    }
                    for (unsigned char i_4 = 1; i_4 < 16; i_4 += 1) 
                    {
                        arr_14 [i_4] [i_4] [i_1] [i_4] [i_4 + 3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17)) ? (2147483647) : (2012945205)))) ? (((((/* implicit */int) arr_12 [i_4] [i_4 + 2] [i_4 + 4] [i_4 - 1] [i_1])) ^ (((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) var_3)))))) : (((((/* implicit */int) arr_9 [i_4 + 1] [i_2 - 1] [i_2 - 1] [i_1 + 2])) << (((((/* implicit */int) arr_9 [i_4 + 4] [i_2 + 2] [i_2 + 2] [i_1 - 2])) - (122)))))));
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) min((((short) (short)17686)), (((/* implicit */short) ((unsigned char) arr_12 [i_1] [i_2 + 1] [i_2] [(short)8] [i_1])))))) >= (((/* implicit */int) (short)-17682))));
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */int) ((arr_5 [i_0] [i_0] [(unsigned char)10]) <= (arr_5 [i_0] [(short)14] [6])))) >= ((-(((/* implicit */int) min(((unsigned char)19), (var_10)))))))))));
                    }
                }
            } 
        } 
    } 
    var_20 *= ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) var_10)) <= (var_11)))), (min(((short)12406), ((short)-17656)))))) >= (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        for (int i_6 = 1; i_6 < 18; i_6 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (13) : (((/* implicit */int) (short)29854))));
                            /* LoopSeq 2 */
                            for (int i_9 = 0; i_9 < 19; i_9 += 4) 
                            {
                                var_22 = ((/* implicit */unsigned char) min((var_22), (min((min((arr_4 [i_6 - 1]), ((unsigned char)0))), (((unsigned char) min((arr_9 [4] [i_7] [i_8] [i_9]), ((unsigned char)93))))))));
                                var_23 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_25 [i_7] [i_6 - 1])) ? (716374182) : (((/* implicit */int) arr_25 [i_7] [i_6 - 1])))));
                                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (+(max(((+(((/* implicit */int) (unsigned char)121)))), (min((var_9), (var_11))))))))));
                                arr_32 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */short) (~(max((((/* implicit */int) arr_29 [i_5] [i_6 + 1] [i_7] [(unsigned char)12])), (var_9)))));
                            }
                            for (unsigned char i_10 = 4; i_10 < 15; i_10 += 4) 
                            {
                                arr_37 [i_7] [i_8] [i_7] [i_7] [i_5] [i_6] [i_7] = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) arr_13 [i_5] [i_6] [i_7] [i_8] [i_5]))), (min((((/* implicit */int) arr_10 [i_5] [i_6 - 1] [i_10])), (((((/* implicit */_Bool) arr_22 [i_5] [i_6] [i_5])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_9 [i_5] [(short)12] [(unsigned char)10] [(short)12]))))))));
                                var_25 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_28 [i_5] [i_6] [i_10 - 4] [i_8] [i_10] [i_7])) ? (((/* implicit */int) arr_28 [i_5] [i_6 + 1] [i_10 + 1] [i_8] [i_6 + 1] [i_5])) : (((/* implicit */int) (unsigned char)255)))) << (((/* implicit */int) ((((((/* implicit */int) (short)-16444)) >= (arr_22 [i_5] [i_6] [i_7]))) && (((/* implicit */_Bool) var_0)))))));
                                var_26 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)12390)) : (((/* implicit */int) (short)0)))) / ((+(((/* implicit */int) (short)12411)))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */int) arr_16 [i_5])) / (((/* implicit */int) arr_17 [i_6] [i_10])))) : (((((/* implicit */int) arr_12 [i_5] [i_5] [13] [(short)16] [i_7])) * (13)))))));
                                var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (~((-(((/* implicit */int) ((-1367975714) < (((/* implicit */int) (short)-1))))))))))));
                            }
                            arr_38 [i_8] [i_8] [i_7] [i_7] = ((int) min(((unsigned char)175), ((unsigned char)4)));
                            /* LoopSeq 2 */
                            for (unsigned char i_11 = 0; i_11 < 19; i_11 += 1) /* same iter space */
                            {
                                var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((max((((/* implicit */int) arr_12 [i_5] [i_5] [i_7] [i_8] [i_5])), (((((/* implicit */int) (unsigned char)252)) - (0))))) <= (((/* implicit */int) ((short) ((((/* implicit */_Bool) 1336407997)) && (((/* implicit */_Bool) 0)))))))))));
                                var_29 = ((((/* implicit */_Bool) ((max((arr_6 [i_5] [i_5] [i_5] [i_5]), (((/* implicit */int) (unsigned char)255)))) | (((/* implicit */int) arr_25 [i_7] [1]))))) ? (max((((/* implicit */int) ((((/* implicit */int) var_6)) == (64863472)))), (((((/* implicit */int) arr_10 [i_5] [i_6 + 1] [i_7])) << (((((/* implicit */int) arr_15 [i_5] [7])) - (24027))))))) : (((/* implicit */int) ((((/* implicit */int) var_7)) != (arr_0 [i_6 + 1])))));
                                var_30 = min((var_9), ((+(((/* implicit */int) ((((/* implicit */_Bool) arr_34 [(unsigned char)12] [i_6] [i_7] [i_8] [i_11])) && (((/* implicit */_Bool) (unsigned char)100))))))));
                            }
                            for (unsigned char i_12 = 0; i_12 < 19; i_12 += 1) /* same iter space */
                            {
                                arr_46 [i_5] [i_7] [i_5] [i_8] [i_12] [i_8] = ((/* implicit */unsigned char) ((((((((/* implicit */int) arr_12 [i_7] [(unsigned char)1] [3] [i_6] [i_7])) ^ (((/* implicit */int) arr_36 [(unsigned char)3] [i_6] [(unsigned char)3])))) ^ (((((/* implicit */int) var_10)) & (23))))) & (((/* implicit */int) ((short) (~(((/* implicit */int) arr_9 [i_12] [i_5] [i_6] [i_5]))))))));
                                var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) ? (((((/* implicit */_Bool) -13)) ? (arr_5 [i_5] [i_6] [i_7]) : (((/* implicit */int) (unsigned char)204)))) : (((((/* implicit */_Bool) arr_13 [10] [7] [i_7] [10] [i_12])) ? (((/* implicit */int) arr_30 [i_5] [i_6 - 1] [i_7] [i_5] [i_6 - 1])) : (((/* implicit */int) var_7))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_5] [(unsigned char)6] [i_8] [i_12])) && (((/* implicit */_Bool) arr_7 [i_5] [i_6] [i_7] [(unsigned char)15]))))) : ((-(max((((/* implicit */int) var_6)), (arr_19 [i_5])))))));
                            }
                        }
                    } 
                } 
                arr_47 [i_5] [i_6] [(short)13] = ((/* implicit */short) max((arr_13 [i_5] [i_5] [i_5] [i_5] [i_5]), (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_13 [i_5] [i_6] [i_6 + 1] [i_5] [i_5])) ? (((/* implicit */int) arr_25 [i_5] [i_6])) : (((/* implicit */int) (unsigned char)105))))))));
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_0)))))));
}
