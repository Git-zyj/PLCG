/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155247
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
    var_20 = ((/* implicit */short) ((((/* implicit */int) (signed char)-77)) > (((/* implicit */int) var_14))));
    var_21 = ((/* implicit */signed char) (~(((/* implicit */int) var_7))));
    var_22 = var_7;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-77))));
                arr_5 [i_1] [i_1] = var_4;
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)-78)) ? (((/* implicit */int) arr_3 [i_1 - 1])) : (((/* implicit */int) (short)30868)))), (((/* implicit */int) ((short) (signed char)-77)))))) ? (max((((/* implicit */int) arr_1 [i_1 + 1])), (((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)13)))))) : (((/* implicit */int) arr_1 [i_1]))));
                arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) var_16))))))) ? (((/* implicit */int) (short)32704)) : (((/* implicit */int) (signed char)-73))));
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) ((((/* implicit */int) ((short) var_10))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
}
