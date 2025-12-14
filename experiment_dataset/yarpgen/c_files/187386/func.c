/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187386
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
    var_15 = ((var_14) ^ (var_9));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            for (unsigned int i_2 = 4; i_2 < 22; i_2 += 2) 
            {
                {
                    var_16 ^= min(((+(arr_6 [i_2 + 2] [i_1 - 1] [i_1 + 1]))), (((((/* implicit */_Bool) arr_6 [i_2 - 2] [i_1] [i_1 - 2])) ? (1356081144U) : (3938023952U))));
                    var_17 = ((unsigned int) ((var_8) == (var_2)));
                    var_18 = max(((-(((unsigned int) var_12)))), (((((/* implicit */unsigned int) ((/* implicit */int) ((1356081118U) == (340873185U))))) - (min((var_4), (var_13))))));
                }
            } 
        } 
    } 
    var_19 = ((((/* implicit */_Bool) max((var_4), (min((var_8), (var_10)))))) ? (((unsigned int) ((((/* implicit */_Bool) var_5)) ? (3954094101U) : (var_5)))) : (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_3)) ? (2954686218U) : (var_12))) : (((var_3) ^ (4294967295U))))));
    var_20 += ((unsigned int) var_4);
}
