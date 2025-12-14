/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125556
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
    var_20 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_21 = max(((+(((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (var_3) : (arr_0 [i_1] [i_1]))))), ((-(arr_2 [i_0] [i_0] [i_0]))));
                arr_4 [i_0] [i_0] [i_1] = arr_0 [i_0] [i_0];
                arr_5 [i_1] [i_1] [i_1] &= ((/* implicit */int) (~(((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (var_5) : (((/* implicit */unsigned int) arr_3 [i_0] [i_1]))))));
                var_22 -= ((/* implicit */long long int) 2446004140U);
                var_23 *= ((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) min((((/* implicit */int) var_0)), (var_15)))), (arr_2 [i_1] [i_1] [i_0])))));
            }
        } 
    } 
}
