/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171359
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
    var_17 += ((/* implicit */_Bool) (-(((/* implicit */int) var_13))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                var_18 &= ((/* implicit */long long int) var_4);
                arr_6 [i_0] [i_0] [i_0] &= ((/* implicit */long long int) (+((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_0] [9] [i_1 - 1])) : (((/* implicit */int) arr_1 [i_0]))))))));
                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (arr_0 [i_1])))))) || (((_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [19U] [19U]))) : (arr_5 [5U] [i_1])))))))));
            }
        } 
    } 
    var_20 -= min((var_1), (min(((~(var_15))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_0)))))));
}
