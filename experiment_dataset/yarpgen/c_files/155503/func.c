/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155503
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
    var_14 = ((/* implicit */signed char) max((var_14), (var_8)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_6 [i_0] [(signed char)0] = ((/* implicit */signed char) ((min(((~(((/* implicit */int) var_6)))), (((/* implicit */int) arr_0 [(signed char)5])))) << (((((((/* implicit */_Bool) max(((signed char)-108), ((signed char)-119)))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (((/* implicit */int) (signed char)87)) : (((/* implicit */int) (signed char)87)))) : (((/* implicit */int) (signed char)24)))) - (61)))));
                var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
            }
        } 
    } 
}
