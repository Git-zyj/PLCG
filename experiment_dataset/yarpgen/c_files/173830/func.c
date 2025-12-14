/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173830
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
    var_20 = ((/* implicit */short) var_0);
    var_21 ^= ((/* implicit */_Bool) var_10);
    var_22 = ((/* implicit */signed char) 14U);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1 + 1] [(short)12] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (var_1))))) : (-2651779393061478465LL)))));
                arr_5 [i_0] |= ((/* implicit */int) ((4294967281U) >> ((((~(var_2))) + (1068456944)))));
                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) max((((/* implicit */long long int) (-(((/* implicit */int) ((var_5) == (4294967281U))))))), (((var_6) << (((arr_2 [i_0] [i_1 + 2]) - (3959074827U))))))))));
            }
        } 
    } 
}
