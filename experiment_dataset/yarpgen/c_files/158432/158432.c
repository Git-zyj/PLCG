/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_5 ? ((103 ? 1316353665487649616 : 1)) : ((((var_17 < (var_1 * var_0)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = (max(var_19, ((((arr_5 [i_0]) ? (arr_0 [i_0] [i_1]) : (((arr_2 [i_0]) ? (arr_1 [i_0] [i_1]) : var_1)))))));
                arr_6 [i_1] = (arr_0 [i_0] [i_1]);
            }
        }
    }
    #pragma endscop
}
