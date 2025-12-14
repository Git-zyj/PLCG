/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180607
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 1546862736)) ? (((/* implicit */int) (unsigned short)59204)) : (((/* implicit */int) (unsigned char)102)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */_Bool) -35279499)) && (((/* implicit */_Bool) var_3)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        var_21 &= min((((/* implicit */int) arr_0 [(unsigned char)18] [i_0])), ((-(((arr_1 [i_0]) * (((/* implicit */int) arr_2 [(short)0])))))));
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)90)) : (var_4)))) ? (((/* implicit */int) (short)-18844)) : (((/* implicit */int) max(((signed char)63), ((signed char)56)))))) > (((/* implicit */int) (!(arr_0 [(signed char)4] [i_0 - 4])))))))));
    }
    for (short i_1 = 2; i_1 < 17; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                {
                    var_23 &= arr_9 [i_1] [i_2] [i_2];
                    var_24 += ((/* implicit */short) var_9);
                    arr_11 [i_1] [i_1] [i_1 + 2] [i_1] = 0U;
                }
            } 
        } 
        arr_12 [i_1] = (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))));
        var_25 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [i_1] [i_1 - 1]) - (arr_3 [i_1 - 1] [i_1 - 1])))) ? (((arr_10 [i_1 + 1] [(unsigned char)8] [i_1 - 1]) ? (((/* implicit */int) arr_5 [i_1])) : (arr_3 [i_1 + 1] [i_1 - 1]))) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (short)29566)) : (((/* implicit */int) (_Bool)0))))));
        var_26 = (signed char)63;
    }
    var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) max((((/* implicit */signed char) var_6)), ((signed char)55))))));
}
