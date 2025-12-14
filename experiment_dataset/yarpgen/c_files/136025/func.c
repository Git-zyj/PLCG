/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136025
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) ((unsigned short) ((long long int) ((short) arr_1 [i_0]))));
                    arr_7 [i_0] = ((/* implicit */unsigned short) arr_4 [i_0] [i_1 - 3] [i_1 - 3]);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) ((unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_2))))));
}
