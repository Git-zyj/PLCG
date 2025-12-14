/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131452
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
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        var_18 = ((/* implicit */int) var_17);
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            var_19 *= ((/* implicit */signed char) (-(arr_0 [i_0] [i_0])));
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                var_20 ^= ((/* implicit */int) var_9);
                arr_8 [11U] &= ((/* implicit */unsigned int) max((max((((/* implicit */short) arr_7 [i_0 - 1])), (arr_4 [i_0] [i_0] [i_0]))), (((/* implicit */short) arr_6 [i_0]))));
            }
            for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) 1660478382U))));
                arr_11 [i_0 + 1] [i_3] [i_0 - 3] [i_0 + 1] = ((/* implicit */short) ((unsigned int) (signed char)25));
                arr_12 [i_0] [i_0] [i_3] = ((/* implicit */signed char) (~(2213306124U)));
                arr_13 [i_0 + 1] [i_3] [i_3] = (~(var_11));
            }
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) -1399661359))));
            arr_14 [i_0] = ((/* implicit */unsigned char) arr_3 [i_0]);
        }
        for (short i_4 = 1; i_4 < 11; i_4 += 2) 
        {
            arr_18 [i_0] [i_4] [i_0] = ((unsigned int) ((signed char) arr_6 [i_0 - 3]));
            arr_19 [i_0] [i_0] [i_4 - 1] = arr_5 [i_4 + 1] [i_4 + 1] [i_0 - 3];
            arr_20 [i_0] [i_0] = ((/* implicit */short) var_13);
            var_23 *= ((/* implicit */short) max((((/* implicit */unsigned int) 4194240)), (var_14)));
        }
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) var_16))));
    }
    for (short i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        arr_25 [i_5] = arr_22 [i_5] [i_5];
        arr_26 [17] [17] = (~(((/* implicit */int) ((signed char) ((unsigned int) arr_22 [i_5] [i_5])))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            var_25 = ((/* implicit */int) arr_24 [i_5]);
            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((unsigned char) arr_22 [i_5] [i_6])))));
            arr_29 [i_5] = ((/* implicit */unsigned int) (+((-(var_11)))));
            /* LoopNest 2 */
            for (signed char i_7 = 3; i_7 < 16; i_7 += 3) 
            {
                for (short i_8 = 2; i_8 < 15; i_8 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 2; i_9 < 17; i_9 += 4) 
                        {
                            arr_38 [i_5] [i_8] [i_9] &= ((/* implicit */unsigned int) var_7);
                            arr_39 [i_7] [(short)17] [i_7 - 3] [i_8] [i_9 - 2] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) (unsigned char)88))))));
                            var_27 = ((/* implicit */int) arr_21 [i_9]);
                            arr_40 [i_7] [i_6] [i_6] [i_8] [(short)8] = ((unsigned int) (~(arr_21 [i_6])));
                        }
                        var_28 = ((/* implicit */short) 393216);
                    }
                } 
            } 
        }
        for (int i_10 = 3; i_10 < 15; i_10 += 1) 
        {
            arr_44 [i_5] [i_10] [i_5] = ((/* implicit */short) max((max((arr_30 [i_5] [i_5] [i_5] [i_5]), (((/* implicit */unsigned int) -425665071)))), (max((max((((/* implicit */unsigned int) -4194240)), (var_14))), (arr_22 [7U] [8U])))));
            var_29 = ((unsigned int) (~(((int) 3455176244U))));
            var_30 ^= ((/* implicit */unsigned int) (-((~(((/* implicit */int) ((short) arr_42 [i_5])))))));
        }
        var_31 = ((/* implicit */int) (-(max((max((arr_43 [(short)1] [i_5] [10U]), (((/* implicit */unsigned int) arr_37 [i_5] [2] [i_5] [i_5] [i_5])))), ((+(arr_27 [i_5] [(short)9] [(short)9])))))));
    }
    var_32 = ((/* implicit */int) var_17);
    var_33 = var_2;
}
