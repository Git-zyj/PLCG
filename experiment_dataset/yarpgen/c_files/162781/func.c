/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162781
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_11))));
    var_20 = ((/* implicit */signed char) var_1);
    var_21 = ((/* implicit */signed char) (+((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-53))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [(signed char)0] &= ((/* implicit */signed char) (+((+(((/* implicit */int) var_13))))));
                var_22 = min(((signed char)32), (((/* implicit */signed char) min((arr_4 [i_0] [i_0 - 1]), (arr_4 [i_0] [i_0 - 1])))));
                var_23 = ((/* implicit */_Bool) max((var_23), (arr_1 [(_Bool)1])));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) max((min((max((var_17), (((/* implicit */signed char) arr_3 [i_0] [i_1])))), (min((((/* implicit */signed char) arr_1 [i_0])), (arr_0 [i_0]))))), (((/* implicit */signed char) arr_2 [i_0 + 2] [i_0 - 1]))));
            }
        } 
    } 
    var_24 *= var_4;
}
