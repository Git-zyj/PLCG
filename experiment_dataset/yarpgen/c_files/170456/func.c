/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170456
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
    var_18 = ((/* implicit */signed char) var_15);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 83491046U)) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) : ((+(((/* implicit */int) (short)0))))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_6)))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) max((((((/* implicit */int) (!(((/* implicit */_Bool) (short)-12))))) % (((/* implicit */int) var_4)))), (((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_13))))), (var_6))))));
}
