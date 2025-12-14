/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17740
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
        var_18 = ((/* implicit */_Bool) ((((((/* implicit */int) var_13)) < (((/* implicit */int) var_7)))) ? (((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) var_2)))) : ((~(((/* implicit */int) (_Bool)1))))));
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (unsigned char)222))));
    }
    var_20 = ((_Bool) ((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) ((unsigned char) (_Bool)1)))));
    /* LoopNest 3 */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    var_21 += (unsigned char)213;
                    var_22 -= min((min((((/* implicit */unsigned char) arr_10 [i_1 + 1])), (arr_4 [i_1 + 1]))), (((/* implicit */unsigned char) ((((_Bool) arr_6 [i_3] [i_2] [i_1])) || (((/* implicit */_Bool) var_0))))));
                }
            } 
        } 
    } 
}
