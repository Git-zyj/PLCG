/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_7));
    var_16 = (((var_12 ? var_12 : var_9)) / var_14);

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_4 [i_0] [i_0 + 1] = ((!((var_10 || ((min(-82, -77)))))));
        var_17 = (min(var_17, var_4));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_0 + 1] = (~-27);
                        arr_14 [i_1] [i_0] [i_0 + 1] = (((((arr_12 [7] [7] [15] [i_3]) ? 1 : (arr_12 [i_3] [i_3] [i_3 - 1] [i_3 + 1]))) ^ ((((arr_3 [i_0 + 1] [i_1]) ? 365964589 : 511)))));
                    }
                }
            }
        }
    }
    var_18 = var_8;
    #pragma endscop
}
