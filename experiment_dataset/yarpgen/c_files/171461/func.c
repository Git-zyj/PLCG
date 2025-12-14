/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171461
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
    for (signed char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0 + 1] = ((/* implicit */unsigned int) arr_2 [i_0 - 1]);
                var_18 = ((/* implicit */unsigned char) ((arr_6 [i_0 - 1] [i_0 - 1] [14U]) | (max((((/* implicit */long long int) var_14)), (arr_5 [i_1] [i_1] [i_1])))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) var_7);
    var_20 = ((/* implicit */unsigned char) (unsigned short)47921);
    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) ((int) var_0))))));
}
