/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174316
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
    var_11 = ((/* implicit */short) ((((/* implicit */int) var_3)) ^ (((((/* implicit */int) (short)32767)) + (((/* implicit */int) var_8))))));
    var_12 -= ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
    var_13 = var_7;
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_14 |= ((/* implicit */short) (+(((/* implicit */int) ((short) ((((/* implicit */int) var_7)) * (((/* implicit */int) (short)10088))))))));
        var_15 ^= ((/* implicit */short) (+(((((/* implicit */int) var_6)) & (((/* implicit */int) var_8))))));
        arr_4 [i_0] = ((/* implicit */short) max(((-(((/* implicit */int) (short)-10088)))), (((/* implicit */int) var_2))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        arr_14 [i_3] [i_1] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_6 [i_0]))));
                        var_16 = (short)-25465;
                        var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_2] [i_1]))));
                        arr_15 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)(-32767 - 1))) / (((/* implicit */int) arr_12 [i_1] [i_2] [i_2] [i_1] [i_1] [i_0]))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7))));
                    }
                } 
            } 
        } 
        var_18 -= (short)10088;
    }
    for (short i_4 = 3; i_4 < 14; i_4 += 2) 
    {
        arr_18 [i_4] = var_8;
        var_19 *= arr_17 [i_4 + 1] [i_4 - 1];
    }
    for (short i_5 = 1; i_5 < 15; i_5 += 4) 
    {
        var_20 = var_6;
        var_21 = ((/* implicit */short) (~(min(((~(((/* implicit */int) arr_17 [i_5] [i_5])))), (((((/* implicit */int) var_7)) | (((/* implicit */int) (short)9137))))))));
    }
    /* vectorizable */
    for (short i_6 = 2; i_6 < 15; i_6 += 1) 
    {
        var_22 -= ((/* implicit */short) (+(((/* implicit */int) (short)-18881))));
        var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
    }
}
