/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180269
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
    var_12 ^= ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) ((var_2) << (((58720256) - (58720256)))))) ? (((/* implicit */int) min((var_1), (var_9)))) : (((/* implicit */int) var_9)))));
    var_13 ^= ((/* implicit */short) (~((~(var_2)))));
    var_14 = ((/* implicit */short) var_6);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [3] [i_0] [i_2] = ((short) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [(short)7]))))), (arr_6 [i_2] [i_2] [i_2 - 1] [i_2])));
                    var_15 = ((/* implicit */int) (short)32256);
                }
            } 
        } 
    } 
}
