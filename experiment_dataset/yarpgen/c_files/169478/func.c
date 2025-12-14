/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169478
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
    var_19 = ((/* implicit */short) var_17);
    var_20 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) arr_4 [(short)3] [(short)6] [i_1 - 1]);
                var_21 ^= arr_3 [i_1] [i_1] [i_0];
            }
        } 
    } 
    var_22 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_15))))) ? (((/* implicit */int) min((var_3), (var_3)))) : ((+(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) (_Bool)1))))))));
}
