/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((var_1 ? 3270002575838316763 : (((max(255, 9342)))))), (((-(var_5 == var_2))))));
    var_11 = (max(var_0, (((max(var_8, -957387572))))));
    var_12 = ((var_8 ? var_7 : ((((min(var_4, var_9))) ? var_5 : var_9))));

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_13 -= ((4 ? (arr_1 [i_0]) : (((!4294967281) / -5409401521913396025))));
        arr_2 [i_0] [i_0] = -3270002575838316760;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        {

                            for (int i_5 = 3; i_5 < 11;i_5 += 1)
                            {
                                var_14 = var_8;
                                var_15 = (min((~1), (!-9345)));
                                arr_14 [i_1] [i_3] |= (((((9 ? ((var_4 ? (arr_9 [i_1] [i_3]) : var_2)) : var_3))) ? (max((~20703), (41756 & 9))) : (((((~(arr_8 [10] [i_3] [9] [9]))) ^ 1)))));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 12;i_6 += 1)
                            {
                                arr_18 [i_1] [i_2] [i_3] = ((127 ? -117 : 13));
                                arr_19 [i_2] [i_2] [5] [i_4] [i_4] [8] [i_6] = (-(134152192 + var_6));
                                arr_20 [i_6] [i_6] [i_2] = -5409401521913396016;
                                arr_21 [i_1] [i_1] [i_2] [i_2] [i_6] [i_2] [i_2] = (((arr_17 [i_2 - 1] [i_2 + 2] [i_2 + 2] [i_2] [i_2 + 1]) ? (arr_6 [i_2 - 1] [i_2 - 1] [i_2 + 1]) : var_5));
                            }
                            arr_22 [i_1] [i_1] [i_3] [i_4] [i_2] = (min(((1 ? 5409401521913396001 : (1502219658 / var_3))), (!var_3)));
                        }
                    }
                }
                var_16 = (max(var_16, ((((var_1 / 49675) ? (arr_7 [11] [i_2]) : (var_0 & var_0))))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        {
                            var_17 = (max(var_17, ((((((3 ? 795612334 : 1))) ? var_5 : -25168)))));
                            arr_29 [i_1] [i_2] [i_7] [i_8] = ((-20340 / (max(((~(arr_9 [i_8] [i_2]))), -20343))));

                            /* vectorizable */
                            for (int i_9 = 1; i_9 < 11;i_9 += 1) /* same iter space */
                            {
                                var_18 |= (1 < (var_8 && -11052));
                                var_19 &= (--2657872801246748744);
                            }
                            /* vectorizable */
                            for (int i_10 = 1; i_10 < 11;i_10 += 1) /* same iter space */
                            {
                                arr_36 [i_2] = var_0;
                                arr_37 [i_1] [i_1] [i_1] [i_1] [2] [i_2] [9] = (arr_9 [i_1] [i_2]);
                            }
                            /* vectorizable */
                            for (int i_11 = 1; i_11 < 11;i_11 += 1) /* same iter space */
                            {
                                arr_40 [4] [i_8] [i_2] = -var_4;
                                arr_41 [i_1] [i_2] [i_7] [i_1] [i_2] [i_11] = 1;
                                arr_42 [i_11] [i_2] [i_2] [1] [i_11] = ((((var_2 ? var_8 : var_0)) >> (((((arr_8 [i_1] [i_7] [i_8] [i_11]) << (((var_3 + 6230990072049324099) - 27)))) - 1249927801))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
