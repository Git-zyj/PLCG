/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103206
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
    var_10 = ((/* implicit */_Bool) var_1);
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_6 [i_0 + 1] [9ULL] [i_0] = (~(min((var_9), (((/* implicit */long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) arr_5 [i_0]))))))));
                var_11 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */int) arr_5 [i_1])), (arr_2 [i_1] [i_1]))) : (((/* implicit */int) var_0))))));
            }
        } 
    } 
}
