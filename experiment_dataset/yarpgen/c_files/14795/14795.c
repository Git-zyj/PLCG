/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_4 [i_0] |= (!var_9);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    var_13 *= (((!var_1) ? ((var_9 ? var_10 : var_5)) : (34599 || var_6)));
                    arr_11 [i_0] [i_1] [i_2 - 3] = (30946 % 98386531);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_14 = var_4;

        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_15 = (min(var_15, (((((min(6911348931459641011, (-9223372036854775807 - 1)))) ? ((var_1 ? 2826730064 : ((var_7 ? var_4 : var_0)))) : var_2)))));
            arr_16 [i_4] = var_0;
            var_16 = (min((var_9 && var_1), (min((-9223372036854775807 - 1), var_3))));
        }
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        arr_20 [i_5] = ((var_10 ? var_4 : (min(var_1, (var_11 - var_5)))));
        arr_21 [i_5] = var_3;
        var_17 = ((15562456341388052129 ? ((((var_12 ? var_3 : var_6)) >> (var_0 - 3926881555))) : var_10));
    }
    var_18 += -var_4;
    var_19 = (((--9223372036854775807) ? var_5 : var_2));
    var_20 = var_8;
    #pragma endscop
}
