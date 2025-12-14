/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10412
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
    var_15 = ((/* implicit */unsigned char) var_1);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        var_16 -= ((/* implicit */long long int) arr_1 [i_0]);
        var_17 = ((/* implicit */unsigned int) arr_1 [i_0 - 1]);
        arr_2 [i_0] = ((/* implicit */short) ((var_12) <= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7)))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) (unsigned char)128)))))) >= (((((/* implicit */long long int) ((/* implicit */int) (short)2805))) & (var_6))))))));
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) 12290215296804695137ULL)) && (((/* implicit */_Bool) 3581382892U))));
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) : (arr_4 [i_1])));
        var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) arr_0 [i_1] [i_1]))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = ((/* implicit */short) arr_0 [i_2] [i_2]);
        arr_9 [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_2])) - (((/* implicit */int) (short)25660))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (12216214665006068963ULL));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        arr_14 [i_3] &= ((/* implicit */unsigned char) ((arr_12 [i_3] [i_3]) | (((/* implicit */int) var_2))));
        arr_15 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((4689262295826147405ULL) - (((/* implicit */unsigned long long int) 2987286488351172284LL))))) || (((/* implicit */_Bool) ((var_4) & (var_4))))));
        var_22 = ((/* implicit */unsigned long long int) (short)-17769);
    }
    var_23 = ((/* implicit */short) var_12);
}
