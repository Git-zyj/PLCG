/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187169
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
    var_20 = ((/* implicit */long long int) (+(((/* implicit */int) (short)4095))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */long long int) arr_2 [i_0] [i_1]);
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((short) arr_2 [i_0] [i_0]))), (((((arr_0 [i_0]) + (2147483647))) >> (((((/* implicit */int) (short)-6098)) + (6114)))))));
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((((/* implicit */_Bool) ((short) 2605086715U))) ? (((unsigned long long int) (short)27061)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_4 [i_1])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27071)))));
                var_23 ^= ((/* implicit */unsigned int) (+((-(arr_1 [i_0])))));
            }
        } 
    } 
}
