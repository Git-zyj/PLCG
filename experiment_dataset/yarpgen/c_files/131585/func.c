/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131585
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
    var_20 = ((/* implicit */int) var_5);
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 4; i_2 < 14; i_2 += 2) 
            {
                {
                    var_21 += ((/* implicit */_Bool) min((((((/* implicit */int) arr_5 [i_1 - 2] [i_0 + 2] [i_2 + 3] [i_1 - 2])) / (((/* implicit */int) arr_5 [i_1 + 1] [i_0 - 1] [i_2 - 2] [i_2])))), (((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_0 + 1])) ? (var_11) : (-1332403560))) <= (((((/* implicit */int) (short)4683)) + (((/* implicit */int) arr_6 [i_0 - 2] [i_1] [i_2] [i_2])))))))));
                    var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)4128))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) max((1467090473), (((/* implicit */int) var_1))));
}
