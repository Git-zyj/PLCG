/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180230
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
    var_13 = ((/* implicit */signed char) (~(var_0)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 380088426U)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (arr_3 [i_0] [i_0]) : (var_2)));
        var_14 = ((/* implicit */_Bool) max((var_14), (((((3914878860U) >> (((arr_3 [i_0] [i_0]) - (393603535U))))) > (((/* implicit */unsigned int) 2047))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_1 = 1; i_1 < 10; i_1 += 3) 
    {
        var_15 = ((/* implicit */signed char) 380088435U);
        var_16 = ((/* implicit */int) 1272916332U);
        var_17 = ((/* implicit */unsigned short) ((unsigned char) 380088426U));
    }
    for (int i_2 = 1; i_2 < 17; i_2 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (~(-7834744408955637090LL))))));
        arr_9 [i_2] [i_2 + 3] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)59))))), (min((((/* implicit */unsigned int) ((var_12) == (((/* implicit */int) (unsigned char)53))))), (((arr_1 [i_2]) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2])))))))));
    }
}
