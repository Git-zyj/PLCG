/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120675
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
    var_17 *= (signed char)-35;
    var_18 = ((/* implicit */signed char) min((((/* implicit */int) var_1)), ((+(((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_1] [(signed char)8] = (signed char)0;
                var_19 = arr_2 [(signed char)4] [(signed char)2] [i_1];
                var_20 |= arr_1 [i_0];
            }
        } 
    } 
    var_21 = var_14;
    var_22 = ((signed char) var_12);
}
