/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152127
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
    var_19 = ((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) (_Bool)1)) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
    var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)0)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */_Bool) min((var_21), ((_Bool)1)));
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : ((-(((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))))))) ? (((/* implicit */int) var_18)) : ((+((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_15))))))));
            }
        } 
    } 
}
