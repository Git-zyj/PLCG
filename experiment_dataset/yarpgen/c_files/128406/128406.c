/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    var_19 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        var_20 -= var_0;
                        var_21 = var_15;
                        arr_12 [i_0] [i_1] [i_1] [6] |= (((arr_8 [i_3 - 1] [i_2 + 1] [i_1]) ? var_11 : (arr_8 [i_3 - 1] [i_2 + 1] [i_1])));
                    }
                    arr_13 [5] [i_1] [i_0] [i_0] = (min(var_3, (((((var_4 ? var_6 : 34361)) != (var_9 | var_6))))));
                }
            }
        }
    }
    var_22 = (max(var_22, var_14));
    var_23 = (((((min(var_7, var_9))) ? (var_14 < var_8) : var_16)));
    #pragma endscop
}
