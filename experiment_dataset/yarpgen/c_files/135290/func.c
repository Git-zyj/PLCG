/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135290
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
    var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_19))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) (short)31657)) != (arr_1 [i_0 + 1]))))));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 - 1])));
        var_23 = ((/* implicit */_Bool) (-(arr_1 [i_0 - 1])));
    }
    /* vectorizable */
    for (long long int i_1 = 4; i_1 < 8; i_1 += 4) 
    {
        arr_4 [i_1 + 2] [i_1] = ((/* implicit */short) (_Bool)1);
        arr_5 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_1 - 2]))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_8 [3] = arr_7 [i_2];
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_7 [i_2]) : (arr_7 [i_2])));
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_15 [i_4] [i_4] [i_4] = ((/* implicit */short) (-(arr_14 [i_2] [i_4])));
                    arr_16 [13U] [i_4] [i_3] [i_4] = ((/* implicit */_Bool) 1293845411U);
                }
            } 
        } 
    }
    for (int i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [11U])) * (((/* implicit */int) (short)-31637))))) || (((/* implicit */_Bool) ((arr_17 [i_5]) ? (((/* implicit */int) arr_19 [i_5])) : (((/* implicit */int) (_Bool)1)))))));
        arr_20 [i_5] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 2066601222)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-26285))))));
    }
    var_25 = ((/* implicit */unsigned char) (short)-28260);
    var_26 = ((/* implicit */short) (-(((/* implicit */int) var_3))));
}
