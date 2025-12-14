/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164612
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
    var_17 = ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) - (4158732637U));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((1297417922) != (((/* implicit */int) (unsigned short)5898))))), (((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_1])) * (((/* implicit */int) arr_2 [i_0] [(_Bool)1]))))) + (((6U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))))));
                var_19 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) (unsigned short)46245)) / (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_1 [15ULL])) : (((/* implicit */int) (unsigned short)59639)))))));
            }
        } 
    } 
}
