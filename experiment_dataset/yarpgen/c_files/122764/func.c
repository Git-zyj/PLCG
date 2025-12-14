/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122764
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
    var_19 = ((/* implicit */unsigned int) ((long long int) (_Bool)1));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) (-2147483647 - 1));
                var_21 = ((/* implicit */long long int) arr_3 [i_0]);
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_5 [i_1] [i_1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_5 [i_0] [i_0])))) : (((unsigned int) (_Bool)0))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) var_3);
}
