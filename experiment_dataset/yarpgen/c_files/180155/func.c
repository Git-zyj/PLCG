/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180155
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] = var_6;
        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_0 [i_0 + 1]))) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)-20311)))) - (max((arr_0 [i_0 + 1]), (((/* implicit */unsigned int) var_1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (short i_3 = 1; i_3 < 17; i_3 += 2) 
                {
                    {
                        var_13 ^= ((/* implicit */short) arr_11 [i_0]);
                        var_14 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)20305)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-30659))));
                        var_15 = ((/* implicit */_Bool) min((max((arr_6 [i_0] [i_1 + 1] [i_3]), (((/* implicit */unsigned int) var_3)))), (((arr_6 [i_0] [i_1] [i_2]) + (arr_6 [i_0] [i_1 + 1] [i_2])))));
                    }
                } 
            } 
        } 
        var_16 = ((short) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_9 [i_0 + 1] [(_Bool)1] [(_Bool)1] [i_0 + 1])) : (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) arr_9 [i_0] [4] [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_6))))));
    }
    var_17 = ((/* implicit */short) (-(((((/* implicit */int) max((((/* implicit */short) var_10)), (var_11)))) | (var_7)))));
}
