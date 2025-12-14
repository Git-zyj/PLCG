/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105441
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
    var_11 = 4193283345U;
    var_12 = ((/* implicit */short) var_0);
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((var_5), (var_9))), (((4193283323U) + (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) ? (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_5)))))) : (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) arr_3 [i_1 + 2] [i_1 + 1]))))) ? (((/* implicit */int) arr_3 [i_1 + 2] [i_1 + 2])) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)8142)), ((unsigned short)65516))))));
                arr_5 [i_0] = ((/* implicit */long long int) ((unsigned short) max((var_7), (((/* implicit */unsigned long long int) ((unsigned char) var_9))))));
            }
        } 
    } 
}
