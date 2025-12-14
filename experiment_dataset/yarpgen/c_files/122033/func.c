/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122033
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 4; i_2 < 9; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) arr_1 [i_0]))));
                    var_20 ^= ((/* implicit */long long int) (_Bool)0);
                    var_21 = ((((/* implicit */_Bool) ((arr_7 [i_2 - 4] [i_2 - 1] [i_2 - 4]) + (((/* implicit */unsigned int) 1498562064))))) ? (((long long int) arr_7 [i_2 + 1] [i_2 - 2] [i_2 - 1])) : (((/* implicit */long long int) arr_7 [i_2 - 1] [i_2 - 4] [i_2 - 1])));
                }
            } 
        } 
    } 
    var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) != (((((long long int) 32767)) - (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
    var_23 = ((/* implicit */short) var_13);
}
