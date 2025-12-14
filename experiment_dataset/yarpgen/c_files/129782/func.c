/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129782
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
    var_19 = ((/* implicit */unsigned char) var_18);
    var_20 = ((/* implicit */_Bool) var_2);
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) var_12))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1] [i_1])) >> (((((int) var_2)) - (29))))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)2)), (min((((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_2 [i_0] [i_1 - 1] [i_0])))), (((/* implicit */int) var_15)))))))));
            }
        } 
    } 
}
