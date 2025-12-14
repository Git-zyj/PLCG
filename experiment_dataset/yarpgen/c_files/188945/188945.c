/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 = (min(var_20, -1));
        arr_2 [i_0] = var_15;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (min(3, (((arr_0 [i_1]) ? 60 : -var_8))));
        var_21 = (var_14 / 9223372036854775804);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {
                    var_22 -= (max(((var_10 ? var_4 : (arr_9 [9] [i_3] [i_3 - 1]))), (((!(((128 ? (arr_10 [i_1] [i_2] [i_3] [i_3]) : var_10))))))));
                    var_23 = (((!11725012523946443795) >= (arr_9 [i_1] [i_3 - 1] [i_1])));
                    var_24 = (max(var_24, (((-(-9223372036854775805 + 160))))));
                    var_25 = (max(var_25, ((min((((arr_6 [i_1] [i_1]) ? -9223372036854775804 : (arr_9 [i_3 - 1] [i_2] [i_3 - 1]))), (((((~(arr_7 [i_1] [13]))) + (arr_8 [i_1])))))))));
                }
            }
        }
    }
    var_26 = (min(var_26, var_14));
    #pragma endscop
}
