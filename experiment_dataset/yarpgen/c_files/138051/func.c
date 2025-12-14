/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138051
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
    for (int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((((/* implicit */int) ((unsigned short) ((arr_3 [i_0] [i_0] [i_0]) + (((/* implicit */int) arr_0 [6])))))) + (((/* implicit */int) var_6)));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) arr_2 [i_1 - 1] [i_0 - 1] [i_0]);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((((~(((/* implicit */int) (unsigned short)65533)))) + (2147483647))) << (((((var_11) + (((/* implicit */int) var_12)))) - (679796760))))))));
}
