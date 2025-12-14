/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130330
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
    for (long long int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) min((((arr_3 [i_0] [i_0 + 1] [i_0]) ? (((/* implicit */int) arr_3 [i_0] [i_0 - 1] [i_0])) : (((/* implicit */int) var_19)))), (arr_1 [i_0]))))));
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 + 2])) ? (((/* implicit */long long int) ((((arr_2 [i_0 - 1] [i_0 + 1]) + (2147483647))) << (((arr_1 [i_1]) + (507199992)))))) : (var_0)));
                var_22 = ((/* implicit */_Bool) ((((((/* implicit */int) ((_Bool) (_Bool)1))) + (((/* implicit */int) max(((_Bool)1), (arr_5 [i_0])))))) | (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_9)) + (arr_1 [i_0])))))));
                var_23 = ((/* implicit */int) (-(((long long int) arr_2 [i_0 + 2] [i_0 + 2]))));
            }
        } 
    } 
    var_24 = var_15;
    var_25 += ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) + (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_10)) < (var_15))))) : (((var_8) / (((/* implicit */long long int) var_5))))))));
    var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((var_12) ? (((/* implicit */long long int) (((+(((/* implicit */int) var_3)))) + (((/* implicit */int) ((_Bool) var_13)))))) : (((long long int) var_12)))))));
}
