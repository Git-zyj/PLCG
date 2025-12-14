/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187459
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
    var_10 = ((/* implicit */signed char) var_3);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((var_8) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_1 - 1])))))) >> (((max((((/* implicit */int) (unsigned short)58093)), (((((/* implicit */_Bool) (signed char)35)) ? (((/* implicit */int) (_Bool)1)) : (-1))))) - (58076)))));
                var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) && (((((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 2] [i_1 - 1])) < (((/* implicit */int) arr_4 [i_1 + 2] [i_1] [i_1 + 2]))))));
            }
        } 
    } 
}
