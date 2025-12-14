/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120963
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
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) ((_Bool) var_15))) : (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))))));
    var_21 = var_17;
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_5 [i_2 - 1]) ? (((/* implicit */int) arr_5 [i_2 - 1])) : (((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) (_Bool)1))))));
                    arr_8 [i_0 - 1] [i_1] [i_0] = ((/* implicit */_Bool) max((((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!((_Bool)1)))))), (((/* implicit */int) (_Bool)1))));
                    arr_9 [i_0] [i_1] [i_2] = ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) && ((((_Bool)1) || ((_Bool)1))))) && (((min(((_Bool)1), (var_2))) && ((!((_Bool)1))))));
                    var_23 = (_Bool)1;
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */_Bool) (~((-(((/* implicit */int) (!(var_13))))))));
    var_25 = ((_Bool) (_Bool)1);
}
