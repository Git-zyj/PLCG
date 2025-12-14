/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148286
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
    var_12 = ((/* implicit */unsigned long long int) ((-1) - (5)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 6; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) ((var_1) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((arr_6 [i_1] [i_1 + 1] [i_1 - 1] [i_1 + 4]) < (((/* implicit */int) var_9))))) : (((/* implicit */int) arr_0 [i_2] [i_1])))))));
                    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) || (((/* implicit */_Bool) arr_6 [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1 - 4]))));
                }
            } 
        } 
    } 
}
