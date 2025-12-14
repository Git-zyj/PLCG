/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, ((((arr_3 [i_0] [i_0] [7]) + ((max(var_15, var_16))))))));
                    var_20 |= var_8;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            {
                var_21 = arr_12 [i_3];
                arr_14 [i_4] [i_3] [i_3] |= (max((((var_9 - var_12) / ((var_14 / (arr_11 [1] [1]))))), var_1));
            }
        }
    }
    var_22 = ((var_13 * (var_8 > var_14)));
    #pragma endscop
}
