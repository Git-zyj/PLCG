/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14901
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
    var_13 = ((/* implicit */_Bool) max((var_13), (var_8)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) min((var_14), (max((((((/* implicit */int) var_4)) < (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1))))))), (min((arr_1 [i_0]), (arr_0 [(_Bool)1])))))));
                var_15 += ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_1])) < (((/* implicit */int) (_Bool)1))))), (((arr_4 [i_0] [i_1]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_4 [i_1] [i_0]))))));
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */int) min((arr_1 [i_1]), (arr_1 [i_0])))) * ((((_Bool)1) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))))));
            }
        } 
    } 
    var_17 |= min(((_Bool)1), (var_4));
}
