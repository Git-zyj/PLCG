/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170300
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_17 += ((35890972U) >> (((((((/* implicit */_Bool) max((arr_3 [i_0] [i_1]), (arr_3 [0U] [0U])))) ? ((+(arr_1 [i_1]))) : (min((var_6), (arr_3 [i_0] [i_0]))))) - (2691951902U))));
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_2))) ? (((2758096036U) * (arr_2 [i_0] [i_1] [10U]))) : (arr_1 [21U]))))));
                var_18 = (~(arr_2 [i_0] [21U] [i_1]));
                arr_5 [i_1] [14U] = ((/* implicit */unsigned int) ((((35890972U) * (780705326U))) < (((((/* implicit */_Bool) arr_3 [i_0] [21U])) ? ((~(var_13))) : (((unsigned int) var_6))))));
                var_19 = ((var_12) + (arr_0 [i_0]));
            }
        } 
    } 
    var_20 = var_4;
    var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(0U)))) ? (67990971U) : (var_8))) <= (((((/* implicit */_Bool) (+(var_15)))) ? (134713683U) : ((+(295261266U)))))));
}
