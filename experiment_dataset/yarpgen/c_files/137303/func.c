/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137303
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */short) ((int) ((unsigned char) (unsigned short)62621)));
                var_18 = ((/* implicit */_Bool) (((((-(975328477))) + (2147483647))) >> (((((((/* implicit */_Bool) ((((/* implicit */int) var_16)) + (((/* implicit */int) arr_0 [i_0]))))) ? (975328459) : (arr_3 [i_1] [(unsigned char)14] [i_0]))) - (975328429)))));
                var_19 = ((/* implicit */unsigned short) ((((_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) var_3)) : ((~(-975328470)))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_16))));
}
