/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11516
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (min(((+(((/* implicit */int) var_5)))), (((/* implicit */int) min((((/* implicit */short) arr_3 [i_1] [i_0])), (var_2)))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((((/* implicit */int) arr_1 [i_1] [i_0])) - (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_1] [i_0])) : (((/* implicit */int) arr_1 [i_1] [i_0]))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */short) arr_4 [(unsigned short)6] [(unsigned short)6]);
                arr_6 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_2 [i_0] [i_1] [i_0]))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) var_3))));
}
