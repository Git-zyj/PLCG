/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (min(0, var_1))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = var_19;
        arr_2 [i_0] = (var_1 | var_19);
        var_22 = ((1 ? 0 : 1));
        var_23 = ((var_13 ? ((1 ? ((((arr_1 [i_0] [1]) == 1))) : (arr_1 [i_0] [i_0]))) : (0 * 1)));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            arr_7 [i_1] [i_2 - 1] [i_2 - 1] = (!1);
            var_24 = (max(var_24, ((((arr_1 [i_2 - 1] [i_2 - 1]) ? (arr_4 [i_1]) : var_16)))));
            arr_8 [i_1] &= (!var_19);
        }
        arr_9 [i_1] = 1;
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_25 *= (1 >= 1);
        var_26 = var_8;
        var_27 = arr_3 [i_3] [i_3];
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_28 = var_1;
                    var_29 = arr_20 [i_4] [i_5] [i_6];
                }
            }
        }
    }
    var_30 = -var_8;
    #pragma endscop
}
