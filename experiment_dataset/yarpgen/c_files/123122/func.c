/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123122
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
    var_15 = max(((signed char)4), (((/* implicit */signed char) (_Bool)1)));
    var_16 = ((/* implicit */signed char) var_11);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((min((arr_2 [i_0]), ((_Bool)1))) ? (((((/* implicit */int) arr_5 [i_0])) ^ (((/* implicit */int) var_3)))) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_3 [i_0] [i_0] [i_0]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) : (var_7)));
                    arr_7 [i_1] = ((/* implicit */unsigned int) (signed char)118);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) min((min((((((((/* implicit */int) var_12)) + (2147483647))) << (((((/* implicit */int) var_14)) - (1))))), (((((/* implicit */int) var_4)) - (((/* implicit */int) (signed char)56)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 1977691931U))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))))));
}
