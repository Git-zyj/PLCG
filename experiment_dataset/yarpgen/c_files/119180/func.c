/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119180
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_20 = arr_3 [i_1] [i_1] [i_0];
                    arr_8 [i_1] [i_1] [i_2] = var_8;
                    var_21 = max((max((((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_1] [i_2])) || (((/* implicit */_Bool) var_19))))), (var_8))), (arr_7 [i_1] [i_1] [i_1] [i_1]));
                    arr_9 [i_1] [(signed char)1] = max((((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_1])) != (((/* implicit */int) arr_1 [i_0]))))), (var_7));
                    var_22 = ((/* implicit */signed char) max((var_22), (arr_4 [i_2])));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) (signed char)-1))));
}
