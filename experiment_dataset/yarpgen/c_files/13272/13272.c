/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    var_14 = (1113399810 > 1);

    for (int i_0 = 2; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_15 = var_7;
        var_16 = 2147483623;
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_17 = ((!(arr_0 [i_1 + 2])));
        var_18 += (((arr_3 [i_1 - 2]) ? -1035659609 : -var_2));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_19 *= (((arr_5 [i_2]) >= (((!(arr_5 [i_2]))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 11;i_5 += 1)
                {
                    {
                        var_20 = (arr_10 [i_2] [i_2] [i_2]);
                        var_21 = (max(var_21, (arr_12 [1] [i_3])));
                        arr_15 [i_2] [i_3] [i_3] [i_4] [i_5] = (~(((arr_11 [i_5 + 3] [i_3] [i_4 - 2]) ? (((-2147483619 + 2147483647) >> (((arr_7 [i_2] [i_2]) + 139)))) : (arr_13 [i_5] [i_5] [i_5 + 3] [i_5 + 3]))));
                        var_22 = (arr_14 [i_2] [i_5]);

                        for (int i_6 = 1; i_6 < 12;i_6 += 1) /* same iter space */
                        {
                            arr_19 [i_2] [i_3] [i_4 - 1] [8] [i_6 + 1] [i_6] = (arr_7 [i_2] [i_2]);
                            arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] = ((((1 && (arr_17 [1] [i_3] [i_3] [i_3] [i_3]))) ? (arr_16 [i_4] [i_4]) : (arr_10 [i_6] [i_5] [i_2])));
                        }
                        for (int i_7 = 1; i_7 < 12;i_7 += 1) /* same iter space */
                        {
                            arr_23 [i_7] [i_7] = ((!((min(((-(arr_14 [i_2] [i_2]))), 30530)))));
                            var_23 = (arr_22 [i_2] [i_3]);
                            var_24 = (!-27006);
                            arr_24 [i_3] [i_4] [i_7] = (arr_8 [i_2]);
                            var_25 = var_0;
                        }
                        for (int i_8 = 1; i_8 < 12;i_8 += 1)
                        {
                            arr_28 [i_8] [i_5 - 1] [i_4 - 2] [i_3] [i_8] = (~(((((((arr_18 [i_2] [i_3] [3] [i_5] [i_8] [i_8] [3]) * 1))) > ((1 ? 4294967295 : (arr_11 [i_3] [i_3] [i_8])))))));
                            var_26 = ((0 ? ((var_8 + (arr_21 [i_4 - 2] [i_5 + 3] [i_5 + 3] [i_5 - 1] [i_8 + 1] [i_8 - 1]))) : (arr_21 [i_4 - 2] [i_5 + 2] [i_5 + 3] [i_5 - 1] [i_8 - 1] [i_8 - 1])));
                            arr_29 [i_2] [i_3] [0] [i_8] [i_8] [i_2] [10] = var_9;
                            var_27 = (max(var_27, (((~(arr_26 [i_5 - 1] [i_5] [8] [i_2] [i_5 - 1] [i_5]))))));
                        }
                    }
                }
            }
        }
        arr_30 [i_2] = (arr_14 [i_2] [i_2]);
        arr_31 [i_2] [i_2] &= var_7;
    }
    #pragma endscop
}
