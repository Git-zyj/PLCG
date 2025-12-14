/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((var_4 ? (var_8 + -1405401768) : var_3))) == (((var_8 / var_9) * ((56898 ? var_6 : var_8)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, ((((145 / -6161553872160784126) * (((min(571957152676052992, 6161553872160784125)) * (((5607 ? var_10 : (arr_0 [i_2])))))))))));
                    var_14 = 6161553872160784125;
                    arr_8 [i_0] [i_0] = var_0;
                }
            }
        }
    }
    var_15 = (~-6161553872160784126);
    var_16 = ((-6161553872160784125 <= (((((var_9 ? 6161553872160784126 : var_11)))))));
    var_17 = (max(var_17, (((((!(((var_5 >> (var_9 - 59)))))) || var_1)))));
    #pragma endscop
}
