/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185442
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
    var_17 = -1844421990094395652LL;
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_16)), (16252928U)))))))) : ((~(min((4278714368U), (var_15)))))));
    var_19 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) 1851554638)) ? (((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_11))) : (((/* implicit */unsigned int) ((int) var_0))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */signed char) arr_5 [i_0] [i_1 + 4] [i_0] [i_2 + 1]);
                    arr_9 [i_1] [i_1 - 1] [i_2 + 1] = ((/* implicit */unsigned short) max((var_11), ((~(((((/* implicit */_Bool) var_7)) ? (16252928U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))));
                }
            } 
        } 
    } 
}
