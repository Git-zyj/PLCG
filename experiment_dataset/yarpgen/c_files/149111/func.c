/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149111
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
    var_20 = var_19;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */_Bool) max((var_21), ((_Bool)0)));
                arr_5 [i_1] = (!(((((((/* implicit */int) var_13)) + (((/* implicit */int) (_Bool)0)))) != (((/* implicit */int) max(((_Bool)1), (var_12)))))));
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((~(((/* implicit */int) arr_1 [i_0] [i_1]))))))) ? (((/* implicit */int) var_0)) : ((~((((_Bool)0) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_2))))))));
                arr_6 [i_1] [i_0] [(_Bool)1] = (_Bool)0;
                arr_7 [i_1] = (_Bool)0;
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) max((var_23), (var_11)));
}
