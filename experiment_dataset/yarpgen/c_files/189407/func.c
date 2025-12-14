/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189407
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
    var_20 = ((signed char) (!((!(((/* implicit */_Bool) var_17))))));
    var_21 ^= var_19;
    var_22 = ((/* implicit */signed char) (-(((/* implicit */int) var_13))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [i_0 + 4] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned char) var_9)), (arr_1 [i_1 + 2] [i_1 + 3]))), (((/* implicit */unsigned char) var_14))))) ? (max((var_12), (((/* implicit */long long int) -837682521)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0 + 3] [i_1 - 1] [i_1 + 2])) ? (arr_5 [i_0 + 2] [i_1 + 3] [i_1 + 2]) : (arr_5 [i_0 + 3] [i_1 + 1] [i_1 + 1]))))));
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) arr_2 [i_0]))));
            }
        } 
    } 
}
