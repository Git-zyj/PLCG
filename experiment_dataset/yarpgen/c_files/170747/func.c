/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170747
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
    var_20 = ((/* implicit */unsigned long long int) (-(1955757026U)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (arr_0 [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 1] [i_1 + 1])))))))));
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_0 + 1])) ? ((+(((/* implicit */int) (short)8819)))) : (((/* implicit */int) arr_2 [i_1 - 1] [i_0 - 3])))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((unsigned int) var_10));
}
