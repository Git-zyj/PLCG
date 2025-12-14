/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107271
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_1])) >> (((min((((/* implicit */unsigned int) var_13)), (((unsigned int) var_1)))) - (83U)))));
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) var_10);
            }
        } 
    } 
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_1))))), (((short) var_13)))))));
    var_15 = ((/* implicit */unsigned short) var_8);
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_4))));
}
