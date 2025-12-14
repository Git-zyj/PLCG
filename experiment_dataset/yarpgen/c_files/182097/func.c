/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182097
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_14 = var_2;
                    var_15 = ((/* implicit */unsigned int) min((((/* implicit */int) arr_6 [2U])), (((((/* implicit */int) ((signed char) var_4))) << (((arr_8 [i_0]) - (224675945U)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) var_5))));
    var_17 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (3324228492469379373LL)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_9)), (var_8)))) : (min((((/* implicit */unsigned long long int) var_0)), (var_1))))));
}
