/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166324
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
    var_16 = ((((/* implicit */unsigned int) var_3)) <= (3120707175U));
    var_17 = var_0;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) var_3))));
                    var_19 += ((/* implicit */int) ((0U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))));
                }
            } 
        } 
    } 
    var_20 = var_2;
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) 1697553328U))));
}
