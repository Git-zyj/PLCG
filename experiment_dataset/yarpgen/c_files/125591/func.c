/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125591
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
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */short) min(((+(((/* implicit */int) (short)31240)))), (((((/* implicit */_Bool) (short)22807)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-26189))))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-31240)) || (((/* implicit */_Bool) (short)32134)))))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        var_13 = ((short) arr_6 [i_0] [(short)13] [i_0]);
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_4] [i_3])) ? (((/* implicit */int) arr_0 [i_2] [(short)2])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [(short)8]))))) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) arr_10 [i_0] [i_1] [(short)13] [(short)13] [i_4] [i_2]))));
                            var_15 = ((/* implicit */short) (-(((/* implicit */int) var_10))));
                            var_16 = arr_13 [i_0] [(short)10] [i_2] [(short)8] [i_4];
                        }
                        for (short i_5 = 0; i_5 < 16; i_5 += 3) 
                        {
                            arr_17 [i_3] = arr_4 [i_0];
                            var_17 = arr_5 [(short)14] [i_1];
                            var_18 ^= ((/* implicit */short) (-((+(((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [(short)0] [i_3] [i_1] [i_5]))))));
                        }
                    }
                    for (short i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            var_19 = ((/* implicit */short) min((((/* implicit */int) arr_2 [i_1] [i_0])), ((-(((/* implicit */int) (short)15430))))));
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])))))));
                        }
                        /* LoopSeq 2 */
                        for (short i_8 = 3; i_8 < 14; i_8 += 3) 
                        {
                            var_21 = min((var_0), (arr_14 [i_0] [i_6] [i_6] [i_2] [(short)3] [i_6] [i_0]));
                            var_22 += ((/* implicit */short) max(((+((+(((/* implicit */int) arr_25 [(short)1] [i_0] [i_2] [i_0] [i_2])))))), (((((/* implicit */_Bool) arr_20 [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 1] [i_6])) ? ((+(((/* implicit */int) arr_25 [i_0] [i_8] [i_2] [i_2] [i_0])))) : (((/* implicit */int) arr_16 [i_8 - 3] [i_6] [i_2] [i_1]))))));
                            var_23 = min((((short) var_4)), (var_2));
                            var_24 = ((short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [(short)8] [i_6] [i_2 - 1] [i_6] [i_8 - 2]))))) || (((/* implicit */_Bool) max((var_1), (arr_15 [i_0] [i_0] [i_0] [i_0] [(short)11] [i_0] [(short)3]))))));
                        }
                        for (short i_9 = 0; i_9 < 16; i_9 += 4) 
                        {
                            var_25 = ((/* implicit */short) (((-(((((/* implicit */int) arr_28 [i_6] [i_6] [i_6] [(short)4] [i_0] [i_6])) / (((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [(short)6] [i_0])))))) * (((((/* implicit */int) min((var_10), (var_9)))) * (((/* implicit */int) max((var_4), (var_7))))))));
                            var_26 ^= ((/* implicit */short) (+((+((+(((/* implicit */int) arr_21 [i_0] [i_0] [(short)6] [i_1] [i_0] [i_0] [i_0]))))))));
                            var_27 = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_27 [i_0] [(short)8] [i_2] [(short)5] [i_6]))))));
                        }
                    }
                    for (short i_10 = 0; i_10 < 16; i_10 += 3) 
                    {
                        var_28 = ((/* implicit */short) min((var_28), (((short) (+((+(((/* implicit */int) arr_0 [(short)14] [(short)14])))))))));
                        var_29 = ((/* implicit */short) ((((((/* implicit */int) (short)26189)) & (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)31256)) : (((/* implicit */int) (short)-26189)))))) << (((min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_26 [i_0] [i_0] [i_1] [i_2 - 1] [(short)15])) : (((/* implicit */int) arr_28 [i_0] [i_2] [(short)12] [(short)1] [(short)0] [i_10])))), (((/* implicit */int) ((short) var_8))))) + (24100)))));
                    }
                    for (short i_11 = 0; i_11 < 16; i_11 += 4) 
                    {
                        var_30 = ((short) ((short) ((short) var_8)));
                        /* LoopSeq 1 */
                        for (short i_12 = 0; i_12 < 16; i_12 += 3) 
                        {
                            var_31 = ((/* implicit */short) (+(((/* implicit */int) arr_29 [i_12] [i_12]))));
                            var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) (((+(((/* implicit */int) max((arr_23 [(short)0] [i_11] [i_11] [i_11] [i_11]), (arr_33 [i_1] [i_0])))))) / ((-(((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0] [i_0] [(short)12])) ? (((/* implicit */int) arr_26 [i_12] [(short)15] [i_12] [i_12] [(short)5])) : (((/* implicit */int) arr_33 [i_1] [i_1])))))))))));
                        }
                        var_33 ^= ((/* implicit */short) (-((-((-(((/* implicit */int) var_7))))))));
                    }
                }
            } 
        } 
    } 
    var_34 = min(((short)32757), ((short)-25723));
}
