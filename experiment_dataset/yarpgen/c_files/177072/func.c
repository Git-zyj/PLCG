/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177072
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
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_0])) + ((+(((/* implicit */int) max((((/* implicit */unsigned short) (short)-28071)), ((unsigned short)50554))))))));
                var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) arr_0 [i_0 + 1] [i_0 - 1])))));
                arr_6 [i_1] = ((/* implicit */short) (unsigned char)15);
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) var_16);
}
