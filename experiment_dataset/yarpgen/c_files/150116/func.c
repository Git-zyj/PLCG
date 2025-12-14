/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150116
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
    var_10 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_8)) : (1674435773U))), (((/* implicit */unsigned int) ((_Bool) var_1)))));
    var_11 = ((/* implicit */long long int) 2620531522U);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_12 ^= ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_1 [i_1]))))));
                var_13 *= ((/* implicit */short) arr_5 [(_Bool)1] [i_0]);
            }
        } 
    } 
}
