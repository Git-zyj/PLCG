/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102545
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
    var_14 = ((/* implicit */unsigned int) (_Bool)1);
    var_15 = ((/* implicit */int) max((var_15), ((+(var_11)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) var_4);
                var_17 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 - 2] [i_1 - 1])) ? (((/* implicit */int) arr_2 [i_1 - 1] [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) arr_2 [i_1 - 2] [i_1 + 1] [i_1 - 2])))));
            }
        } 
    } 
}
