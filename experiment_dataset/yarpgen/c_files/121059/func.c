/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121059
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
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (max(((+(var_6))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_1])))))))));
                var_16 -= ((/* implicit */signed char) (-(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127))) * (arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 2])))));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) var_1))));
}
