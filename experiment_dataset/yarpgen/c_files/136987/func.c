/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136987
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
    var_12 = ((/* implicit */short) var_4);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) arr_0 [(short)2]))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_0] [(short)17])))))));
                arr_5 [i_0] = ((/* implicit */short) var_4);
                var_14 += ((/* implicit */_Bool) arr_1 [i_0]);
            }
        } 
    } 
}
