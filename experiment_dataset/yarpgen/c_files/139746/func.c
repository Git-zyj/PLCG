/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139746
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
    var_18 = ((/* implicit */unsigned int) var_4);
    var_19 += (((-((-(((/* implicit */int) var_16)))))) < ((-((-(((/* implicit */int) var_4)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_6 [i_0] [(signed char)6] [i_0] = ((/* implicit */long long int) (-((((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((((/* implicit */_Bool) (short)-3806)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_2 [i_1] [i_0])))) : (((/* implicit */int) ((var_12) && (((/* implicit */_Bool) arr_2 [i_0] [i_0])))))))));
                arr_7 [(signed char)1] [i_1] &= ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
                var_20 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1326408838U)) ? (4294950912U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */int) arr_1 [(short)6])) + (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_2 [11U] [i_1])))))));
            }
        } 
    } 
}
