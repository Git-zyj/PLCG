/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101679
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
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */long long int) 1298628749)) / (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (var_5)))) ? (((var_1) - (var_0))) : (((/* implicit */long long int) var_10)))))))));
    var_16 = ((/* implicit */_Bool) var_12);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_0 [i_0])))) * (((/* implicit */int) var_7))));
                var_18 *= ((/* implicit */_Bool) (-((+(((((/* implicit */long long int) var_2)) / (var_1)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((unsigned short) var_11));
}
