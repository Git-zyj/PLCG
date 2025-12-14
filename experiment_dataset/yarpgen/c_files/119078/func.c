/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119078
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
    var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)166))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */short) arr_2 [i_1] [i_0]);
                arr_7 [i_0] [i_1] = ((/* implicit */_Bool) (signed char)75);
                arr_8 [i_0] = ((/* implicit */short) var_2);
                var_15 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (arr_5 [i_1 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_1 + 1])) : (((/* implicit */int) arr_2 [i_0] [i_1 + 1])))))));
            }
        } 
    } 
}
