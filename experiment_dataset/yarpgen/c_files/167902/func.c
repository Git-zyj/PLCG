/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167902
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
    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) var_1))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_21 = min((((/* implicit */int) (((_Bool)1) && ((_Bool)1)))), (min((((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) var_4)))), (((/* implicit */int) var_8)))));
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_0])) ^ (((/* implicit */int) min((arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 1]), (arr_0 [i_0] [i_1 + 1]))))));
                }
            } 
        } 
    } 
}
