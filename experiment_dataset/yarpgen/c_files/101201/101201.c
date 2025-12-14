/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((var_3 ? var_4 : var_6))) ? (!51272) : (var_0 / var_1));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 -= (14264 || 14074559536667076349);
        arr_2 [i_0] [i_0] = (max((((!(arr_0 [i_0])))), 4372184537042475267));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_10 [i_1] [i_1] [i_1] = ((var_15 ? ((((((arr_0 [i_1]) - -22))) ? 2147483647 : (((arr_1 [4]) ? var_5 : 0)))) : (((max(51272, (var_6 < var_9)))))));
                        var_20 = (max(159, (min(2905020651206859561, (arr_6 [i_0] [i_1] [i_1])))));
                        arr_11 [i_0] [i_0] [i_1] [i_2] [i_0] [i_3] = (((((1958329816 / 2905020651206859561) + (((14264 << (1958329816 - 1958329804))))))) || (((14264 ? ((14074559536667076349 ? var_8 : var_3)) : (arr_0 [i_0])))));
                        arr_12 [i_1] [i_1] [i_2] [i_3] [i_0] [i_1] = var_13;
                    }
                }
            }
        }
        arr_13 [i_0] [i_0] = ((var_8 ? ((((-28368 + 2147483647) >> ((((var_9 ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : var_5)) - 16562500242332796961))))) : (((((35269 ? 2635386184 : 20428))) ? 2336637479 : (min((arr_3 [i_0]), 159))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_21 |= (((((arr_0 [i_4]) & var_17)) % (-4616465345821018926 <= 2336637479)));
        var_22 = arr_8 [i_4] [i_4] [i_4] [i_4];
        var_23 += var_9;
        var_24 = ((14074559536667076349 ? var_4 : 2336637479));
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        var_25 = (max((((arr_18 [i_5]) ? (arr_18 [i_5]) : var_8)), 200));
        var_26 = (((((14264 != 8) ? 15302667194182984789 : var_0)) / var_7));
        arr_19 [i_5] = var_6;
        var_27 = (max(var_27, (((((((arr_5 [i_5] [i_5] [2] [i_5 - 1]) ? 424454371 : 0))) ? (((((1570135553 ? 4294967295 : 51272))) ? (((var_7 << (((arr_17 [i_5]) - 9562302372332192605))))) : 17592185782272)) : (((max((arr_8 [i_5] [i_5] [1] [i_5]), 233)))))))));
    }
    #pragma endscop
}
