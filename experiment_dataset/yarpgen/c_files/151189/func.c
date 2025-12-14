/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151189
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
    for (short i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 2])) * (((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 2]))))) ? ((-(((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 2])))) : ((+(((/* implicit */int) (short)30722))))));
        var_12 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)30722))));
        var_13 = ((int) ((unsigned int) max((((/* implicit */int) var_7)), (-1791631668))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_1]))))) / (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-30722))) : (arr_6 [5] [i_1] [9] [i_1])))))) ? (max((((/* implicit */int) (short)25002)), (((int) (short)25002)))) : (-991705922));
                    arr_10 [i_0] [i_0] |= ((/* implicit */short) (~(((/* implicit */int) var_10))));
                    var_14 = var_3;
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            var_15 = ((short) arr_11 [i_2 + 3]);
                            var_16 = ((/* implicit */short) ((((arr_16 [i_0] [i_0] [2U] [10U] [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [10]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_3 + 4]) > (((/* implicit */int) (short)-30745)))))) : (arr_7 [i_2 - 2] [i_2] [i_2 + 2] [10])));
                            arr_17 [i_0 + 2] [i_1] [i_2] [11] [i_1] [i_0 + 2] = ((/* implicit */unsigned int) (short)-1);
                        }
                        for (int i_5 = 1; i_5 < 12; i_5 += 4) 
                        {
                            var_17 = ((((/* implicit */_Bool) var_11)) ? (459928993U) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))));
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) -991705922)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))));
                            arr_20 [i_0] [i_1] [i_5] = ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0 + 2])) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (((arr_16 [i_5] [10] [i_2] [10] [i_0]) / (arr_4 [i_1] [i_3]))));
                        }
                        arr_21 [i_0] [i_0] |= ((/* implicit */unsigned int) 2114943493);
                        /* LoopSeq 2 */
                        for (short i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            arr_24 [i_0] [i_1] [i_1] [i_3 + 3] [(short)1] [i_3] = var_8;
                            arr_25 [2] [i_1] [i_2] [i_1] [i_6] = ((/* implicit */short) var_5);
                            var_19 = var_8;
                        }
                        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            arr_29 [(short)4] [i_1] [i_2] [i_1] [i_7] = ((/* implicit */short) var_11);
                            arr_30 [i_0] [12] [i_0] [0U] [i_3] [i_1] = ((/* implicit */int) arr_16 [3U] [i_1] [i_1] [i_1] [i_1]);
                            var_20 = ((((/* implicit */_Bool) (short)-16763)) ? (((-991705922) ^ (((/* implicit */int) var_4)))) : (((/* implicit */int) (short)-16504)));
                            arr_31 [i_7] [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_2] [i_1] [0])) && (((/* implicit */_Bool) arr_1 [i_1]))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) >= (arr_16 [5] [9U] [i_2 + 1] [5] [5])))));
                            var_21 = ((((/* implicit */_Bool) arr_18 [i_0 + 2] [i_0] [i_2 - 2] [i_7] [i_7])) ? (arr_18 [i_0 - 2] [i_0 + 1] [i_2 + 1] [(short)4] [i_2]) : (arr_18 [i_0 + 1] [i_0 + 1] [i_2 + 3] [i_3] [i_3]));
                        }
                        var_22 = ((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0] [i_3 + 4] [i_2 - 2] [i_3])) ? (arr_22 [i_1] [i_1] [8U] [i_3 + 4] [i_1]) : (arr_22 [10U] [10U] [(short)2] [i_3 + 4] [i_2]));
                    }
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (~(arr_26 [i_0] [12U] [i_1] [i_2 + 1]))))));
                        /* LoopSeq 3 */
                        for (int i_9 = 3; i_9 < 11; i_9 += 2) 
                        {
                            var_24 = ((/* implicit */int) arr_7 [7U] [i_1] [i_2] [7U]);
                            arr_38 [i_1] [5U] [i_2] [i_2] = (+(arr_35 [i_0] [i_1] [i_0]));
                            arr_39 [7] [(short)0] [i_2] [i_1] [i_9] [i_8] [i_8] = ((((/* implicit */_Bool) 4294967280U)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_0] [i_8] [i_1]))))) : (arr_16 [i_0] [i_0] [i_0 - 4] [i_8] [i_9]));
                        }
                        for (int i_10 = 0; i_10 < 14; i_10 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) var_11))));
                            var_26 = ((arr_6 [i_1] [9U] [i_2] [i_1]) + (arr_6 [i_1] [i_1] [13] [i_1]));
                            arr_42 [i_0] [i_1] [i_2] [i_1] [4] = arr_40 [i_2] [i_8] [i_2];
                        }
                        for (int i_11 = 0; i_11 < 14; i_11 += 4) /* same iter space */
                        {
                            arr_45 [i_0] [(short)2] [i_1] [i_1] [i_1] [i_8] [i_11] = ((1150727947) ^ (((/* implicit */int) (short)-30712)));
                            arr_46 [i_1] [i_1] [i_1] [i_1] [7U] = var_4;
                        }
                        var_27 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) var_10))))));
                    }
                }
            } 
        } 
    }
    var_28 = ((/* implicit */int) var_3);
}
