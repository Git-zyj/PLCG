/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_0] = (arr_6 [i_1] [i_0] [i_0]);
                var_11 = ((!(((4398046511103 / (arr_0 [i_0] [i_1]))))));
            }
        }
    }
    var_12 = var_4;
    var_13 = (max((((var_5 != (var_3 / -28883)))), (var_2 * var_3)));

    for (int i_2 = 3; i_2 < 20;i_2 += 1)
    {
        arr_10 [i_2] [i_2 - 3] = ((-((((min(28883, (arr_9 [i_2] [i_2])))) - (arr_8 [i_2 + 1])))));
        var_14 = (!-28883);
        var_15 *= (((~1) * (arr_9 [i_2 + 1] [i_2 + 1])));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_16 = (min(var_16, (arr_11 [i_3])));
        arr_13 [i_3] = arr_12 [i_3] [i_3];
        arr_14 [i_3] [i_3] = (min(((-(arr_11 [i_3]))), 0));
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                {
                    var_17 -= arr_6 [i_4] [i_4] [i_4];
                    var_18 = (max(var_18, -95));
                }
            }
        }
    }
    #pragma endscop
}
